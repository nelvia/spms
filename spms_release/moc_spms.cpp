/****************************************************************************
** Meta object code from reading C++ file 'spms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spms/spms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_spms_t {
    QByteArrayData data[21];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_spms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_spms_t qt_meta_stringdata_spms = {
    {
QT_MOC_LITERAL(0, 0, 4), // "spms"
QT_MOC_LITERAL(1, 5, 12), // "captureFrame"
QT_MOC_LITERAL(2, 18, 7), // "cv::Mat"
QT_MOC_LITERAL(3, 26, 0), // ""
QT_MOC_LITERAL(4, 27, 18), // "getQImageFromFrame"
QT_MOC_LITERAL(5, 46, 5), // "frame"
QT_MOC_LITERAL(6, 52, 15), // "startTheProgram"
QT_MOC_LITERAL(7, 68, 16), // "getImageContrast"
QT_MOC_LITERAL(8, 85, 3), // "src"
QT_MOC_LITERAL(9, 89, 18), // "getImagePixelValue"
QT_MOC_LITERAL(10, 108, 4), // "gray"
QT_MOC_LITERAL(11, 113, 22), // "checkImageSharpAndBlur"
QT_MOC_LITERAL(12, 136, 16), // "printSuggestions"
QT_MOC_LITERAL(13, 153, 16), // "avgIntensityGray"
QT_MOC_LITERAL(14, 170, 6), // "varLap"
QT_MOC_LITERAL(15, 177, 8), // "char[50]"
QT_MOC_LITERAL(16, 186, 13), // "outputMessage"
QT_MOC_LITERAL(17, 200, 5), // "light"
QT_MOC_LITERAL(18, 206, 20), // "brightnessPercentage"
QT_MOC_LITERAL(19, 227, 18), // "on_btnExit_clicked"
QT_MOC_LITERAL(20, 246, 21) // "on_showVidBtn_clicked"

    },
    "spms\0captureFrame\0cv::Mat\0\0"
    "getQImageFromFrame\0frame\0startTheProgram\0"
    "getImageContrast\0src\0getImagePixelValue\0"
    "gray\0checkImageSharpAndBlur\0"
    "printSuggestions\0avgIntensityGray\0"
    "varLap\0char[50]\0outputMessage\0light\0"
    "brightnessPercentage\0on_btnExit_clicked\0"
    "on_showVidBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_spms[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    3, 0x08 /* Private */,
       4,    1,   60,    3, 0x08 /* Private */,
       6,    0,   63,    3, 0x08 /* Private */,
       7,    1,   64,    3, 0x08 /* Private */,
       9,    1,   67,    3, 0x08 /* Private */,
      11,    1,   70,    3, 0x08 /* Private */,
      12,    5,   73,    3, 0x08 /* Private */,
      19,    0,   84,    3, 0x08 /* Private */,
      20,    0,   85,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::QImage, 0x80000000 | 2,    5,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Float, 0x80000000 | 2,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, 0x80000000 | 15, QMetaType::Int, QMetaType::Int,   13,   14,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void spms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        spms *_t = static_cast<spms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { cv::Mat _r = _t->captureFrame();
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        case 1: { QImage _r = _t->getQImageFromFrame((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 2: _t->startTheProgram(); break;
        case 3: { int _r = _t->getImageContrast((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->getImagePixelValue((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->checkImageSharpAndBlur((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: _t->printSuggestions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< char(*)[50]>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->on_btnExit_clicked(); break;
        case 8: _t->on_showVidBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject spms::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_spms.data,
      qt_meta_data_spms,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *spms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *spms::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_spms.stringdata0))
        return static_cast<void*>(const_cast< spms*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int spms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
