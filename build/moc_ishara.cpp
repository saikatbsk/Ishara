/****************************************************************************
** Meta object code from reading C++ file 'ishara.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ishara.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ishara.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ishara[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      20,    7,    7,    7, 0x08,
      30,    7,    7,    7, 0x08,
      64,   61,   57,    7, 0x08,
      96,    7,    7,    7, 0x08,
     113,    7,    7,    7, 0x08,
     126,  124,    7,    7, 0x08,
     146,  124,    7,    7, 0x08,
     168,    7,    7,    7, 0x08,
     195,    7,    7,    7, 0x08,
     208,    7,    7,    7, 0x08,
     240,  234,    7,    7, 0x08,
     288,  283,    7,    7, 0x08,
     318,  283,    7,    7, 0x08,
     348,  283,    7,    7, 0x08,
     378,  283,    7,    7, 0x08,
     408,  283,    7,    7, 0x08,
     438,  283,    7,    7, 0x08,
     468,  283,    7,    7, 0x08,
     498,  283,    7,    7, 0x08,
     528,  283,    7,    7, 0x08,
     558,  283,    7,    7, 0x08,
     588,  283,    7,    7, 0x08,
     618,  283,    7,    7, 0x08,
     654,  648,    7,    7, 0x08,
     687,  648,    7,    7, 0x08,
     720,  648,    7,    7, 0x08,
     753,  648,    7,    7, 0x08,
     786,  648,    7,    7, 0x08,
     819,  648,    7,    7, 0x08,
     852,  648,    7,    7, 0x08,
     885,  648,    7,    7, 0x08,
     918,  648,    7,    7, 0x08,
     951,  648,    7,    7, 0x08,
     984,  648,    7,    7, 0x08,
    1017,  648,    7,    7, 0x08,
    1050,  648,    7,    7, 0x08,
    1084,  283,    7,    7, 0x08,
    1115,  648,    7,    7, 0x08,
    1147,  283,    7,    7, 0x08,
    1176,    7,    7,    7, 0x08,
    1202,    7,   57,    7, 0x08,
    1229,    7,    7,    7, 0x08,
    1256,  283,    7,    7, 0x08,
    1293,  283,    7,    7, 0x08,
    1333,  283,    7,    7, 0x08,
    1381, 1374,    7,    7, 0x08,
    1430,    7,    7,    7, 0x08,
    1460,    7,    7,    7, 0x08,
    1490,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ishara[] = {
    "ishara\0\0startStop()\0camOpen()\0"
    "processFrameAndUpdateGUI()\0int\0,,\0"
    "trackObject(cv::Mat*,int*,int*)\0"
    "getxScreenSize()\0mouseMap()\0,\0"
    "preClick(int*,int*)\0scrollInit(int*,int*)\0"
    "openingOperation(cv::Mat*)\0namedImage()\0"
    "on_btnStartStop_clicked()\0index\0"
    "on_comboSelectCam_currentIndexChanged(int)\0"
    "arg1\0on_spnHMin1_valueChanged(int)\0"
    "on_spnHMax1_valueChanged(int)\0"
    "on_spnSMin1_valueChanged(int)\0"
    "on_spnSMax1_valueChanged(int)\0"
    "on_spnVMin1_valueChanged(int)\0"
    "on_spnVMax1_valueChanged(int)\0"
    "on_spnHMin2_valueChanged(int)\0"
    "on_spnHMax2_valueChanged(int)\0"
    "on_spnSMin2_valueChanged(int)\0"
    "on_spnSMax2_valueChanged(int)\0"
    "on_spnVMin2_valueChanged(int)\0"
    "on_spnVMax2_valueChanged(int)\0value\0"
    "on_sliderHMin1_valueChanged(int)\0"
    "on_sliderHMax1_valueChanged(int)\0"
    "on_sliderSMin1_valueChanged(int)\0"
    "on_sliderSMax1_valueChanged(int)\0"
    "on_sliderVMin1_valueChanged(int)\0"
    "on_sliderVMax1_valueChanged(int)\0"
    "on_sliderHMin2_valueChanged(int)\0"
    "on_sliderHMax2_valueChanged(int)\0"
    "on_sliderSMin2_valueChanged(int)\0"
    "on_sliderSMax2_valueChanged(int)\0"
    "on_sliderVMin2_valueChanged(int)\0"
    "on_sliderVMax2_valueChanged(int)\0"
    "on_sliderPinchR_valueChanged(int)\0"
    "on_spnPinchR_valueChanged(int)\0"
    "on_sliderRCRC_valueChanged(int)\0"
    "on_spnRCRC_valueChanged(int)\0"
    "on_actionQuit_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionStart_triggered()\0"
    "on_chkEnableScroll_stateChanged(int)\0"
    "on_chkEnableLeftClick_stateChanged(int)\0"
    "on_chkEnableRightClick_stateChanged(int)\0"
    "reason\0iconActivated(QSystemTrayIcon::ActivationReason)\0"
    "on_actionOriginal_triggered()\0"
    "on_actionThresh_1_triggered()\0"
    "on_actionThresh_2_triggered()\0"
};

void ishara::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ishara *_t = static_cast<ishara *>(_o);
        switch (_id) {
        case 0: _t->startStop(); break;
        case 1: _t->camOpen(); break;
        case 2: _t->processFrameAndUpdateGUI(); break;
        case 3: { int _r = _t->trackObject((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->getxScreenSize(); break;
        case 5: _t->mouseMap(); break;
        case 6: _t->preClick((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 7: _t->scrollInit((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 8: _t->openingOperation((*reinterpret_cast< cv::Mat*(*)>(_a[1]))); break;
        case 9: _t->namedImage(); break;
        case 10: _t->on_btnStartStop_clicked(); break;
        case 11: _t->on_comboSelectCam_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_spnHMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_spnHMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_spnSMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_spnSMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_spnVMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_spnVMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_spnHMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_spnHMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_spnSMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_spnSMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_spnVMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_spnVMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_sliderHMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_sliderHMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_sliderSMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_sliderSMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_sliderVMin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_sliderVMax1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_sliderHMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_sliderHMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_sliderSMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_sliderSMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_sliderVMin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_sliderVMax2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_sliderPinchR_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_spnPinchR_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_sliderRCRC_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_spnRCRC_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_actionQuit_triggered(); break;
        case 41: { int _r = _t->on_actionAbout_triggered();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 42: _t->on_actionStart_triggered(); break;
        case 43: _t->on_chkEnableScroll_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_chkEnableLeftClick_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->on_chkEnableRightClick_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 47: _t->on_actionOriginal_triggered(); break;
        case 48: _t->on_actionThresh_1_triggered(); break;
        case 49: _t->on_actionThresh_2_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ishara::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ishara::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ishara,
      qt_meta_data_ishara, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ishara::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ishara::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ishara::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ishara))
        return static_cast<void*>(const_cast< ishara*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ishara::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
