/****************************************************************************
** Meta object code from reading C++ file 'qprojectmconfigdialog.hpp'
**
** Created: Mon Nov 11 21:58:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectmconfigdialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectmconfigdialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectMConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   22,   22,   22, 0x08,
      65,   22,   22,   22, 0x08,
      95,   22,   22,   22, 0x08,
     120,   22,   22,   22, 0x08,
     146,   22,   22,   22, 0x08,
     166,  159,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectMConfigDialog[] = {
    "QProjectMConfigDialog\0\0projectM_Reset()\0"
    "openPlaylistFileDialog()\0"
    "openPlaylistDirectoryDialog()\0"
    "openMenuFontFileDialog()\0"
    "openTitleFontFileDialog()\0saveConfig()\0"
    "button\0buttonBoxHandler(QAbstractButton*)\0"
};

void QProjectMConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProjectMConfigDialog *_t = static_cast<QProjectMConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->projectM_Reset(); break;
        case 1: _t->openPlaylistFileDialog(); break;
        case 2: _t->openPlaylistDirectoryDialog(); break;
        case 3: _t->openMenuFontFileDialog(); break;
        case 4: _t->openTitleFontFileDialog(); break;
        case 5: _t->saveConfig(); break;
        case 6: _t->buttonBoxHandler((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProjectMConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProjectMConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QProjectMConfigDialog,
      qt_meta_data_QProjectMConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectMConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectMConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectMConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectMConfigDialog))
        return static_cast<void*>(const_cast< QProjectMConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QProjectMConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QProjectMConfigDialog::projectM_Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
