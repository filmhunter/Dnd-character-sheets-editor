/****************************************************************************
** Meta object code from reading C++ file 'CharacterSheet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CharacterSheet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CharacterSheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CharacterSheet_t {
    QByteArrayData data[103];
    char stringdata0[3718];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CharacterSheet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CharacterSheet_t qt_meta_stringdata_CharacterSheet = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CharacterSheet"
QT_MOC_LITERAL(1, 15, 13), // "newNameEdited"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 31), // "on_charNameLine_editingFinished"
QT_MOC_LITERAL(4, 62, 37), // "on_charClassLevelLine_editing..."
QT_MOC_LITERAL(5, 100, 37), // "on_charBackGroundLine_editing..."
QT_MOC_LITERAL(6, 138, 33), // "on_playerNameLine_editingFini..."
QT_MOC_LITERAL(7, 172, 31), // "on_charRaceLine_editingFinished"
QT_MOC_LITERAL(8, 204, 36), // "on_charAlignmentLine_editingF..."
QT_MOC_LITERAL(9, 241, 32), // "on_expPointsLine_editingFinished"
QT_MOC_LITERAL(10, 274, 31), // "on_strengthSpinBox_valueChanged"
QT_MOC_LITERAL(11, 306, 4), // "arg1"
QT_MOC_LITERAL(12, 311, 32), // "on_dexteritySpinBox_valueChanged"
QT_MOC_LITERAL(13, 344, 35), // "on_constitutionSpinBox_valueC..."
QT_MOC_LITERAL(14, 380, 35), // "on_intelligenceSpinBox_valueC..."
QT_MOC_LITERAL(15, 416, 29), // "on_wisdomSpinBox_valueChanged"
QT_MOC_LITERAL(16, 446, 31), // "on_charismaSpinBox_valueChanged"
QT_MOC_LITERAL(17, 478, 33), // "on_armorClassSpinBox_valueCha..."
QT_MOC_LITERAL(18, 512, 33), // "on_initiativeSpinBox_valueCha..."
QT_MOC_LITERAL(19, 546, 28), // "on_speedSpinBox_valueChanged"
QT_MOC_LITERAL(20, 575, 39), // "on_hitPointsCurrentSpinBox_va..."
QT_MOC_LITERAL(21, 615, 41), // "on_hitPointsTemporarySpinBox_..."
QT_MOC_LITERAL(22, 657, 39), // "on_hitPointsMaxLineEdit_editi..."
QT_MOC_LITERAL(23, 697, 30), // "on_hitDiceSpinBox_valueChanged"
QT_MOC_LITERAL(24, 728, 39), // "on_hitDiceTotalLineEdit_editi..."
QT_MOC_LITERAL(25, 768, 34), // "on_coinsCopperSpinBox_valueCh..."
QT_MOC_LITERAL(26, 803, 34), // "on_coinsSilverSpinBox_valueCh..."
QT_MOC_LITERAL(27, 838, 36), // "on_coinsElectrumSpinBox_value..."
QT_MOC_LITERAL(28, 875, 32), // "on_coinsGoldSpinBox_valueChanged"
QT_MOC_LITERAL(29, 908, 36), // "on_coinsPlatinumSpinBox_value..."
QT_MOC_LITERAL(30, 945, 42), // "on_savingThrowStrengthSpinBox..."
QT_MOC_LITERAL(31, 988, 43), // "on_savingThrowDexteritySpinBo..."
QT_MOC_LITERAL(32, 1032, 46), // "on_savingThrowConstitutionSpi..."
QT_MOC_LITERAL(33, 1079, 46), // "on_savingThrowIntelligenceSpi..."
QT_MOC_LITERAL(34, 1126, 40), // "on_savingThrowWisdomSpinBox_v..."
QT_MOC_LITERAL(35, 1167, 42), // "on_savingThrowCharismaSpinBox..."
QT_MOC_LITERAL(36, 1210, 38), // "on_skillAcrobaticsSpinBox_val..."
QT_MOC_LITERAL(37, 1249, 42), // "on_skillAnimalHandlingSpinBox..."
QT_MOC_LITERAL(38, 1292, 34), // "on_skillArcanaSpinBox_valueCh..."
QT_MOC_LITERAL(39, 1327, 37), // "on_skillAthleticsSpinBox_valu..."
QT_MOC_LITERAL(40, 1365, 37), // "on_skillDeceptionSpinBox_valu..."
QT_MOC_LITERAL(41, 1403, 35), // "on_skillHistorySpinBox_valueC..."
QT_MOC_LITERAL(42, 1439, 35), // "on_skillInsightSpinBox_valueC..."
QT_MOC_LITERAL(43, 1475, 40), // "on_skillIntimidationSpinBox_v..."
QT_MOC_LITERAL(44, 1516, 41), // "on_skillInvestigationSpinBox_..."
QT_MOC_LITERAL(45, 1558, 36), // "on_skillMedicineSpinBox_value..."
QT_MOC_LITERAL(46, 1595, 34), // "on_skillNatureSpinBox_valueCh..."
QT_MOC_LITERAL(47, 1630, 38), // "on_skillPerceptionSpinBox_val..."
QT_MOC_LITERAL(48, 1669, 39), // "on_skillPerformanceSpinBox_va..."
QT_MOC_LITERAL(49, 1709, 38), // "on_skillPersuasionSpinBox_val..."
QT_MOC_LITERAL(50, 1748, 36), // "on_skillReligionSpinBox_value..."
QT_MOC_LITERAL(51, 1785, 41), // "on_skillSleightOfHandSpinBox_..."
QT_MOC_LITERAL(52, 1827, 35), // "on_skillStealthSpinBox_valueC..."
QT_MOC_LITERAL(53, 1863, 36), // "on_skillSurvivalSpinBox_value..."
QT_MOC_LITERAL(54, 1900, 35), // "on_strengthLineEdit_editingFi..."
QT_MOC_LITERAL(55, 1936, 36), // "on_dexterityLineEdit_editingF..."
QT_MOC_LITERAL(56, 1973, 39), // "on_constitutionLineEdit_editi..."
QT_MOC_LITERAL(57, 2013, 39), // "on_intelligenceLineEdit_editi..."
QT_MOC_LITERAL(58, 2053, 33), // "on_wisdomLineEdit_editingFini..."
QT_MOC_LITERAL(59, 2087, 35), // "on_charismaLineEdit_editingFi..."
QT_MOC_LITERAL(60, 2123, 40), // "on_passiveWisdomLineEdit_edit..."
QT_MOC_LITERAL(61, 2164, 38), // "on_inspirationLineEdit_editin..."
QT_MOC_LITERAL(62, 2203, 32), // "on_profBonusSpinBox_valueChanged"
QT_MOC_LITERAL(63, 2236, 38), // "on_attack1NameLineEdit_editin..."
QT_MOC_LITERAL(64, 2275, 38), // "on_attack2NameLineEdit_editin..."
QT_MOC_LITERAL(65, 2314, 38), // "on_attack3NameLineEdit_editin..."
QT_MOC_LITERAL(66, 2353, 44), // "on_attack1DamageTypeLineEdit_..."
QT_MOC_LITERAL(67, 2398, 44), // "on_attack2DamageTypeLineEdit_..."
QT_MOC_LITERAL(68, 2443, 44), // "on_attack3DamageTypeLineEdit_..."
QT_MOC_LITERAL(69, 2488, 35), // "on_attack1BonusSpinBox_valueC..."
QT_MOC_LITERAL(70, 2524, 35), // "on_attack2BonusSpinBox_valueC..."
QT_MOC_LITERAL(71, 2560, 35), // "on_attack3BonusSpinBox_valueC..."
QT_MOC_LITERAL(72, 2596, 41), // "on_savingThrowStrengthRadioBu..."
QT_MOC_LITERAL(73, 2638, 7), // "checked"
QT_MOC_LITERAL(74, 2646, 42), // "on_savingThrowDexterityRadioB..."
QT_MOC_LITERAL(75, 2689, 45), // "on_savingThrowConstitutionRad..."
QT_MOC_LITERAL(76, 2735, 45), // "on_savingThrowIntelligenceRad..."
QT_MOC_LITERAL(77, 2781, 39), // "on_savingThrowWisdomRadioButt..."
QT_MOC_LITERAL(78, 2821, 41), // "on_savingThrowCharismaRadioBu..."
QT_MOC_LITERAL(79, 2863, 37), // "on_skillAcrobaticsRadioButton..."
QT_MOC_LITERAL(80, 2901, 41), // "on_skillAnimalHandlingRadioBu..."
QT_MOC_LITERAL(81, 2943, 33), // "on_skillArcanaRadioButton_cli..."
QT_MOC_LITERAL(82, 2977, 36), // "on_skillAthleticsRadioButton_..."
QT_MOC_LITERAL(83, 3014, 36), // "on_skillDeceptionRadioButton_..."
QT_MOC_LITERAL(84, 3051, 34), // "on_skillHistoryRadioButton_cl..."
QT_MOC_LITERAL(85, 3086, 34), // "on_skillInsightRadioButton_cl..."
QT_MOC_LITERAL(86, 3121, 39), // "on_skillIntimidationRadioButt..."
QT_MOC_LITERAL(87, 3161, 40), // "on_skillInvestigationRadioBut..."
QT_MOC_LITERAL(88, 3202, 35), // "on_skillMedicineRadioButton_c..."
QT_MOC_LITERAL(89, 3238, 33), // "on_skillNatureRadioButton_cli..."
QT_MOC_LITERAL(90, 3272, 37), // "on_skillPerceptionRadioButton..."
QT_MOC_LITERAL(91, 3310, 38), // "on_skillPerformanceRadioButto..."
QT_MOC_LITERAL(92, 3349, 37), // "on_skillPersuasionRadioButton..."
QT_MOC_LITERAL(93, 3387, 35), // "on_skillReligionRadioButton_c..."
QT_MOC_LITERAL(94, 3423, 40), // "on_skillSleightOfHandRadioBut..."
QT_MOC_LITERAL(95, 3464, 34), // "on_skillStealthRadioButton_cl..."
QT_MOC_LITERAL(96, 3499, 35), // "on_skillSurvivalRadioButton_c..."
QT_MOC_LITERAL(97, 3535, 30), // "on_success1RadioButton_clicked"
QT_MOC_LITERAL(98, 3566, 30), // "on_success2RadioButton_clicked"
QT_MOC_LITERAL(99, 3597, 30), // "on_success3RadioButton_clicked"
QT_MOC_LITERAL(100, 3628, 29), // "on_failur1RadioButton_clicked"
QT_MOC_LITERAL(101, 3658, 29), // "on_failur2RadioButton_clicked"
QT_MOC_LITERAL(102, 3688, 29) // "on_failur3RadioButton_clicked"

    },
    "CharacterSheet\0newNameEdited\0\0"
    "on_charNameLine_editingFinished\0"
    "on_charClassLevelLine_editingFinished\0"
    "on_charBackGroundLine_editingFinished\0"
    "on_playerNameLine_editingFinished\0"
    "on_charRaceLine_editingFinished\0"
    "on_charAlignmentLine_editingFinished\0"
    "on_expPointsLine_editingFinished\0"
    "on_strengthSpinBox_valueChanged\0arg1\0"
    "on_dexteritySpinBox_valueChanged\0"
    "on_constitutionSpinBox_valueChanged\0"
    "on_intelligenceSpinBox_valueChanged\0"
    "on_wisdomSpinBox_valueChanged\0"
    "on_charismaSpinBox_valueChanged\0"
    "on_armorClassSpinBox_valueChanged\0"
    "on_initiativeSpinBox_valueChanged\0"
    "on_speedSpinBox_valueChanged\0"
    "on_hitPointsCurrentSpinBox_valueChanged\0"
    "on_hitPointsTemporarySpinBox_valueChanged\0"
    "on_hitPointsMaxLineEdit_editingFinished\0"
    "on_hitDiceSpinBox_valueChanged\0"
    "on_hitDiceTotalLineEdit_editingFinished\0"
    "on_coinsCopperSpinBox_valueChanged\0"
    "on_coinsSilverSpinBox_valueChanged\0"
    "on_coinsElectrumSpinBox_valueChanged\0"
    "on_coinsGoldSpinBox_valueChanged\0"
    "on_coinsPlatinumSpinBox_valueChanged\0"
    "on_savingThrowStrengthSpinBox_valueChanged\0"
    "on_savingThrowDexteritySpinBox_valueChanged\0"
    "on_savingThrowConstitutionSpinBox_valueChanged\0"
    "on_savingThrowIntelligenceSpinBox_valueChanged\0"
    "on_savingThrowWisdomSpinBox_valueChanged\0"
    "on_savingThrowCharismaSpinBox_valueChanged\0"
    "on_skillAcrobaticsSpinBox_valueChanged\0"
    "on_skillAnimalHandlingSpinBox_valueChanged\0"
    "on_skillArcanaSpinBox_valueChanged\0"
    "on_skillAthleticsSpinBox_valueChanged\0"
    "on_skillDeceptionSpinBox_valueChanged\0"
    "on_skillHistorySpinBox_valueChanged\0"
    "on_skillInsightSpinBox_valueChanged\0"
    "on_skillIntimidationSpinBox_valueChanged\0"
    "on_skillInvestigationSpinBox_valueChanged\0"
    "on_skillMedicineSpinBox_valueChanged\0"
    "on_skillNatureSpinBox_valueChanged\0"
    "on_skillPerceptionSpinBox_valueChanged\0"
    "on_skillPerformanceSpinBox_valueChanged\0"
    "on_skillPersuasionSpinBox_valueChanged\0"
    "on_skillReligionSpinBox_valueChanged\0"
    "on_skillSleightOfHandSpinBox_valueChanged\0"
    "on_skillStealthSpinBox_valueChanged\0"
    "on_skillSurvivalSpinBox_valueChanged\0"
    "on_strengthLineEdit_editingFinished\0"
    "on_dexterityLineEdit_editingFinished\0"
    "on_constitutionLineEdit_editingFinished\0"
    "on_intelligenceLineEdit_editingFinished\0"
    "on_wisdomLineEdit_editingFinished\0"
    "on_charismaLineEdit_editingFinished\0"
    "on_passiveWisdomLineEdit_editingFinished\0"
    "on_inspirationLineEdit_editingFinished\0"
    "on_profBonusSpinBox_valueChanged\0"
    "on_attack1NameLineEdit_editingFinished\0"
    "on_attack2NameLineEdit_editingFinished\0"
    "on_attack3NameLineEdit_editingFinished\0"
    "on_attack1DamageTypeLineEdit_editingFinished\0"
    "on_attack2DamageTypeLineEdit_editingFinished\0"
    "on_attack3DamageTypeLineEdit_editingFinished\0"
    "on_attack1BonusSpinBox_valueChanged\0"
    "on_attack2BonusSpinBox_valueChanged\0"
    "on_attack3BonusSpinBox_valueChanged\0"
    "on_savingThrowStrengthRadioButton_clicked\0"
    "checked\0on_savingThrowDexterityRadioButton_clicked\0"
    "on_savingThrowConstitutionRadioButton_clicked\0"
    "on_savingThrowIntelligenceRadioButton_clicked\0"
    "on_savingThrowWisdomRadioButton_clicked\0"
    "on_savingThrowCharismaRadioButton_clicked\0"
    "on_skillAcrobaticsRadioButton_clicked\0"
    "on_skillAnimalHandlingRadioButton_clicked\0"
    "on_skillArcanaRadioButton_clicked\0"
    "on_skillAthleticsRadioButton_clicked\0"
    "on_skillDeceptionRadioButton_clicked\0"
    "on_skillHistoryRadioButton_clicked\0"
    "on_skillInsightRadioButton_clicked\0"
    "on_skillIntimidationRadioButton_clicked\0"
    "on_skillInvestigationRadioButton_clicked\0"
    "on_skillMedicineRadioButton_clicked\0"
    "on_skillNatureRadioButton_clicked\0"
    "on_skillPerceptionRadioButton_clicked\0"
    "on_skillPerformanceRadioButton_clicked\0"
    "on_skillPersuasionRadioButton_clicked\0"
    "on_skillReligionRadioButton_clicked\0"
    "on_skillSleightOfHandRadioButton_clicked\0"
    "on_skillStealthRadioButton_clicked\0"
    "on_skillSurvivalRadioButton_clicked\0"
    "on_success1RadioButton_clicked\0"
    "on_success2RadioButton_clicked\0"
    "on_success3RadioButton_clicked\0"
    "on_failur1RadioButton_clicked\0"
    "on_failur2RadioButton_clicked\0"
    "on_failur3RadioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CharacterSheet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      99,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  509,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  510,    2, 0x08 /* Private */,
       4,    0,  511,    2, 0x08 /* Private */,
       5,    0,  512,    2, 0x08 /* Private */,
       6,    0,  513,    2, 0x08 /* Private */,
       7,    0,  514,    2, 0x08 /* Private */,
       8,    0,  515,    2, 0x08 /* Private */,
       9,    0,  516,    2, 0x08 /* Private */,
      10,    1,  517,    2, 0x08 /* Private */,
      12,    1,  520,    2, 0x08 /* Private */,
      13,    1,  523,    2, 0x08 /* Private */,
      14,    1,  526,    2, 0x08 /* Private */,
      15,    1,  529,    2, 0x08 /* Private */,
      16,    1,  532,    2, 0x08 /* Private */,
      17,    1,  535,    2, 0x08 /* Private */,
      18,    1,  538,    2, 0x08 /* Private */,
      19,    1,  541,    2, 0x08 /* Private */,
      20,    1,  544,    2, 0x08 /* Private */,
      21,    1,  547,    2, 0x08 /* Private */,
      22,    0,  550,    2, 0x08 /* Private */,
      23,    1,  551,    2, 0x08 /* Private */,
      24,    0,  554,    2, 0x08 /* Private */,
      25,    1,  555,    2, 0x08 /* Private */,
      26,    1,  558,    2, 0x08 /* Private */,
      27,    1,  561,    2, 0x08 /* Private */,
      28,    1,  564,    2, 0x08 /* Private */,
      29,    1,  567,    2, 0x08 /* Private */,
      30,    1,  570,    2, 0x08 /* Private */,
      31,    1,  573,    2, 0x08 /* Private */,
      32,    1,  576,    2, 0x08 /* Private */,
      33,    1,  579,    2, 0x08 /* Private */,
      34,    1,  582,    2, 0x08 /* Private */,
      35,    1,  585,    2, 0x08 /* Private */,
      36,    1,  588,    2, 0x08 /* Private */,
      37,    1,  591,    2, 0x08 /* Private */,
      38,    1,  594,    2, 0x08 /* Private */,
      39,    1,  597,    2, 0x08 /* Private */,
      40,    1,  600,    2, 0x08 /* Private */,
      41,    1,  603,    2, 0x08 /* Private */,
      42,    1,  606,    2, 0x08 /* Private */,
      43,    1,  609,    2, 0x08 /* Private */,
      44,    1,  612,    2, 0x08 /* Private */,
      45,    1,  615,    2, 0x08 /* Private */,
      46,    1,  618,    2, 0x08 /* Private */,
      47,    1,  621,    2, 0x08 /* Private */,
      48,    1,  624,    2, 0x08 /* Private */,
      49,    1,  627,    2, 0x08 /* Private */,
      50,    1,  630,    2, 0x08 /* Private */,
      51,    1,  633,    2, 0x08 /* Private */,
      52,    1,  636,    2, 0x08 /* Private */,
      53,    1,  639,    2, 0x08 /* Private */,
      54,    0,  642,    2, 0x08 /* Private */,
      55,    0,  643,    2, 0x08 /* Private */,
      56,    0,  644,    2, 0x08 /* Private */,
      57,    0,  645,    2, 0x08 /* Private */,
      58,    0,  646,    2, 0x08 /* Private */,
      59,    0,  647,    2, 0x08 /* Private */,
      60,    0,  648,    2, 0x08 /* Private */,
      61,    0,  649,    2, 0x08 /* Private */,
      62,    1,  650,    2, 0x08 /* Private */,
      63,    0,  653,    2, 0x08 /* Private */,
      64,    0,  654,    2, 0x08 /* Private */,
      65,    0,  655,    2, 0x08 /* Private */,
      66,    0,  656,    2, 0x08 /* Private */,
      67,    0,  657,    2, 0x08 /* Private */,
      68,    0,  658,    2, 0x08 /* Private */,
      69,    1,  659,    2, 0x08 /* Private */,
      70,    1,  662,    2, 0x08 /* Private */,
      71,    1,  665,    2, 0x08 /* Private */,
      72,    1,  668,    2, 0x08 /* Private */,
      74,    1,  671,    2, 0x08 /* Private */,
      75,    1,  674,    2, 0x08 /* Private */,
      76,    1,  677,    2, 0x08 /* Private */,
      77,    1,  680,    2, 0x08 /* Private */,
      78,    1,  683,    2, 0x08 /* Private */,
      79,    1,  686,    2, 0x08 /* Private */,
      80,    1,  689,    2, 0x08 /* Private */,
      81,    1,  692,    2, 0x08 /* Private */,
      82,    1,  695,    2, 0x08 /* Private */,
      83,    1,  698,    2, 0x08 /* Private */,
      84,    1,  701,    2, 0x08 /* Private */,
      85,    1,  704,    2, 0x08 /* Private */,
      86,    1,  707,    2, 0x08 /* Private */,
      87,    1,  710,    2, 0x08 /* Private */,
      88,    1,  713,    2, 0x08 /* Private */,
      89,    1,  716,    2, 0x08 /* Private */,
      90,    1,  719,    2, 0x08 /* Private */,
      91,    1,  722,    2, 0x08 /* Private */,
      92,    1,  725,    2, 0x08 /* Private */,
      93,    1,  728,    2, 0x08 /* Private */,
      94,    1,  731,    2, 0x08 /* Private */,
      95,    1,  734,    2, 0x08 /* Private */,
      96,    1,  737,    2, 0x08 /* Private */,
      97,    1,  740,    2, 0x08 /* Private */,
      98,    1,  743,    2, 0x08 /* Private */,
      99,    1,  746,    2, 0x08 /* Private */,
     100,    1,  749,    2, 0x08 /* Private */,
     101,    1,  752,    2, 0x08 /* Private */,
     102,    1,  755,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, QMetaType::Bool,   73,

       0        // eod
};

void CharacterSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CharacterSheet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newNameEdited(); break;
        case 1: _t->on_charNameLine_editingFinished(); break;
        case 2: _t->on_charClassLevelLine_editingFinished(); break;
        case 3: _t->on_charBackGroundLine_editingFinished(); break;
        case 4: _t->on_playerNameLine_editingFinished(); break;
        case 5: _t->on_charRaceLine_editingFinished(); break;
        case 6: _t->on_charAlignmentLine_editingFinished(); break;
        case 7: _t->on_expPointsLine_editingFinished(); break;
        case 8: _t->on_strengthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_dexteritySpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_constitutionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_intelligenceSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_wisdomSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_charismaSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_armorClassSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_initiativeSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_speedSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_hitPointsCurrentSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_hitPointsTemporarySpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_hitPointsMaxLineEdit_editingFinished(); break;
        case 20: _t->on_hitDiceSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_hitDiceTotalLineEdit_editingFinished(); break;
        case 22: _t->on_coinsCopperSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_coinsSilverSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_coinsElectrumSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_coinsGoldSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_coinsPlatinumSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_savingThrowStrengthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_savingThrowDexteritySpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_savingThrowConstitutionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_savingThrowIntelligenceSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_savingThrowWisdomSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_savingThrowCharismaSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->on_skillAcrobaticsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_skillAnimalHandlingSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_skillArcanaSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_skillAthleticsSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on_skillDeceptionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_skillHistorySpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_skillInsightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_skillIntimidationSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_skillInvestigationSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_skillMedicineSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_skillNatureSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->on_skillPerceptionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->on_skillPerformanceSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->on_skillPersuasionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->on_skillReligionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_skillSleightOfHandSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_skillStealthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->on_skillSurvivalSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_strengthLineEdit_editingFinished(); break;
        case 52: _t->on_dexterityLineEdit_editingFinished(); break;
        case 53: _t->on_constitutionLineEdit_editingFinished(); break;
        case 54: _t->on_intelligenceLineEdit_editingFinished(); break;
        case 55: _t->on_wisdomLineEdit_editingFinished(); break;
        case 56: _t->on_charismaLineEdit_editingFinished(); break;
        case 57: _t->on_passiveWisdomLineEdit_editingFinished(); break;
        case 58: _t->on_inspirationLineEdit_editingFinished(); break;
        case 59: _t->on_profBonusSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->on_attack1NameLineEdit_editingFinished(); break;
        case 61: _t->on_attack2NameLineEdit_editingFinished(); break;
        case 62: _t->on_attack3NameLineEdit_editingFinished(); break;
        case 63: _t->on_attack1DamageTypeLineEdit_editingFinished(); break;
        case 64: _t->on_attack2DamageTypeLineEdit_editingFinished(); break;
        case 65: _t->on_attack3DamageTypeLineEdit_editingFinished(); break;
        case 66: _t->on_attack1BonusSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->on_attack2BonusSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->on_attack3BonusSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->on_savingThrowStrengthRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->on_savingThrowDexterityRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_savingThrowConstitutionRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->on_savingThrowIntelligenceRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->on_savingThrowWisdomRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->on_savingThrowCharismaRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->on_skillAcrobaticsRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->on_skillAnimalHandlingRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->on_skillArcanaRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->on_skillAthleticsRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->on_skillDeceptionRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->on_skillHistoryRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->on_skillInsightRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->on_skillIntimidationRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->on_skillInvestigationRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->on_skillMedicineRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->on_skillNatureRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->on_skillPerceptionRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_skillPerformanceRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_skillPersuasionRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->on_skillReligionRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->on_skillSleightOfHandRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->on_skillStealthRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->on_skillSurvivalRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->on_success1RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->on_success2RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_success3RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 96: _t->on_failur1RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: _t->on_failur2RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->on_failur3RadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CharacterSheet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CharacterSheet::newNameEdited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CharacterSheet::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CharacterSheet.data,
    qt_meta_data_CharacterSheet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CharacterSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharacterSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CharacterSheet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CharacterSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 99)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 99;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 99)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 99;
    }
    return _id;
}

// SIGNAL 0
void CharacterSheet::newNameEdited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
