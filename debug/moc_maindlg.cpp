/****************************************************************************
** Meta object code from reading C++ file 'maindlg.h'
**
** Created: Mon 8. Mar 00:31:44 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maindlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainDlg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      35,    8,    8,    8, 0x08,
      65,    8,    8,    8, 0x08,
      86,    8,    8,    8, 0x08,
     110,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainDlg[] = {
    "MainDlg\0\0on_btnClipboard_pressed()\0"
    "on_btnColorSelector_pressed()\0"
    "on_btnSave_pressed()\0on_btnCapture_pressed()\0"
    "on_Timer()\0"
};

const QMetaObject MainDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainDlg,
      qt_meta_data_MainDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainDlg))
        return static_cast<void*>(const_cast< MainDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnClipboard_pressed(); break;
        case 1: on_btnColorSelector_pressed(); break;
        case 2: on_btnSave_pressed(); break;
        case 3: on_btnCapture_pressed(); break;
        case 4: on_Timer(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
