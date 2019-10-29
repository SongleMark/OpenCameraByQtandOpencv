#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDateTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    setWindowTitle(tr("基于Opencv与QT5的打开笔记本摄像头显示"));
    mImageSaveFormat = QString(".jpg");
    ui->lineEdit->setEnabled(false);
    ui->scrollAreaSoftware->setEnabled(false);
    ui->scrollAreaSoftware->setStyleSheet("color:gray");
    mLabelFps = new QLabel(this);
    mLabelFps->setAlignment(Qt::AlignHCenter);
    ui->statusBar->addWidget(mLabelFps);
    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(UpDateFps()));
    timer->start();

    mCameraThread = new CameraThread();
    mCameraThread->start();
    connect(mCameraThread, SIGNAL(GrabFrame(cv::Mat, int)), this, SLOT(RecvFrame(cv::Mat, int)), Qt::DirectConnection);
    connect(this, SIGNAL(SetWorkMode(int)), mCameraThread, SLOT(RecvWorkMode(int)), Qt::DirectConnection);
    connect(this, SIGNAL(ResetGrabFps()), mCameraThread, SLOT(ResetFpsSlot()), Qt::DirectConnection);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event) {
    mCameraThread->Stop();
    delete mCameraThread;
}

/// 接收抓图线程抓到的帧并显示
void MainWindow::RecvFrame(cv::Mat mat, int grabfps) {
    switch(mat.type()) {
    case CV_8UC1:
        mImage = QImage(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        mImage.setColorCount(256);
        for(int i = 0; i < 256; i++)  {
            mImage.setColor(i, qRgb(i, i, i));
        }
        break;
    case CV_8UC3:
        cv::cvtColor(mat, mat, CV_BGR2RGB);
        mImage = QImage(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        break;
    case CV_8UC4:
        // Create QImage with same dimensions as input Mat
        mImage = QImage(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        break;
    default:
        break;
    }

    QSize size = ui->label->size();
    QImage image = mImage.scaled(size, Qt::IgnoreAspectRatio);
    ui->label->setPixmap(QPixmap::fromImage(image));
    mDisplayFps ++;
    mReadFps = grabfps;
}

/// 连续采集模式
void MainWindow::on_radioButtonContinue_clicked(bool checked) {
    if(checked) {
        ui->scrollAreaSoftware->setEnabled(false);
        ui->scrollAreaSoftware->setStyleSheet("color:gray");
        ui->pushButtonSave->setEnabled(true);
        ui->pushButtonSave->setStyleSheet("color:rgb(46, 52, 54)");
        emit SetWorkMode(CONTINUE_MODE);
    }
}

/// 软件触发模式
void MainWindow::on_radioButtonSoftware_clicked(bool checked) {
    if(checked) {
        ui->scrollAreaSoftware->setEnabled(true);
        ui->scrollAreaSoftware->setStyleSheet("color:rgb(46, 52, 54)");
        ui->pushButtonSave->setEnabled(false);
        ui->pushButtonSave->setStyleSheet("color:gray");
        emit SetWorkMode(SOFTWARE_MODE);
    }
}

/// 软件触发时点击拍照按钮
void MainWindow::on_pushButtonTakepic_clicked() {
    mCameraThread->Start();
}

/// 保存图像到指定路径
void MainWindow::on_pushButtonSave_clicked() {
    QDateTime datetime = QDateTime::currentDateTime();
    QString time = datetime.toString("yyyy_MM_dd_hh_mm_ss_zzz");
    QString path = mPath + "/" + time + mImageSaveFormat;
    if(!mImage.save(path)) {
        QMessageBox::warning(nullptr, tr("保存错误"), tr("保存图像失败"));
        return ;
    }
    QMessageBox::information(nullptr, tr("成功"), tr("保存图像成功"));
}

/// 选择保存图像的地址
void MainWindow::on_pushButtonChoosePath_clicked() {
    mPath = QFileDialog::getExistingDirectory(this, tr("请选择保存路径"), tr("./"));
    ui->lineEdit->clear();
    ui->lineEdit->setText(mPath);
}

/// JPG格式
void MainWindow::on_radioButtonJPG_clicked(bool checked) {
    if(checked) {
        mImageSaveFormat = QString(".jpg");
    }
}

/// BMP格式
void MainWindow::on_radioButtonBMP_clicked(bool checked) {
    if(checked) {
        mImageSaveFormat = QString(".bmp");
    }
}

/// PNG格式
void MainWindow::on_radioButtonPNG_clicked(bool checked) {
    if(checked) {
        mImageSaveFormat = QString(".png");
    }
}

/// FPS
void MainWindow::UpDateFps() {
    QString readfps = QString::number(mReadFps, 10);
    QString displayfps = QString::number(mDisplayFps, 10);
    mLabelFps->setText(tr("Grab fps : %1  Display fps : %2").arg(readfps).arg(displayfps));
    mReadFps = 0;
    mDisplayFps = 0;
    emit ResetGrabFps();
}

CameraThread::CameraThread(int count, int workmode, bool isstop, int status):
    mCount(count),
    mWorkMode(workmode),
    mIsStop(isstop),
    mStatus(status) {
    mGrabFps = 0;
}

CameraThread::~CameraThread() {

}

void CameraThread::run() {
    cv::VideoCapture m_Capture(0);
    while(!mIsStop) {
        switch(mWorkMode) {
        case CONTINUE_MODE: // 连续采集 -------------------------------------
            mMutex.lock();
            m_Capture >> mFrame;
            mGrabFps ++;
            mMutex.unlock();
            emit GrabFrame(mFrame, mGrabFps);
            break;

        case SOFTWARE_MODE: // 软件触发 --------------------------------------
            mMutex.lock();
            if(PAUSING_NUM == mCount) {
                mWaitcondtion.wait(&mMutex);
            }
            mCount --;
            mStatus = THREAD_ISRUNING;
            m_Capture >> mFrame;
            mStatus = THREAD_ISIDLE;
            mMutex.unlock();
            emit GrabFrame(mFrame, mGrabFps);
            break;

        default:
            break;
        }
    }
}

/// 终止线程
void CameraThread::Stop() {
    if(SOFTWARE_MODE == mWorkMode) {
        mWaitcondtion.wakeAll();
        mCount = PAUSING_NUM;
    }
    mIsStop = true;
    quit();
    wait();
}

void CameraThread::Pause() {

}

/// 点击拍照按钮启动软件触发
void CameraThread::Start() {
    if(THREAD_ISIDLE == mStatus) {
        mCount = RUNING_NUM;
        mWaitcondtion.wakeAll();
    }
}

/// 抓图线程接收工作模式信号
void CameraThread::RecvWorkMode(int workmode) {
    mStatus = THREAD_ISIDLE;
    mCount = PAUSING_NUM;
    if(SOFTWARE_MODE == mWorkMode && CONTINUE_MODE == workmode) {
        mWaitcondtion.wakeAll();
    }
    mWorkMode = workmode;
}

/// 将抓取帧率清零
void CameraThread::ResetFpsSlot() {
    mGrabFps = 0;
}

