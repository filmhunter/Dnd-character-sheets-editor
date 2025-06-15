#ifndef CHARACTERSHEET_H
#define CHARACTERSHEET_H

#include <QWidget>
#include <QPainter>
#include <QWheelEvent>
#include <QScrollBar>
#include <QTextCursor>
#include <QTextFrame>
#include <QJsonObject>

#include <QDebug>

#include "CharacterData.h"

namespace Ui {
class CharacterSheet;
}

class CharacterSheet : public QWidget
{
    Q_OBJECT

public:
    explicit CharacterSheet(CharacterData *newOne, QWidget *parent = nullptr);
    ~CharacterSheet();  

private:
    CharacterData *data;
    Ui::CharacterSheet *ui;
    bool eventFilter(QObject *, QEvent *);

private slots:
    void on_charNameLine_editingFinished();
    void on_charClassLevelLine_editingFinished();
    void on_charBackGroundLine_editingFinished();
    void on_playerNameLine_editingFinished();
    void on_charRaceLine_editingFinished();
    void on_charAlignmentLine_editingFinished();
    void on_expPointsLine_editingFinished();

    void on_strengthSpinBox_valueChanged(int arg1);
    void on_dexteritySpinBox_valueChanged(int arg1);
    void on_constitutionSpinBox_valueChanged(int arg1);
    void on_intelligenceSpinBox_valueChanged(int arg1);
    void on_wisdomSpinBox_valueChanged(int arg1);
    void on_charismaSpinBox_valueChanged(int arg1);

    void on_armorClassSpinBox_valueChanged(int arg1);
    void on_initiativeSpinBox_valueChanged(int arg1);
    void on_speedSpinBox_valueChanged(int arg1);

    void on_hitPointsCurrentSpinBox_valueChanged(int arg1);
    void on_hitPointsTemporarySpinBox_valueChanged(int arg1);
    void on_hitPointsMaxLineEdit_editingFinished();
    void on_hitDiceSpinBox_valueChanged(int arg1);
    void on_hitDiceTotalLineEdit_editingFinished();

    void on_coinsCopperSpinBox_valueChanged(int arg1);
    void on_coinsSilverSpinBox_valueChanged(int arg1);
    void on_coinsElectrumSpinBox_valueChanged(int arg1);
    void on_coinsGoldSpinBox_valueChanged(int arg1);
    void on_coinsPlatinumSpinBox_valueChanged(int arg1);

    void on_savingThrowStrengthSpinBox_valueChanged(int arg1);
    void on_savingThrowDexteritySpinBox_valueChanged(int arg1);
    void on_savingThrowConstitutionSpinBox_valueChanged(int arg1);
    void on_savingThrowIntelligenceSpinBox_valueChanged(int arg1);
    void on_savingThrowWisdomSpinBox_valueChanged(int arg1);
    void on_savingThrowCharismaSpinBox_valueChanged(int arg1);

    void on_skillAcrobaticsSpinBox_valueChanged(int arg1);
    void on_skillAnimalHandlingSpinBox_valueChanged(int arg1);
    void on_skillArcanaSpinBox_valueChanged(int arg1);
    void on_skillAthleticsSpinBox_valueChanged(int arg1);
    void on_skillDeceptionSpinBox_valueChanged(int arg1);
    void on_skillHistorySpinBox_valueChanged(int arg1);
    void on_skillInsightSpinBox_valueChanged(int arg1);
    void on_skillIntimidationSpinBox_valueChanged(int arg1);
    void on_skillInvestigationSpinBox_valueChanged(int arg1);
    void on_skillMedicineSpinBox_valueChanged(int arg1);
    void on_skillNatureSpinBox_valueChanged(int arg1);
    void on_skillPerceptionSpinBox_valueChanged(int arg1);
    void on_skillPerformanceSpinBox_valueChanged(int arg1);
    void on_skillPersuasionSpinBox_valueChanged(int arg1);
    void on_skillReligionSpinBox_valueChanged(int arg1);
    void on_skillSleightOfHandSpinBox_valueChanged(int arg1);
    void on_skillStealthSpinBox_valueChanged(int arg1);
    void on_skillSurvivalSpinBox_valueChanged(int arg1);

    void on_strengthLineEdit_editingFinished();
    void on_dexterityLineEdit_editingFinished();
    void on_constitutionLineEdit_editingFinished();
    void on_intelligenceLineEdit_editingFinished();
    void on_wisdomLineEdit_editingFinished();
    void on_charismaLineEdit_editingFinished();

    void on_passiveWisdomLineEdit_editingFinished();

    void on_inspirationLineEdit_editingFinished();

    void on_profBonusSpinBox_valueChanged(int arg1);

    void on_attack1NameLineEdit_editingFinished();
    void on_attack2NameLineEdit_editingFinished();
    void on_attack3NameLineEdit_editingFinished();
    void on_attack1DamageTypeLineEdit_editingFinished();
    void on_attack2DamageTypeLineEdit_editingFinished();
    void on_attack3DamageTypeLineEdit_editingFinished();
    void on_attack1BonusSpinBox_valueChanged(int arg1);
    void on_attack2BonusSpinBox_valueChanged(int arg1);
    void on_attack3BonusSpinBox_valueChanged(int arg1);

    void on_savingThrowStrengthRadioButton_clicked(bool checked);
    void on_savingThrowDexterityRadioButton_clicked(bool checked);
    void on_savingThrowConstitutionRadioButton_clicked(bool checked);
    void on_savingThrowIntelligenceRadioButton_clicked(bool checked);
    void on_savingThrowWisdomRadioButton_clicked(bool checked);
    void on_savingThrowCharismaRadioButton_clicked(bool checked);

    void on_skillAcrobaticsRadioButton_clicked(bool checked);
    void on_skillAnimalHandlingRadioButton_clicked(bool checked);
    void on_skillArcanaRadioButton_clicked(bool checked);
    void on_skillAthleticsRadioButton_clicked(bool checked);
    void on_skillDeceptionRadioButton_clicked(bool checked);
    void on_skillHistoryRadioButton_clicked(bool checked);
    void on_skillInsightRadioButton_clicked(bool checked);
    void on_skillIntimidationRadioButton_clicked(bool checked);
    void on_skillInvestigationRadioButton_clicked(bool checked);
    void on_skillMedicineRadioButton_clicked(bool checked);
    void on_skillNatureRadioButton_clicked(bool checked);
    void on_skillPerceptionRadioButton_clicked(bool checked);
    void on_skillPerformanceRadioButton_clicked(bool checked);
    void on_skillPersuasionRadioButton_clicked(bool checked);
    void on_skillReligionRadioButton_clicked(bool checked);
    void on_skillSleightOfHandRadioButton_clicked(bool checked);
    void on_skillStealthRadioButton_clicked(bool checked);
    void on_skillSurvivalRadioButton_clicked(bool checked);

    void on_success1RadioButton_clicked(bool checked);
    void on_success2RadioButton_clicked(bool checked);
    void on_success3RadioButton_clicked(bool checked);
    void on_failur1RadioButton_clicked(bool checked);
    void on_failur2RadioButton_clicked(bool checked);
    void on_failur3RadioButton_clicked(bool checked);

signals:
    void newNameEdited();
};

#endif // CHARACTERSHEET_H
