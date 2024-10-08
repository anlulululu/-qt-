/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../StudentInfoDemo1/StudentInfoDemo/widget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "on_btnAdd_clicked",
    "",
    "slot_addStuInfo",
    "CStuInfo&",
    "stuInfo",
    "slot_updateStuInfo",
    "slot_itemChanged",
    "QStandardItem*",
    "item",
    "slot_popMenu",
    "pos",
    "on_chkSelcetAll_clicked",
    "checked",
    "slot_actUpdate",
    "slot_actDelete",
    "on_btnDelete_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[10];
    char stringdata5[8];
    char stringdata6[19];
    char stringdata7[17];
    char stringdata8[15];
    char stringdata9[5];
    char stringdata10[13];
    char stringdata11[4];
    char stringdata12[24];
    char stringdata13[8];
    char stringdata14[15];
    char stringdata15[15];
    char stringdata16[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 17),  // "on_btnAdd_clicked"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 15),  // "slot_addStuInfo"
        QT_MOC_LITERAL(42, 9),  // "CStuInfo&"
        QT_MOC_LITERAL(52, 7),  // "stuInfo"
        QT_MOC_LITERAL(60, 18),  // "slot_updateStuInfo"
        QT_MOC_LITERAL(79, 16),  // "slot_itemChanged"
        QT_MOC_LITERAL(96, 14),  // "QStandardItem*"
        QT_MOC_LITERAL(111, 4),  // "item"
        QT_MOC_LITERAL(116, 12),  // "slot_popMenu"
        QT_MOC_LITERAL(129, 3),  // "pos"
        QT_MOC_LITERAL(133, 23),  // "on_chkSelcetAll_clicked"
        QT_MOC_LITERAL(157, 7),  // "checked"
        QT_MOC_LITERAL(165, 14),  // "slot_actUpdate"
        QT_MOC_LITERAL(180, 14),  // "slot_actDelete"
        QT_MOC_LITERAL(195, 20)   // "on_btnDelete_clicked"
    },
    "Widget",
    "on_btnAdd_clicked",
    "",
    "slot_addStuInfo",
    "CStuInfo&",
    "stuInfo",
    "slot_updateStuInfo",
    "slot_itemChanged",
    "QStandardItem*",
    "item",
    "slot_popMenu",
    "pos",
    "on_chkSelcetAll_clicked",
    "checked",
    "slot_actUpdate",
    "slot_actDelete",
    "on_btnDelete_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       6,    1,   72,    2, 0x08,    4 /* Private */,
       7,    1,   75,    2, 0x08,    6 /* Private */,
      10,    1,   78,    2, 0x08,    8 /* Private */,
      12,    1,   81,    2, 0x08,   10 /* Private */,
      14,    0,   84,    2, 0x08,   12 /* Private */,
      15,    0,   85,    2, 0x08,   13 /* Private */,
      16,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'on_btnAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_addStuInfo'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<CStuInfo &, std::false_type>,
        // method 'slot_updateStuInfo'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<CStuInfo &, std::false_type>,
        // method 'slot_itemChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStandardItem *, std::false_type>,
        // method 'slot_popMenu'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_chkSelcetAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slot_actUpdate'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slot_actDelete'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: { bool _r = _t->slot_addStuInfo((*reinterpret_cast< std::add_pointer_t<CStuInfo&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->slot_updateStuInfo((*reinterpret_cast< std::add_pointer_t<CStuInfo&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->slot_itemChanged((*reinterpret_cast< std::add_pointer_t<QStandardItem*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->slot_popMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_chkSelcetAll_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: { bool _r = _t->slot_actUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->slot_actDelete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_btnDelete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
