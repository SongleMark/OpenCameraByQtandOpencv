#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QWaitCondition>
#include <QMutex>
#include <QLabel>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/types_c.h>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/videoio.hpp>

namespace Ui {
class MainWindow;
}

/// 工作模式 连续采集/软件触发
enum {
    CONTINUE_MODE,
    SOFTWARE_MODE
};

/// 软件触发信号数字
enum {
    PAUSING_NUM,
    RUNING_NUM
};

/// 拍照模式 手动/自动
enum {
    MANUAL_MODE,
    AUTO_MODE
};

/// 抓图线程抓帧传输是否完成
enum {
    THREAD_ISIDLE,
    THREAD_ISRUNING
};

class CameraThread : public QThread
{
    Q_OBJECT

public:
    explicit CameraThread(int count = 0, int workmode = CONTINUE_MODE, bool isstop = false, int status = 0);
    ~CameraThread();
    void run();
    void Stop();
    void Pause();
    void Start();

signals:
    /// 抓到图像传送给ui界面显示
    void GrabFrame(cv::Mat frame, int grabfps);

private slots:
    void RecvWorkMode(int workmode);
    void ResetFpsSlot();

private:
    cv::Mat mFrame;
    bool mIsStop;
    int mWorkMode;
    int mCount;
    int mStatus;
    int mGrabFps;
    QWaitCondition mWaitcondtion;
    QMutex mMutex;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);

private slots:
    /// 接收抓图线程抓到的帧并显示
    void RecvFrame(cv::Mat mat, int grabfps);
    /// 触发模式选择
    void on_radioButtonContinue_clicked(bool checked);
    void on_radioButtonSoftware_clicked(bool checked);
    /// 软件触发时点击拍照按钮
    void on_pushButtonTakepic_clicked();
    /// 保存图像到指定路径
    void on_pushButtonSave_clicked();
    /// 选择保存图像的地址
    void on_pushButtonChoosePath_clicked();
    /// 图像保存格式
    void on_radioButtonJPG_clicked(bool checked);
    void on_radioButtonBMP_clicked(bool checked);
    void on_radioButtonPNG_clicked(bool checked);
    /// Fps
    void UpDateFps();

signals:
    void SetWorkMode(int workmode);
    void ResetGrabFps();

private:
    Ui::MainWindow *ui;
    CameraThread *mCameraThread;
    QString mPath;
    QImage mImage;
    QString mImageSaveFormat;
    QLabel *mLabelFps;
    int mReadFps;
    int mDisplayFps;

};

#endif // MAINWINDOW_H
