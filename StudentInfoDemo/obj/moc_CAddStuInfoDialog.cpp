/****************************************************************************
** Meta object code from reading C++ file 'CAddStuInfoDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../StudentInfoDemo1/StudentInfoDemo/CAddStuInfoDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CAddStuInfoDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS = QtMocHelpers::stringData(
    "CAddStuInfoDialog",
    "sig_addStuInfo",
    "",
    "CStuInfo&",
    "stuInfo",
    "sig_updateStuInfo",
    "on_btnConfirm_clicked",
    "on_btnCancel_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[8];
    char stringdata5[18];
    char stringdata6[22];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS_t qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "CAddStuInfoDialog"
        QT_MOC_LITERAL(18, 14),  // "sig_addStuInfo"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 9),  // "CStuInfo&"
        QT_MOC_LITERAL(44, 7),  // "stuInfo"
        QT_MOC_LITERAL(52, 17),  // "sig_updateStuInfo"
        QT_MOC_LITERAL(70, 21),  // "on_btnConfirm_clicked"
        QT_MOC_LITERAL(92, 20)   // "on_btnCancel_clicked"
    },
    "CAddStuInfoDialog",
    "sig_addStuInfo",
    "",
    "CStuInfo&",
    "stuInfo",
    "sig_updateStuInfo",
    "on_btnConfirm_clicked",
    "on_btnCancel_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCAddStuInfoDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       5,    1,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   44,    2, 0x08,    5 /* Private */,
       7,    0,   45,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CAddStuInfoDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCAddStuInfoDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CAddStuInfoDialog, std::true_type>,
        // method 'sig_addStuInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CStuInfo &, std::false_type>,
        // method 'sig_updateStuInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CStuInfo &, std::false_type>,
        // method 'on_btnConfirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CAddStuInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CAddStuInfoDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sig_addStuInfo((*reinterpret_cast< std::add_pointer_t<CStuInfo&>>(_a[1]))); break;
        case 1: _t->sig_updateStuInfo((*reinterpret_cast< std::add_pointer_t<CStuInfo&>>(_a[1]))); break;
        case 2: _t->on_btnConfirm_clicked(); break;
        case 3: _t->on_btnCancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CAddStuInfoDialog::*)(CStuInfo & );
            if (_t _q_method = &CAddStuInfoDialog::sig_addStuInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CAddStuInfoDialog::*)(CStuInfo & );
            if (_t _q_method = &CAddStuInfoDialog::sig_updateStuInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *CAddStuInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAddStuInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCAddStuInfoDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CAddStuInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CAddStuInfoDialog::sig_addStuInfo(CStuInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CAddStuInfoDialog::sig_updateStuInfo(CStuInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
