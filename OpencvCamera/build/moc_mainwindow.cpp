/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraThread_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraThread_t qt_meta_stringdata_CameraThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CameraThread"
QT_MOC_LITERAL(1, 13, 9), // "GrabFrame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "cv::Mat"
QT_MOC_LITERAL(4, 32, 5), // "frame"
QT_MOC_LITERAL(5, 38, 7), // "grabfps"
QT_MOC_LITERAL(6, 46, 12), // "RecvWorkMode"
QT_MOC_LITERAL(7, 59, 8), // "workmode"
QT_MOC_LITERAL(8, 68, 12) // "ResetFpsSlot"

    },
    "CameraThread\0GrabFrame\0\0cv::Mat\0frame\0"
    "grabfps\0RecvWorkMode\0workmode\0"
    "ResetFpsSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x08 /* Private */,
       8,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void CameraThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraThread *_t = static_cast<CameraThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GrabFrame((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->RecvWorkMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ResetFpsSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CameraThread::*_t)(cv::Mat , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraThread::GrabFrame)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CameraThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CameraThread.data,
      qt_meta_data_CameraThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CameraThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CameraThread::GrabFrame(cv::Mat _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "SetWorkMode"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "workmode"
QT_MOC_LITERAL(4, 33, 12), // "ResetGrabFps"
QT_MOC_LITERAL(5, 46, 9), // "RecvFrame"
QT_MOC_LITERAL(6, 56, 7), // "cv::Mat"
QT_MOC_LITERAL(7, 64, 3), // "mat"
QT_MOC_LITERAL(8, 68, 7), // "grabfps"
QT_MOC_LITERAL(9, 76, 30), // "on_radioButtonContinue_clicked"
QT_MOC_LITERAL(10, 107, 7), // "checked"
QT_MOC_LITERAL(11, 115, 30), // "on_radioButtonSoftware_clicked"
QT_MOC_LITERAL(12, 146, 28), // "on_pushButtonTakepic_clicked"
QT_MOC_LITERAL(13, 175, 25), // "on_pushButtonSave_clicked"
QT_MOC_LITERAL(14, 201, 31), // "on_pushButtonChoosePath_clicked"
QT_MOC_LITERAL(15, 233, 25), // "on_radioButtonJPG_clicked"
QT_MOC_LITERAL(16, 259, 25), // "on_radioButtonBMP_clicked"
QT_MOC_LITERAL(17, 285, 25), // "on_radioButtonPNG_clicked"
QT_MOC_LITERAL(18, 311, 9) // "UpDateFps"

    },
    "MainWindow\0SetWorkMode\0\0workmode\0"
    "ResetGrabFps\0RecvFrame\0cv::Mat\0mat\0"
    "grabfps\0on_radioButtonContinue_clicked\0"
    "checked\0on_radioButtonSoftware_clicked\0"
    "on_pushButtonTakepic_clicked\0"
    "on_pushButtonSave_clicked\0"
    "on_pushButtonChoosePath_clicked\0"
    "on_radioButtonJPG_clicked\0"
    "on_radioButtonBMP_clicked\0"
    "on_radioButtonPNG_clicked\0UpDateFps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   78,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetWorkMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ResetGrabFps(); break;
        case 2: _t->RecvFrame((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_radioButtonContinue_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioButtonSoftware_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonTakepic_clicked(); break;
        case 6: _t->on_pushButtonSave_clicked(); break;
        case 7: _t->on_pushButtonChoosePath_clicked(); break;
        case 8: _t->on_radioButtonJPG_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_radioButtonBMP_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_radioButtonPNG_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->UpDateFps(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SetWorkMode)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ResetGrabFps)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SetWorkMode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::ResetGrabFps()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
