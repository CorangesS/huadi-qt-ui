/***********************************
 *@copyright  :csc
 *description :Use adc and photoresistor to complete the light, the
                     LED light is on when it is dark, and the LED light is off when it is bright 
 *filename    :main.c
 *author      :csc,syf,xkq,fzy,zmc
 *phone       :18874975755
 *version     :0.1
 *date        :2023.07.04
************************************/
/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    QByteArrayData data[44];
    char stringdata0[656];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "login"
QT_MOC_LITERAL(1, 6, 19), // "on_btnlogin_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "on_btnlogout_clicked"
QT_MOC_LITERAL(4, 48, 22), // "on_btnregister_clicked"
QT_MOC_LITERAL(5, 71, 14), // "on_kb1_clicked"
QT_MOC_LITERAL(6, 86, 14), // "on_kb2_clicked"
QT_MOC_LITERAL(7, 101, 14), // "on_kb3_clicked"
QT_MOC_LITERAL(8, 116, 14), // "on_kb4_clicked"
QT_MOC_LITERAL(9, 131, 14), // "on_kb5_clicked"
QT_MOC_LITERAL(10, 146, 14), // "on_kb6_clicked"
QT_MOC_LITERAL(11, 161, 14), // "on_kb7_clicked"
QT_MOC_LITERAL(12, 176, 14), // "on_kb8_clicked"
QT_MOC_LITERAL(13, 191, 14), // "on_kb9_clicked"
QT_MOC_LITERAL(14, 206, 14), // "on_kb0_clicked"
QT_MOC_LITERAL(15, 221, 14), // "on_kbq_clicked"
QT_MOC_LITERAL(16, 236, 14), // "on_kbw_clicked"
QT_MOC_LITERAL(17, 251, 14), // "on_kbe_clicked"
QT_MOC_LITERAL(18, 266, 14), // "on_kbr_clicked"
QT_MOC_LITERAL(19, 281, 14), // "on_kbt_clicked"
QT_MOC_LITERAL(20, 296, 14), // "on_kby_clicked"
QT_MOC_LITERAL(21, 311, 14), // "on_kbu_clicked"
QT_MOC_LITERAL(22, 326, 14), // "on_kbi_clicked"
QT_MOC_LITERAL(23, 341, 14), // "on_kbo_clicked"
QT_MOC_LITERAL(24, 356, 14), // "on_kbp_clicked"
QT_MOC_LITERAL(25, 371, 14), // "on_kba_clicked"
QT_MOC_LITERAL(26, 386, 14), // "on_kbs_clicked"
QT_MOC_LITERAL(27, 401, 14), // "on_kbd_clicked"
QT_MOC_LITERAL(28, 416, 14), // "on_kbf_clicked"
QT_MOC_LITERAL(29, 431, 14), // "on_kbg_clicked"
QT_MOC_LITERAL(30, 446, 14), // "on_kbh_clicked"
QT_MOC_LITERAL(31, 461, 14), // "on_kbj_clicked"
QT_MOC_LITERAL(32, 476, 14), // "on_kbk_clicked"
QT_MOC_LITERAL(33, 491, 14), // "on_kbl_clicked"
QT_MOC_LITERAL(34, 506, 14), // "on_kbz_clicked"
QT_MOC_LITERAL(35, 521, 14), // "on_kbx_clicked"
QT_MOC_LITERAL(36, 536, 14), // "on_kbc_clicked"
QT_MOC_LITERAL(37, 551, 14), // "on_kbv_clicked"
QT_MOC_LITERAL(38, 566, 14), // "on_kbb_clicked"
QT_MOC_LITERAL(39, 581, 14), // "on_kbn_clicked"
QT_MOC_LITERAL(40, 596, 14), // "on_kbm_clicked"
QT_MOC_LITERAL(41, 611, 16), // "on_kbm_2_clicked"
QT_MOC_LITERAL(42, 628, 22), // "on_lbcsu_linkActivated"
QT_MOC_LITERAL(43, 651, 4) // "link"

    },
    "login\0on_btnlogin_clicked\0\0"
    "on_btnlogout_clicked\0on_btnregister_clicked\0"
    "on_kb1_clicked\0on_kb2_clicked\0"
    "on_kb3_clicked\0on_kb4_clicked\0"
    "on_kb5_clicked\0on_kb6_clicked\0"
    "on_kb7_clicked\0on_kb8_clicked\0"
    "on_kb9_clicked\0on_kb0_clicked\0"
    "on_kbq_clicked\0on_kbw_clicked\0"
    "on_kbe_clicked\0on_kbr_clicked\0"
    "on_kbt_clicked\0on_kby_clicked\0"
    "on_kbu_clicked\0on_kbi_clicked\0"
    "on_kbo_clicked\0on_kbp_clicked\0"
    "on_kba_clicked\0on_kbs_clicked\0"
    "on_kbd_clicked\0on_kbf_clicked\0"
    "on_kbg_clicked\0on_kbh_clicked\0"
    "on_kbj_clicked\0on_kbk_clicked\0"
    "on_kbl_clicked\0on_kbz_clicked\0"
    "on_kbx_clicked\0on_kbc_clicked\0"
    "on_kbv_clicked\0on_kbb_clicked\0"
    "on_kbn_clicked\0on_kbm_clicked\0"
    "on_kbm_2_clicked\0on_lbcsu_linkActivated\0"
    "link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x08 /* Private */,
       3,    0,  220,    2, 0x08 /* Private */,
       4,    0,  221,    2, 0x08 /* Private */,
       5,    0,  222,    2, 0x08 /* Private */,
       6,    0,  223,    2, 0x08 /* Private */,
       7,    0,  224,    2, 0x08 /* Private */,
       8,    0,  225,    2, 0x08 /* Private */,
       9,    0,  226,    2, 0x08 /* Private */,
      10,    0,  227,    2, 0x08 /* Private */,
      11,    0,  228,    2, 0x08 /* Private */,
      12,    0,  229,    2, 0x08 /* Private */,
      13,    0,  230,    2, 0x08 /* Private */,
      14,    0,  231,    2, 0x08 /* Private */,
      15,    0,  232,    2, 0x08 /* Private */,
      16,    0,  233,    2, 0x08 /* Private */,
      17,    0,  234,    2, 0x08 /* Private */,
      18,    0,  235,    2, 0x08 /* Private */,
      19,    0,  236,    2, 0x08 /* Private */,
      20,    0,  237,    2, 0x08 /* Private */,
      21,    0,  238,    2, 0x08 /* Private */,
      22,    0,  239,    2, 0x08 /* Private */,
      23,    0,  240,    2, 0x08 /* Private */,
      24,    0,  241,    2, 0x08 /* Private */,
      25,    0,  242,    2, 0x08 /* Private */,
      26,    0,  243,    2, 0x08 /* Private */,
      27,    0,  244,    2, 0x08 /* Private */,
      28,    0,  245,    2, 0x08 /* Private */,
      29,    0,  246,    2, 0x08 /* Private */,
      30,    0,  247,    2, 0x08 /* Private */,
      31,    0,  248,    2, 0x08 /* Private */,
      32,    0,  249,    2, 0x08 /* Private */,
      33,    0,  250,    2, 0x08 /* Private */,
      34,    0,  251,    2, 0x08 /* Private */,
      35,    0,  252,    2, 0x08 /* Private */,
      36,    0,  253,    2, 0x08 /* Private */,
      37,    0,  254,    2, 0x08 /* Private */,
      38,    0,  255,    2, 0x08 /* Private */,
      39,    0,  256,    2, 0x08 /* Private */,
      40,    0,  257,    2, 0x08 /* Private */,
      41,    0,  258,    2, 0x08 /* Private */,
      42,    1,  259,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnlogin_clicked(); break;
        case 1: _t->on_btnlogout_clicked(); break;
        case 2: _t->on_btnregister_clicked(); break;
        case 3: _t->on_kb1_clicked(); break;
        case 4: _t->on_kb2_clicked(); break;
        case 5: _t->on_kb3_clicked(); break;
        case 6: _t->on_kb4_clicked(); break;
        case 7: _t->on_kb5_clicked(); break;
        case 8: _t->on_kb6_clicked(); break;
        case 9: _t->on_kb7_clicked(); break;
        case 10: _t->on_kb8_clicked(); break;
        case 11: _t->on_kb9_clicked(); break;
        case 12: _t->on_kb0_clicked(); break;
        case 13: _t->on_kbq_clicked(); break;
        case 14: _t->on_kbw_clicked(); break;
        case 15: _t->on_kbe_clicked(); break;
        case 16: _t->on_kbr_clicked(); break;
        case 17: _t->on_kbt_clicked(); break;
        case 18: _t->on_kby_clicked(); break;
        case 19: _t->on_kbu_clicked(); break;
        case 20: _t->on_kbi_clicked(); break;
        case 21: _t->on_kbo_clicked(); break;
        case 22: _t->on_kbp_clicked(); break;
        case 23: _t->on_kba_clicked(); break;
        case 24: _t->on_kbs_clicked(); break;
        case 25: _t->on_kbd_clicked(); break;
        case 26: _t->on_kbf_clicked(); break;
        case 27: _t->on_kbg_clicked(); break;
        case 28: _t->on_kbh_clicked(); break;
        case 29: _t->on_kbj_clicked(); break;
        case 30: _t->on_kbk_clicked(); break;
        case 31: _t->on_kbl_clicked(); break;
        case 32: _t->on_kbz_clicked(); break;
        case 33: _t->on_kbx_clicked(); break;
        case 34: _t->on_kbc_clicked(); break;
        case 35: _t->on_kbv_clicked(); break;
        case 36: _t->on_kbb_clicked(); break;
        case 37: _t->on_kbn_clicked(); break;
        case 38: _t->on_kbm_clicked(); break;
        case 39: _t->on_kbm_2_clicked(); break;
        case 40: _t->on_lbcsu_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject login::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_login.data,
    qt_meta_data_login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
