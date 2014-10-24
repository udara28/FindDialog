/****************************************************************************
** Meta object code from reading C++ file 'FindDialog.h'
**
** Created: Thu Oct 23 12:09:54 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FindDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_findDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   11,   11,   11, 0x08,
      47,   42,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_findDialog[] = {
    "findDialog\0\0findNextMatch()\0findClicked()\0"
    "text\0findEnabled(QString)\0"
};

const QMetaObject findDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_findDialog,
      qt_meta_data_findDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &findDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *findDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *findDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_findDialog))
        return static_cast<void*>(const_cast< findDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int findDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: findNextMatch(); break;
        case 1: findClicked(); break;
        case 2: findEnabled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void findDialog::findNextMatch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
