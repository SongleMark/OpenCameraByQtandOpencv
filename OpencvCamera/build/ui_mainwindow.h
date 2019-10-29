/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_2;
    QRadioButton *radioButtonContinue;
    QRadioButton *radioButtonSoftware;
    QScrollArea *scrollAreaSoftware;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *label_3;
    QPushButton *pushButtonTakepic;
    QLabel *label_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *label_5;
    QPushButton *pushButtonSave;
    QLineEdit *lineEdit;
    QPushButton *pushButtonChoosePath;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonJPG;
    QRadioButton *radioButtonBMP;
    QRadioButton *radioButtonPNG;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(698, 728);
        MainWindow->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(9, 40, 681, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 679, 529));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 20, 661, 501));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 569, 241, 81));
        scrollArea_2->setStyleSheet(QStringLiteral(""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 239, 79));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 81, 21));
        radioButtonContinue = new QRadioButton(scrollAreaWidgetContents_2);
        radioButtonContinue->setObjectName(QStringLiteral("radioButtonContinue"));
        radioButtonContinue->setGeometry(QRect(10, 42, 101, 31));
        radioButtonContinue->setChecked(true);
        radioButtonSoftware = new QRadioButton(scrollAreaWidgetContents_2);
        radioButtonSoftware->setObjectName(QStringLiteral("radioButtonSoftware"));
        radioButtonSoftware->setGeometry(QRect(120, 42, 101, 31));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollAreaSoftware = new QScrollArea(centralWidget);
        scrollAreaSoftware->setObjectName(QStringLiteral("scrollAreaSoftware"));
        scrollAreaSoftware->setGeometry(QRect(560, 570, 131, 81));
        scrollAreaSoftware->setStyleSheet(QStringLiteral(""));
        scrollAreaSoftware->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 129, 79));
        label_3 = new QLabel(scrollAreaWidgetContents_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 21));
        pushButtonTakepic = new QPushButton(scrollAreaWidgetContents_3);
        pushButtonTakepic->setObjectName(QStringLiteral("pushButtonTakepic"));
        pushButtonTakepic->setGeometry(QRect(20, 40, 101, 31));
        scrollAreaSoftware->setWidget(scrollAreaWidgetContents_3);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 10, 471, 31));
        label_4->setStyleSheet(QStringLiteral("font: 17pt \"Ubuntu\";"));
        scrollArea_3 = new QScrollArea(centralWidget);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(250, 570, 311, 80));
        scrollArea_3->setStyleSheet(QStringLiteral(""));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 309, 78));
        label_5 = new QLabel(scrollAreaWidgetContents_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 10, 81, 21));
        pushButtonSave = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(250, 0, 51, 41));
        lineEdit = new QLineEdit(scrollAreaWidgetContents_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 50, 261, 25));
        pushButtonChoosePath = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonChoosePath->setObjectName(QStringLiteral("pushButtonChoosePath"));
        pushButtonChoosePath->setGeometry(QRect(260, 50, 41, 25));
        widget = new QWidget(scrollAreaWidgetContents_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 10, 173, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonJPG = new QRadioButton(widget);
        radioButtonJPG->setObjectName(QStringLiteral("radioButtonJPG"));
        radioButtonJPG->setChecked(true);

        horizontalLayout->addWidget(radioButtonJPG);

        radioButtonBMP = new QRadioButton(widget);
        radioButtonBMP->setObjectName(QStringLiteral("radioButtonBMP"));

        horizontalLayout->addWidget(radioButtonBMP);

        radioButtonPNG = new QRadioButton(widget);
        radioButtonPNG->setObjectName(QStringLiteral("radioButtonPNG"));

        horizontalLayout->addWidget(radioButtonPNG);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\350\247\246\345\217\221\346\250\241\345\274\217", Q_NULLPTR));
        radioButtonContinue->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206", Q_NULLPTR));
        radioButtonSoftware->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\350\247\246\345\217\221", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\350\247\246\345\217\221", Q_NULLPTR));
        pushButtonTakepic->setText(QApplication::translate("MainWindow", "\346\213\215\347\205\247", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\237\272\344\272\216Opencv\344\270\216QT5\347\232\204\346\211\223\345\274\200\347\254\224\350\256\260\346\234\254\346\221\204\345\203\217\345\244\264\346\230\276\347\244\272</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\233\276\345\203\217", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("MainWindow", "\346\215\225\350\216\267", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "./", Q_NULLPTR));
        pushButtonChoosePath->setText(QApplication::translate("MainWindow", "......", Q_NULLPTR));
        radioButtonJPG->setText(QApplication::translate("MainWindow", "jpg", Q_NULLPTR));
        radioButtonBMP->setText(QApplication::translate("MainWindow", "bmp", Q_NULLPTR));
        radioButtonPNG->setText(QApplication::translate("MainWindow", "png", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
