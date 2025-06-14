#include "CharacterSheet.h"
#include "ui_CharacterSheet.h"

CharacterSheet::CharacterSheet(CharacterData *newOne, QWidget *parent) :
    QWidget(parent),
    data(newOne),
    ui(new Ui::CharacterSheet)
{
    ui->setupUi(this);

    // Connect button to switch pages int stackedWidget
    QStackedWidget* sW = ui->stackedWidget;
    connect(ui->buttonPrevPage, &QPushButton::clicked, [sW](){
        int currentIndex = sW->currentIndex();
        (currentIndex > 0) ? sW->setCurrentIndex(currentIndex - 1) : sW->setCurrentIndex(2);
    });
    connect(ui->buttonNextPage, &QPushButton::clicked, [sW](){
        int currentIndex = sW->currentIndex();
        sW->setCurrentIndex((currentIndex + 1) % sW->count());
    });

    ui->profLangEdit->installEventFilter(this);
    ui->attackAndSpellEdit->installEventFilter(this);
    ui->equipmentEdit->installEventFilter(this);
    ui->personalityTraitsEdit->installEventFilter(this);
    ui->idealsEdit->installEventFilter(this);
    ui->bondsEdit->installEventFilter(this);
    ui->flawsEdit->installEventFilter(this);
    ui->featuresTraitsEdit->installEventFilter(this);

    // Disable spinbox reaction on mouse wheel scrolling
    ui->armorClassSpinBox->installEventFilter(this);
    ui->initiativeSpinBox->installEventFilter(this);
    ui->speedSpinBox->installEventFilter(this);

    ui->hitPointsCurrentSpinBox->installEventFilter(this);
    ui->hitPointsTemporarySpinBox->installEventFilter(this);
    ui->hitDiceSpinBox->installEventFilter(this);

    ui->coinsCopperSpinBox->installEventFilter(this);
    ui->coinsSilverSpinBox->installEventFilter(this);
    ui->coinsElectrumSpinBox->installEventFilter(this);
    ui->coinsGoldSpinBox->installEventFilter(this);
    ui->coinsPlatinumSpinBox->installEventFilter(this);

    ui->strengthSpinBox->installEventFilter(this);
    ui->dexteritySpinBox->installEventFilter(this);
    ui->constitutionSpinBox->installEventFilter(this);
    ui->intelligenceSpinBox->installEventFilter(this);
    ui->wisdomSpinBox->installEventFilter(this);
    ui->charismaSpinBox->installEventFilter(this);

    ui->profBonusSpinBox->installEventFilter(this);

    ui->savingThrowStrengthSpinBox->installEventFilter(this);
    ui->savingThrowDexteritySpinBox->installEventFilter(this);
    ui->savingThrowConstitutionSpinBox->installEventFilter(this);
    ui->savingThrowIntelligenceSpinBox->installEventFilter(this);
    ui->savingThrowWisdomSpinBox->installEventFilter(this);
    ui->savingThrowCharismaSpinBox->installEventFilter(this);

    ui->skillAcrobaticsSpinBox->installEventFilter(this);
    ui->skillAnimalHandlingSpinBox->installEventFilter(this);
    ui->skillArcanaSpinBox->installEventFilter(this);
    ui->skillAthleticsSpinBox->installEventFilter(this);
    ui->skillDeceptionSpinBox->installEventFilter(this);
    ui->skillHistorySpinBox->installEventFilter(this);
    ui->skillInsightSpinBox->installEventFilter(this);
    ui->skillIntimidationSpinBox->installEventFilter(this);
    ui->skillInvestigationSpinBox->installEventFilter(this);
    ui->skillMedicineSpinBox->installEventFilter(this);
    ui->skillNatureSpinBox->installEventFilter(this);
    ui->skillPerceptionSpinBox->installEventFilter(this);
    ui->skillPerformanceSpinBox->installEventFilter(this);
    ui->skillPersuasionSpinBox->installEventFilter(this);
    ui->skillReligionSpinBox->installEventFilter(this);
    ui->skillSleightOfHandSpinBox->installEventFilter(this);
    ui->skillStealthSpinBox->installEventFilter(this);
    ui->skillSurvivalSpinBox->installEventFilter(this);

    ui->attack1BonusSpinBox->installEventFilter(this);
    ui->attack2BonusSpinBox->installEventFilter(this);
    ui->attack3BonusSpinBox->installEventFilter(this);

    // Установка значений из CharacterData
    ui->charNameLine->setText(data->charName);
    ui->charClassLevelLine->setText(data->charClassLevel);
    ui->charRaceLine->setText(data->charRace);
    ui->charBackGroundLine->setText(data->charBackground);
    ui->charAlignmentLine->setText(data->charAlignment);
    ui->playerNameLine->setText(data->playerName);
    ui->expPointsLine->setText(QString::number(data->expPoints));

    ui->strengthLineEdit->setText(QString::number(data->strength.Value));
    ui->strengthSpinBox->setValue(data->strength.Modifier);

    ui->dexterityLineEdit->setText(QString::number(data->dexterity.Value));
    ui->dexteritySpinBox->setValue(data->dexterity.Modifier);

    ui->constitutionLineEdit->setText(QString::number(data->constitution.Value));
    ui->constitutionSpinBox->setValue(data->constitution.Modifier);

    ui->intelligenceLineEdit->setText(QString::number(data->intelligence.Value));
    ui->intelligenceSpinBox->setValue(data->intelligence.Modifier);

    ui->wisdomLineEdit->setText(QString::number(data->wisdom.Value));
    ui->wisdomSpinBox->setValue(data->wisdom.Modifier);

    ui->charismaLineEdit->setText(QString::number(data->charisma.Value));
    ui->charismaSpinBox->setValue(data->charisma.Modifier);

    ui->inspirationLineEdit->setText(QString::number(data->inspiration));
    ui->profBonusSpinBox->setValue(data->profBonus);

    ui->savingThrowStrengthRadioButton->setChecked(data->profBonusSet.Strength);
    ui->savingThrowDexterityRadioButton->setChecked(data->profBonusSet.Dexterity);
    ui->savingThrowConstitutionRadioButton->setChecked(data->profBonusSet.Constitution);
    ui->savingThrowIntelligenceRadioButton->setChecked(data->profBonusSet.Intelligence);
    ui->savingThrowWisdomRadioButton->setChecked(data->profBonusSet.Wisdom);
    ui->savingThrowCharismaRadioButton->setChecked(data->profBonusSet.Charisma);
    ui->skillAcrobaticsRadioButton->setChecked(data->profBonusSet.Acrobatics);
    ui->skillAnimalHandlingRadioButton->setChecked(data->profBonusSet.AnimalHandling);
    ui->skillArcanaRadioButton->setChecked(data->profBonusSet.Arcana);
    ui->skillAthleticsRadioButton->setChecked(data->profBonusSet.Athletics);
    ui->skillDeceptionRadioButton->setChecked(data->profBonusSet.Deception);
    ui->skillHistoryRadioButton->setChecked(data->profBonusSet.History);
    ui->skillInsightRadioButton->setChecked(data->profBonusSet.Insight);
    ui->skillIntimidationRadioButton->setChecked(data->profBonusSet.Intimidation);
    ui->skillInvestigationRadioButton->setChecked(data->profBonusSet.Investigation);
    ui->skillMedicineRadioButton->setChecked(data->profBonusSet.Medicine);
    ui->skillNatureRadioButton->setChecked(data->profBonusSet.Nature);
    ui->skillPerceptionRadioButton->setChecked(data->profBonusSet.Perception);
    ui->skillPerformanceRadioButton->setChecked(data->profBonusSet.Performance);
    ui->skillPersuasionRadioButton->setChecked(data->profBonusSet.Persuasion);
    ui->skillReligionRadioButton->setChecked(data->profBonusSet.Religion);
    ui->skillSleightOfHandRadioButton->setChecked(data->profBonusSet.SleightOfHand);
    ui->skillStealthRadioButton->setChecked(data->profBonusSet.Stealth);
    ui->skillSurvivalRadioButton->setChecked(data->profBonusSet.Survival);

    ui->savingThrowStrengthSpinBox->setValue(data->savingThrows.Strength);
    ui->savingThrowDexteritySpinBox->setValue(data->savingThrows.Dexterity);
    ui->savingThrowConstitutionSpinBox->setValue(data->savingThrows.Constitution);
    ui->savingThrowIntelligenceSpinBox->setValue(data->savingThrows.Intelligence);
    ui->savingThrowWisdomSpinBox->setValue(data->savingThrows.Wisdom);
    ui->savingThrowCharismaSpinBox->setValue(data->savingThrows.Charisma);

    ui->skillAcrobaticsSpinBox->setValue(data->skills.Acrobatics);
    ui->skillAnimalHandlingSpinBox->setValue(data->skills.AnimalHandling);
    ui->skillArcanaSpinBox->setValue(data->skills.Arcana);
    ui->skillAthleticsSpinBox->setValue(data->skills.Athletics);
    ui->skillDeceptionSpinBox->setValue(data->skills.Deception);
    ui->skillHistorySpinBox->setValue(data->skills.History);
    ui->skillInsightSpinBox->setValue(data->skills.Insight);
    ui->skillIntimidationSpinBox->setValue(data->skills.Intimidation);
    ui->skillInvestigationSpinBox->setValue(data->skills.Investigation);
    ui->skillMedicineSpinBox->setValue(data->skills.Medicine);
    ui->skillNatureSpinBox->setValue(data->skills.Nature);
    ui->skillPerceptionSpinBox->setValue(data->skills.Perception);
    ui->skillPerformanceSpinBox->setValue(data->skills.Performance);
    ui->skillPersuasionSpinBox->setValue(data->skills.Persuasion);
    ui->skillReligionSpinBox->setValue(data->skills.Religion);
    ui->skillSleightOfHandSpinBox->setValue(data->skills.SleightOfHand);
    ui->skillStealthSpinBox->setValue(data->skills.Stealth);
    ui->skillSurvivalSpinBox->setValue(data->skills.Survival);

    ui->passiveWisdomLineEdit->setText(QString::number(data->passiveWisdom));
    ui->profLangEdit->setPlainText(data->otherProfAndLanguages);
    ui->armorClassSpinBox->setValue(data->armorClass);
    ui->initiativeSpinBox->setValue(data->initiative);

    ui->speedSpinBox->setValue(data->speed.Value);
    //ui->speedSpinBox->setValue(data->speed.Units);

    ui->hitPointsMaxLineEdit->setText(QString::number(data->hitPoints.Maximum));
    ui->hitPointsCurrentSpinBox->setValue(data->hitPoints.Current);
    ui->hitPointsTemporarySpinBox->setValue(data->hitPoints.Temporary);

    ui->hitDiceTotalLineEdit->setText(data->hitDice.Total);
    ui->hitDiceSpinBox->setValue(data->hitDice.Current);

    if(data->deathSaves.Successes == 1)
        ui->success1RadioButton->setChecked(true);
    else if(data->deathSaves.Successes == 2)
    {
        ui->success1RadioButton->setChecked(true);
        ui->success2RadioButton->setChecked(true);
    }
    else if(data->deathSaves.Successes == 3)
    {
        ui->success1RadioButton->setChecked(true);
        ui->success2RadioButton->setChecked(true);
        ui->success3RadioButton->setChecked(true);
    }
    if(data->deathSaves.Failures == 1)
        ui->failur1RadioButton->setChecked(true);
    else if(data->deathSaves.Failures == 2)
    {
        ui->failur1RadioButton->setChecked(true);
        ui->failur2RadioButton->setChecked(true);
    }
    else if(data->deathSaves.Failures == 3)
    {
        ui->failur1RadioButton->setChecked(true);
        ui->failur2RadioButton->setChecked(true);
        ui->failur3RadioButton->setChecked(true);
    }

    ui->attack1NameLineEdit->setText(data->attack1.AttackName);
    ui->attack1BonusSpinBox->setValue(data->attack1.AttackBonus);
    ui->attack1DamageTypeLineEdit->setText(data->attack1.DamageType);

    ui->attack2NameLineEdit->setText(data->attack2.AttackName);
    ui->attack2BonusSpinBox->setValue(data->attack2.AttackBonus);
    ui->attack2DamageTypeLineEdit->setText(data->attack2.DamageType);

    ui->attack3NameLineEdit->setText(data->attack3.AttackName);
    ui->attack3BonusSpinBox->setValue(data->attack3.AttackBonus);
    ui->attack3DamageTypeLineEdit->setText(data->attack3.DamageType);

    ui->attackAndSpellEdit->setPlainText(data->otherAttacksSpellcasts);
    ui->personalityTraitsEdit->setPlainText(data->personalTraits);
    ui->idealsEdit->setPlainText(data->ideals);
    ui->bondsEdit->setPlainText(data->bonds);
    ui->flawsEdit->setPlainText(data->flaws);
    ui->equipmentEdit->setPlainText(data->equipment);

    ui->coinsCopperSpinBox->setValue(data->coins.CopperPieces);
    ui->coinsSilverSpinBox->setValue(data->coins.SilverPieces);
    ui->coinsElectrumSpinBox->setValue(data->coins.ElectrumPieces);
    ui->coinsGoldSpinBox->setValue(data->coins.GoldPieces);
    ui->coinsPlatinumSpinBox->setValue(data->coins.PlatinumPieces);

    ui->featuresTraitsEdit->setPlainText(data->featuresTraits);
}


CharacterSheet::~CharacterSheet()
{
    delete ui;
}


// Head TextEditLines
void CharacterSheet::on_charNameLine_editingFinished()
{
    ui->charNameLine->home(false);
    ui->charNameLine->clearFocus();
    if(ui->charNameLine->text() != "")
    {
        data->charName = ui->charNameLine->text();
        emit newNameEdited();
    }
}

void CharacterSheet::on_charClassLevelLine_editingFinished()
{
    ui->charClassLevelLine->home(false);
    ui->charClassLevelLine->clearFocus();
    data->charClassLevel = ui->charClassLevelLine->text();
}

void CharacterSheet::on_charBackGroundLine_editingFinished()
{
    ui->charBackGroundLine->home(false);
    ui->charBackGroundLine->clearFocus();
    data->charBackground = ui->charBackGroundLine->text();
}

void CharacterSheet::on_playerNameLine_editingFinished()
{
    ui->playerNameLine->home(false);
    ui->playerNameLine->clearFocus();
    data->playerName = ui->playerNameLine->text();
}

void CharacterSheet::on_charRaceLine_editingFinished()
{
    ui->charRaceLine->home(false);
    ui->charRaceLine->clearFocus();
    data->charRace = ui->charRaceLine->text();
}

void CharacterSheet::on_charAlignmentLine_editingFinished()
{
    ui->charAlignmentLine->home(false);
    ui->charAlignmentLine->clearFocus();
    data->charAlignment = ui->charAlignmentLine->text();
}

void CharacterSheet::on_expPointsLine_editingFinished()
{
    ui->expPointsLine->home(false);
    ui->expPointsLine->clearFocus();
    bool ok;
    int points = QString(ui->expPointsLine->text()).toInt(&ok);
    if(ok) data->expPoints = points;
    else
    {
        ui->expPointsLine->setText("0");
        data->expPoints = 0;
    }
}


// Characteristics Spin Boxes
void CharacterSheet::on_strengthSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->strengthSpinBox->setPrefix("+");
    else ui->strengthSpinBox->setPrefix("");
    data->strength.Modifier = arg1;
}

void CharacterSheet::on_dexteritySpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->dexteritySpinBox->setPrefix("+");
    else ui->dexteritySpinBox->setPrefix("");
    data->dexterity.Modifier = arg1;
}

void CharacterSheet::on_constitutionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->constitutionSpinBox->setPrefix("+");
    else ui->constitutionSpinBox->setPrefix("");
    data->constitution.Modifier = arg1;
}

void CharacterSheet::on_intelligenceSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->intelligenceSpinBox->setPrefix("+");
    else ui->intelligenceSpinBox->setPrefix("");
    data->intelligence.Modifier = arg1;
}

void CharacterSheet::on_wisdomSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->wisdomSpinBox->setPrefix("+");
    else ui->wisdomSpinBox->setPrefix("");
    data->wisdom.Modifier = arg1;
}

void CharacterSheet::on_charismaSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->charismaSpinBox->setPrefix("+");
    else ui->charismaSpinBox->setPrefix("");
    data->charisma.Modifier = arg1;
}

void CharacterSheet::on_armorClassSpinBox_valueChanged(int arg1)
{ data->armorClass = arg1; }

void CharacterSheet::on_initiativeSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->initiativeSpinBox->setPrefix("+");
    else ui->initiativeSpinBox->setPrefix("");
    data->initiative = arg1;
}

void CharacterSheet::on_speedSpinBox_valueChanged(int arg1)
{
    ui->speedSpinBox->setSuffix(" " + data->speed.Units);
    data->speed.Value = arg1;
}


// Hit points Hit dices
void CharacterSheet::on_hitPointsCurrentSpinBox_valueChanged(int arg1)
{ data->hitPoints.Current = arg1; }

void CharacterSheet::on_hitPointsTemporarySpinBox_valueChanged(int arg1)
{ data->hitPoints.Temporary = arg1; }

void CharacterSheet::on_hitPointsMaxLineEdit_editingFinished()
{
    ui->hitPointsMaxLineEdit->home(false);
    ui->hitPointsMaxLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->hitPointsMaxLineEdit->text()).toInt(&ok);
    if(ok) data->hitPoints.Maximum = value;
    else
    {
        ui->hitPointsMaxLineEdit->setText("0");
        data->hitPoints.Maximum = 0;
    }
}

void CharacterSheet::on_hitDiceSpinBox_valueChanged(int arg1)
{ data->hitDice.Current = arg1; }

void CharacterSheet::on_hitDiceTotalLineEdit_editingFinished()
{
    ui->hitDiceTotalLineEdit->home(false);
    ui->hitDiceTotalLineEdit->clearFocus();
    data->hitDice.Total = ui->hitDiceTotalLineEdit->text();
}


// Coins
void CharacterSheet::on_coinsCopperSpinBox_valueChanged(int arg1)
{ data->coins.CopperPieces = arg1; }

void CharacterSheet::on_coinsSilverSpinBox_valueChanged(int arg1)
{ data->coins.SilverPieces = arg1; }

void CharacterSheet::on_coinsElectrumSpinBox_valueChanged(int arg1)
{ data->coins.ElectrumPieces = arg1; }

void CharacterSheet::on_coinsGoldSpinBox_valueChanged(int arg1)
{ data->coins.GoldPieces = arg1; }

void CharacterSheet::on_coinsPlatinumSpinBox_valueChanged(int arg1)
{ data->coins.PlatinumPieces = arg1; }


// Saving throws
void CharacterSheet::on_savingThrowStrengthSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowStrengthSpinBox->setPrefix("+");
    else ui->savingThrowStrengthSpinBox->setPrefix("");
    data->savingThrows.Strength = arg1;
}

void CharacterSheet::on_savingThrowDexteritySpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowDexteritySpinBox->setPrefix("+");
    else ui->savingThrowDexteritySpinBox->setPrefix("");
    data->savingThrows.Dexterity = arg1;
}

void CharacterSheet::on_savingThrowConstitutionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowConstitutionSpinBox->setPrefix("+");
    else ui->savingThrowConstitutionSpinBox->setPrefix("");
    data->savingThrows.Constitution = arg1;
}

void CharacterSheet::on_savingThrowIntelligenceSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowIntelligenceSpinBox->setPrefix("+");
    else ui->savingThrowIntelligenceSpinBox->setPrefix("");
    data->savingThrows.Intelligence = arg1;
}

void CharacterSheet::on_savingThrowWisdomSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowWisdomSpinBox->setPrefix("+");
    else ui->savingThrowWisdomSpinBox->setPrefix("");
    data->savingThrows.Wisdom = arg1;
}

void CharacterSheet::on_savingThrowCharismaSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->savingThrowCharismaSpinBox->setPrefix("+");
    else ui->savingThrowCharismaSpinBox->setPrefix("");
    data->savingThrows.Charisma = arg1;
}


//Skills
void CharacterSheet::on_skillAcrobaticsSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillAcrobaticsSpinBox->setPrefix("+");
    else ui->skillAcrobaticsSpinBox->setPrefix("");
    data->skills.Acrobatics = arg1;
}

void CharacterSheet::on_skillAnimalHandlingSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillAnimalHandlingSpinBox->setPrefix("+");
    else ui->skillAnimalHandlingSpinBox->setPrefix("");
    data->skills.AnimalHandling = arg1;
}

void CharacterSheet::on_skillArcanaSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillArcanaSpinBox->setPrefix("+");
    else ui->skillArcanaSpinBox->setPrefix("");
    data->skills.Arcana = arg1;
}

void CharacterSheet::on_skillAthleticsSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillAthleticsSpinBox->setPrefix("+");
    else ui->skillAthleticsSpinBox->setPrefix("");
    data->skills.Athletics = arg1;
}

void CharacterSheet::on_skillDeceptionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillDeceptionSpinBox->setPrefix("+");
    else ui->skillDeceptionSpinBox->setPrefix("");
    data->skills.Deception = arg1;
}

void CharacterSheet::on_skillHistorySpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillHistorySpinBox->setPrefix("+");
    else ui->skillHistorySpinBox->setPrefix("");
    data->skills.History = arg1;
}

void CharacterSheet::on_skillInsightSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillInsightSpinBox->setPrefix("+");
    else ui->skillInsightSpinBox->setPrefix("");
    data->skills.Insight = arg1;
}

void CharacterSheet::on_skillIntimidationSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillIntimidationSpinBox->setPrefix("+");
    else ui->skillIntimidationSpinBox->setPrefix("");
    data->skills.Intimidation = arg1;
}

void CharacterSheet::on_skillInvestigationSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillInvestigationSpinBox->setPrefix("+");
    else ui->skillInvestigationSpinBox->setPrefix("");
    data->skills.Investigation = arg1;
}

void CharacterSheet::on_skillMedicineSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillMedicineSpinBox->setPrefix("+");
    else ui->skillMedicineSpinBox->setPrefix("");
    data->skills.Medicine = arg1;
}

void CharacterSheet::on_skillNatureSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillNatureSpinBox->setPrefix("+");
    else ui->skillNatureSpinBox->setPrefix("");
    data->skills.Nature = arg1;
}

void CharacterSheet::on_skillPerceptionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillPerceptionSpinBox->setPrefix("+");
    else ui->skillPerceptionSpinBox->setPrefix("");
    data->skills.Perception = arg1;
}

void CharacterSheet::on_skillPerformanceSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillPerformanceSpinBox->setPrefix("+");
    else ui->skillPerformanceSpinBox->setPrefix("");
    data->skills.Performance = arg1;
}

void CharacterSheet::on_skillPersuasionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillPersuasionSpinBox->setPrefix("+");
    else ui->skillPersuasionSpinBox->setPrefix("");
    data->skills.Persuasion = arg1;
}

void CharacterSheet::on_skillReligionSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillReligionSpinBox->setPrefix("+");
    else ui->skillReligionSpinBox->setPrefix("");
    data->skills.Religion = arg1;
}

void CharacterSheet::on_skillSleightOfHandSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillSleightOfHandSpinBox->setPrefix("+");
    else ui->skillSleightOfHandSpinBox->setPrefix("");
    data->skills.SleightOfHand = arg1;
}

void CharacterSheet::on_skillStealthSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillStealthSpinBox->setPrefix("+");
    else ui->skillStealthSpinBox->setPrefix("");
    data->skills.Stealth = arg1;
}

void CharacterSheet::on_skillSurvivalSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->skillSurvivalSpinBox->setPrefix("+");
    else ui->skillSurvivalSpinBox->setPrefix("");
    data->skills.Survival = arg1;
}


// Proficiency bonus
void CharacterSheet::on_profBonusSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->profBonusSpinBox->setPrefix("+");
    else ui->profBonusSpinBox->setPrefix("");

    if(arg1 == data->profBonus){ return; } // Для предотвращения срабатывания при нулевом изменении
                                           //(происходит просто вычитание profBonus, значение savingThrow или skill просто уменьшается)
                                           //p.s. видимо setValue игнорит одинаковые значения

    // Saving Throws
    if(ui->savingThrowStrengthRadioButton->isChecked())
    {
        qDebug() << arg1;
        data->savingThrows.Strength -= data->profBonus;
        ui->savingThrowStrengthSpinBox->setValue(data->savingThrows.Strength + arg1);
    }
    if(ui->savingThrowDexterityRadioButton->isChecked())
    {
        data->savingThrows.Dexterity -= data->profBonus;
        ui->savingThrowDexteritySpinBox->setValue(data->savingThrows.Dexterity + arg1);
    }
    if(ui->savingThrowConstitutionRadioButton->isChecked())
    {
        data->savingThrows.Constitution -= data->profBonus;
        ui->savingThrowConstitutionSpinBox->setValue(data->savingThrows.Constitution + arg1);
    }
    if(ui->savingThrowIntelligenceRadioButton->isChecked())
    {
        data->savingThrows.Intelligence -= data->profBonus;
        ui->savingThrowIntelligenceSpinBox->setValue(data->savingThrows.Intelligence + arg1);
    }
    if(ui->savingThrowWisdomRadioButton->isChecked())
    {
        data->savingThrows.Wisdom -= data->profBonus;
        ui->savingThrowWisdomSpinBox->setValue(data->savingThrows.Wisdom + arg1);
    }
    if(ui->savingThrowCharismaRadioButton->isChecked())
    {
        data->savingThrows.Charisma -= data->profBonus;
        ui->savingThrowCharismaSpinBox->setValue(data->savingThrows.Charisma + arg1);
    }

    // Skills
    if(ui->skillAcrobaticsRadioButton->isChecked())
    {
        data->skills.Acrobatics -= data->profBonus;
        ui->skillAcrobaticsSpinBox->setValue(data->skills.Acrobatics + arg1);
    }
    if(ui->skillAnimalHandlingRadioButton->isChecked())
    {
        data->skills.AnimalHandling -= data->profBonus;
        ui->skillAnimalHandlingSpinBox->setValue(data->skills.AnimalHandling + arg1);
    }
    if(ui->skillArcanaRadioButton->isChecked())
    {
        data->skills.Arcana -= data->profBonus;
        ui->skillArcanaSpinBox->setValue(data->skills.Arcana + arg1);
    }
    if(ui->skillAthleticsRadioButton->isChecked())
    {
        data->skills.Athletics -= data->profBonus;
        ui->skillAthleticsSpinBox->setValue(data->skills.Athletics + arg1);
    }
    if(ui->skillDeceptionRadioButton->isChecked())
    {
        data->skills.Deception -= data->profBonus;
        ui->skillDeceptionSpinBox->setValue(data->skills.Deception + arg1);
    }
    if(ui->skillHistoryRadioButton->isChecked())
    {
        data->skills.History -= data->profBonus;
        ui->skillHistorySpinBox->setValue(data->skills.History + arg1);
    }
    if(ui->skillInsightRadioButton->isChecked())
    {
        data->skills.Insight -= data->profBonus;
        ui->skillInsightSpinBox->setValue(data->skills.Insight + arg1);
    }
    if(ui->skillIntimidationRadioButton->isChecked())
    {
        data->skills.Intimidation -= data->profBonus;
        ui->skillIntimidationSpinBox->setValue(data->skills.Intimidation + arg1);
    }
    if(ui->skillInvestigationRadioButton->isChecked())
    {
        data->skills.Investigation -= data->profBonus;
        ui->skillInvestigationSpinBox->setValue(data->skills.Investigation + arg1);
    }
    if(ui->skillMedicineRadioButton->isChecked())
    {
        data->skills.Medicine -= data->profBonus;
        ui->skillMedicineSpinBox->setValue(data->skills.Medicine + arg1);
    }
    if(ui->skillNatureRadioButton->isChecked())
    {
        data->skills.Nature -= data->profBonus;
        ui->skillNatureSpinBox->setValue(data->skills.Nature + arg1);
    }
    if(ui->skillPerceptionRadioButton->isChecked())
    {
        data->skills.Perception -= data->profBonus;
        ui->skillPerceptionSpinBox->setValue(data->skills.Perception + arg1);
    }
    if(ui->skillPerformanceRadioButton->isChecked())
    {
        data->skills.Performance -= data->profBonus;
        ui->skillPerformanceSpinBox->setValue(data->skills.Performance + arg1);
    }
    if(ui->skillPersuasionRadioButton->isChecked())
    {
        data->skills.Persuasion -= data->profBonus;
        ui->skillPersuasionSpinBox->setValue(data->skills.Persuasion + arg1);
    }
    if(ui->skillReligionRadioButton->isChecked())
    {
        data->skills.Religion -= data->profBonus;
        ui->skillReligionSpinBox->setValue(data->skills.Religion + arg1);
    }
    if(ui->skillSleightOfHandRadioButton->isChecked())
    {
        data->skills.SleightOfHand -= data->profBonus;
        ui->skillSleightOfHandSpinBox->setValue(data->skills.SleightOfHand + arg1);
    }
    if(ui->skillStealthRadioButton->isChecked())
    {
        data->skills.Stealth -= data->profBonus;
        ui->skillStealthSpinBox->setValue(data->skills.Stealth + arg1);
    }
    if(ui->skillSurvivalRadioButton->isChecked())
    {
        data->skills.Survival -= data->profBonus;
        ui->skillSurvivalSpinBox->setValue(data->skills.Survival + arg1);
    }

    data->profBonus = arg1;
}


// Characteristics NumberEditLines
void CharacterSheet::on_strengthLineEdit_editingFinished()
{
    ui->strengthLineEdit->home(false);
    ui->strengthLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->strengthLineEdit->text()).toInt(&ok);
    if(ok) data->strength.Value = value;
    else
    {
        ui->strengthLineEdit->setText("0");
        data->strength.Value = 0;
    }
}

void CharacterSheet::on_dexterityLineEdit_editingFinished()
{
    ui->dexterityLineEdit->home(false);
    ui->dexterityLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->dexterityLineEdit->text()).toInt(&ok);
    if(ok) data->dexterity.Value = value;
    else
    {
        ui->dexterityLineEdit->setText("0");
        data->dexterity.Value = 0;
    }
}

void CharacterSheet::on_constitutionLineEdit_editingFinished()
{
    ui->constitutionLineEdit->home(false);
    ui->constitutionLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->constitutionLineEdit->text()).toInt(&ok);
    if(ok) data->constitution.Value = value;
    else
    {
        ui->constitutionLineEdit->setText("0");
        data->constitution.Value = 0;
    }
}

void CharacterSheet::on_intelligenceLineEdit_editingFinished()
{
    ui->intelligenceLineEdit->home(false);
    ui->intelligenceLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->intelligenceLineEdit->text()).toInt(&ok);
    if(ok) data->intelligence.Value = value;
    else
    {
        ui->intelligenceLineEdit->setText("0");
        data->intelligence.Value = 0;
    }
}

void CharacterSheet::on_wisdomLineEdit_editingFinished()
{
    ui->wisdomLineEdit->home(false);
    ui->wisdomLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->wisdomLineEdit->text()).toInt(&ok);
    if(ok) data->wisdom.Value = value;
    else
    {
        ui->wisdomLineEdit->setText("0");
        data->wisdom.Value = 0;
    }
}

void CharacterSheet::on_charismaLineEdit_editingFinished()
{
    ui->charismaLineEdit->home(false);
    ui->charismaLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->charismaLineEdit->text()).toInt(&ok);
    if(ok) data->charisma.Value = value;
    else
    {
        ui->charismaLineEdit->setText("0");
        data->charisma.Value = 0;
    }
}

void CharacterSheet::on_passiveWisdomLineEdit_editingFinished()
{
    ui->passiveWisdomLineEdit->home(false);
    ui->passiveWisdomLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->passiveWisdomLineEdit->text()).toInt(&ok);
    if(ok) data->passiveWisdom = value;
    else
    {
        ui->passiveWisdomLineEdit->setText("0");
        data->passiveWisdom = 0;
    }
}

void CharacterSheet::on_inspirationLineEdit_editingFinished()
{
    ui->inspirationLineEdit->home(false);
    ui->inspirationLineEdit->clearFocus();
    bool ok;
    int value = QString(ui->inspirationLineEdit->text()).toInt(&ok);
    if(ok) data->inspiration = value;
    else
    {
        ui->inspirationLineEdit->setText("0");
        data->inspiration = 0;
    }
}


// Attacks and spellcasts
void CharacterSheet::on_attack1NameLineEdit_editingFinished()
{
    ui->attack1NameLineEdit->home(false);
    ui->attack1NameLineEdit->clearFocus();
    data->attack1.AttackName = ui->attack1NameLineEdit->text();
}

void CharacterSheet::on_attack2NameLineEdit_editingFinished()
{
    ui->attack2NameLineEdit->home(false);
    ui->attack2NameLineEdit->clearFocus();
    data->attack2.AttackName = ui->attack2NameLineEdit->text();
}

void CharacterSheet::on_attack3NameLineEdit_editingFinished()
{
    ui->attack3NameLineEdit->home(false);
    ui->attack3NameLineEdit->clearFocus();
    data->attack3.AttackName = ui->attack3NameLineEdit->text();
}

void CharacterSheet::on_attack1DamageTypeLineEdit_editingFinished()
{
    ui->attack1DamageTypeLineEdit->home(false);
    ui->attack1DamageTypeLineEdit->clearFocus();
    data->attack1.DamageType = ui->attack1DamageTypeLineEdit->text();
}

void CharacterSheet::on_attack2DamageTypeLineEdit_editingFinished()
{
    ui->attack2DamageTypeLineEdit->home(false);
    ui->attack2DamageTypeLineEdit->clearFocus();
    data->attack2.DamageType = ui->attack2DamageTypeLineEdit->text();
}

void CharacterSheet::on_attack3DamageTypeLineEdit_editingFinished()
{
    ui->attack3DamageTypeLineEdit->home(false);
    ui->attack3DamageTypeLineEdit->clearFocus();
    data->attack3.DamageType = ui->attack3DamageTypeLineEdit->text();
}

void CharacterSheet::on_attack1BonusSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->attack1BonusSpinBox->setPrefix("+");
    else ui->attack1BonusSpinBox->setPrefix("");
    data->attack1.AttackBonus = arg1;
}

void CharacterSheet::on_attack2BonusSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->attack2BonusSpinBox->setPrefix("+");
    else ui->attack2BonusSpinBox->setPrefix("");
    data->attack2.AttackBonus = arg1;
}

void CharacterSheet::on_attack3BonusSpinBox_valueChanged(int arg1)
{
    if(arg1 > 0) ui->attack3BonusSpinBox->setPrefix("+");
    else ui->attack3BonusSpinBox->setPrefix("");
    data->attack3.AttackBonus = arg1;
}


// PlainTextEdit
bool CharacterSheet::eventFilter(QObject *object, QEvent *event)
{
    if(object == ui->profLangEdit && event->type() == QEvent::FocusOut)
    {
        ui->profLangEdit->moveCursor(QTextCursor::Start);
        data->otherProfAndLanguages = ui->profLangEdit->toPlainText();
     }

    if(object == ui->attackAndSpellEdit && event->type() == QEvent::FocusOut)
    {
        ui->attackAndSpellEdit->moveCursor(QTextCursor::Start);
        data->otherAttacksSpellcasts = ui->attackAndSpellEdit->toPlainText();
     }

    if(object == ui->equipmentEdit && event->type() == QEvent::FocusOut)
    {
        ui->equipmentEdit->moveCursor(QTextCursor::Start);
        data->equipment = ui->equipmentEdit->toPlainText();
     }

    if(object == ui->personalityTraitsEdit && event->type() == QEvent::FocusOut)
    {
        ui->personalityTraitsEdit->moveCursor(QTextCursor::Start);
        data->personalTraits = ui->personalityTraitsEdit->toPlainText();
     }

    if(object == ui->idealsEdit && event->type() == QEvent::FocusOut)
    {
        ui->idealsEdit->moveCursor(QTextCursor::Start);
        data->ideals = ui->idealsEdit->toPlainText();
     }

    if(object == ui->bondsEdit && event->type() == QEvent::FocusOut)
    {
        ui->bondsEdit->moveCursor(QTextCursor::Start);
        data->bonds = ui->bondsEdit->toPlainText();
     }

    if(object == ui->flawsEdit && event->type() == QEvent::FocusOut)
    {
        ui->flawsEdit->moveCursor(QTextCursor::Start);
        data->flaws = ui->flawsEdit->toPlainText();
     }

    if(object == ui->featuresTraitsEdit && event->type() == QEvent::FocusOut)
    {
        ui->featuresTraitsEdit->moveCursor(QTextCursor::Start);
        data->featuresTraits = ui->featuresTraitsEdit->toPlainText();
     }

    if(event->type() == QEvent::Wheel && qobject_cast<QAbstractSpinBox*>(object))
    {
        event->ignore();
        return true;
    }

    return QWidget::eventFilter(object, event);
}

void CharacterSheet::on_savingThrowStrengthRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowStrengthSpinBox->setValue(data->savingThrows.Strength + data->profBonus);
        data->profBonusSet.Strength = true;
    }
    else
    {
        ui->savingThrowStrengthSpinBox->setValue(data->savingThrows.Strength - data->profBonus);
        data->profBonusSet.Strength = false;
    }
}


void CharacterSheet::on_savingThrowDexterityRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowDexteritySpinBox->setValue(data->savingThrows.Dexterity + data->profBonus);
        data->profBonusSet.Dexterity = true;
    }
    else
    {
        ui->savingThrowDexteritySpinBox->setValue(data->savingThrows.Dexterity - data->profBonus);
        data->profBonusSet.Dexterity = false;
    }
}


void CharacterSheet::on_savingThrowConstitutionRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowConstitutionSpinBox->setValue(data->savingThrows.Constitution + data->profBonus);
        data->profBonusSet.Constitution = true;
    }
    else
    {
        ui->savingThrowConstitutionSpinBox->setValue(data->savingThrows.Constitution - data->profBonus);
        data->profBonusSet.Constitution = false;
    }
}


void CharacterSheet::on_savingThrowIntelligenceRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowIntelligenceSpinBox->setValue(data->savingThrows.Intelligence + data->profBonus);
        data->profBonusSet.Intelligence = true;
    }
    else
    {
        ui->savingThrowIntelligenceSpinBox->setValue(data->savingThrows.Intelligence - data->profBonus);
        data->profBonusSet.Intelligence = false;
    }
}


void CharacterSheet::on_savingThrowWisdomRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowWisdomSpinBox->setValue(data->savingThrows.Wisdom + data->profBonus);
        data->profBonusSet.Wisdom = true;
    }
    else
    {
        ui->savingThrowWisdomSpinBox->setValue(data->savingThrows.Wisdom - data->profBonus);
        data->profBonusSet.Wisdom = false;
    }
}


void CharacterSheet::on_savingThrowCharismaRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->savingThrowCharismaSpinBox->setValue(data->savingThrows.Charisma + data->profBonus);
        data->profBonusSet.Charisma = true;
    }
    else
    {
        ui->savingThrowCharismaSpinBox->setValue(data->savingThrows.Charisma - data->profBonus);
        data->profBonusSet.Charisma = false;
    }
}


void CharacterSheet::on_skillAcrobaticsRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillAcrobaticsSpinBox->setValue(data->skills.Acrobatics + data->profBonus);
        data->profBonusSet.Acrobatics = true;
    }
    else
    {
        ui->skillAcrobaticsSpinBox->setValue(data->skills.Acrobatics - data->profBonus);
        data->profBonusSet.Acrobatics = false;
    }
}


void CharacterSheet::on_skillAnimalHandlingRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillAnimalHandlingSpinBox->setValue(data->skills.AnimalHandling + data->profBonus);
        data->profBonusSet.AnimalHandling = true;
    }
    else
    {
        ui->skillAnimalHandlingSpinBox->setValue(data->skills.AnimalHandling - data->profBonus);
        data->profBonusSet.AnimalHandling = false;
    }
}


void CharacterSheet::on_skillArcanaRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillArcanaSpinBox->setValue(data->skills.Arcana + data->profBonus);
        data->profBonusSet.Arcana = true;
    }
    else
    {
        ui->skillArcanaSpinBox->setValue(data->skills.Arcana - data->profBonus);
        data->profBonusSet.Arcana = false;
    }
}


void CharacterSheet::on_skillAthleticsRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillAthleticsSpinBox->setValue(data->skills.Athletics + data->profBonus);
        data->profBonusSet.Athletics = true;
    }
    else
    {
        ui->skillAthleticsSpinBox->setValue(data->skills.Athletics - data->profBonus);
        data->profBonusSet.Athletics = false;
    }
}


void CharacterSheet::on_skillDeceptionRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillDeceptionSpinBox->setValue(data->skills.Deception + data->profBonus);
        data->profBonusSet.Deception = true;
    }
    else
    {
        ui->skillDeceptionSpinBox->setValue(data->skills.Deception - data->profBonus);
        data->profBonusSet.Deception = false;
    }
}


void CharacterSheet::on_skillHistoryRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillHistorySpinBox->setValue(data->skills.History + data->profBonus);
        data->profBonusSet.History = true;
    }
    else
    {
        ui->skillHistorySpinBox->setValue(data->skills.History - data->profBonus);
        data->profBonusSet.History = false;
    }
}


void CharacterSheet::on_skillInsightRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillInsightSpinBox->setValue(data->skills.Insight + data->profBonus);
        data->profBonusSet.Insight = true;
    }
    else
    {
        ui->skillInsightSpinBox->setValue(data->skills.Insight - data->profBonus);
        data->profBonusSet.Insight = false;
    }
}


void CharacterSheet::on_skillIntimidationRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillIntimidationSpinBox->setValue(data->skills.Intimidation + data->profBonus);
        data->profBonusSet.Intimidation = true;
    }
    else
    {
        ui->skillIntimidationSpinBox->setValue(data->skills.Intimidation - data->profBonus);
        data->profBonusSet.Intimidation = false;
    }
}


void CharacterSheet::on_skillInvestigationRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillInvestigationSpinBox->setValue(data->skills.Investigation + data->profBonus);
        data->profBonusSet.Investigation = true;
    }
    else
    {
        ui->skillInvestigationSpinBox->setValue(data->skills.Investigation - data->profBonus);
        data->profBonusSet.Investigation = false;
    }
}


void CharacterSheet::on_skillMedicineRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillMedicineSpinBox->setValue(data->skills.Medicine + data->profBonus);
        data->profBonusSet.Medicine = true;
    }
    else
    {
        ui->skillMedicineSpinBox->setValue(data->skills.Medicine - data->profBonus);
        data->profBonusSet.Medicine = false;
    }
}


void CharacterSheet::on_skillNatureRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillNatureSpinBox->setValue(data->skills.Nature + data->profBonus);
        data->profBonusSet.Nature = true;
    }
    else
    {
        ui->skillNatureSpinBox->setValue(data->skills.Nature - data->profBonus);
        data->profBonusSet.Nature = false;
    }
}


void CharacterSheet::on_skillPerceptionRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillPerceptionSpinBox->setValue(data->skills.Perception + data->profBonus);
        data->profBonusSet.Perception = true;
    }
    else
    {
        ui->skillPerceptionSpinBox->setValue(data->skills.Perception - data->profBonus);
        data->profBonusSet.Perception = false;
    }
}


void CharacterSheet::on_skillPerformanceRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillPerformanceSpinBox->setValue(data->skills.Performance + data->profBonus);
        data->profBonusSet.Performance = true;
    }
    else
    {
        ui->skillPerformanceSpinBox->setValue(data->skills.Performance - data->profBonus);
        data->profBonusSet.Performance = false;
    }
}


void CharacterSheet::on_skillPersuasionRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillPersuasionSpinBox->setValue(data->skills.Persuasion + data->profBonus);
        data->profBonusSet.Persuasion = true;
    }
    else
    {
        ui->skillPersuasionSpinBox->setValue(data->skills.Persuasion - data->profBonus);
        data->profBonusSet.Persuasion = false;
    }
}


void CharacterSheet::on_skillReligionRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillReligionSpinBox->setValue(data->skills.Religion + data->profBonus);
        data->profBonusSet.Religion = true;
    }
    else
    {
        ui->skillReligionSpinBox->setValue(data->skills.Religion - data->profBonus);
        data->profBonusSet.Religion = false;
    }
}


void CharacterSheet::on_skillSleightOfHandRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillSleightOfHandSpinBox->setValue(data->skills.SleightOfHand + data->profBonus);
        data->profBonusSet.SleightOfHand = true;
    }
    else
    {
        ui->skillSleightOfHandSpinBox->setValue(data->skills.SleightOfHand - data->profBonus);
        data->profBonusSet.SleightOfHand = false;
    }
}


void CharacterSheet::on_skillStealthRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillStealthSpinBox->setValue(data->skills.Stealth + data->profBonus);
        data->profBonusSet.Stealth = true;
    }
    else
    {
        ui->skillStealthSpinBox->setValue(data->skills.Stealth - data->profBonus);
        data->profBonusSet.Stealth = false;
    }
}


void CharacterSheet::on_skillSurvivalRadioButton_clicked(bool checked)
{
    if(checked)
    {
        ui->skillSurvivalSpinBox->setValue(data->skills.Survival + data->profBonus);
        data->profBonusSet.Survival = true;
    }
    else
    {
        ui->skillSurvivalSpinBox->setValue(data->skills.Survival - data->profBonus);
        data->profBonusSet.Survival = false;
    }
}

void CharacterSheet::on_success1RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Successes++;
    else data->deathSaves.Successes--;
}


void CharacterSheet::on_success2RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Successes++;
    else data->deathSaves.Successes--;
}


void CharacterSheet::on_success3RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Successes++;
    else data->deathSaves.Successes--;
}


void CharacterSheet::on_failur1RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Failures++;
    else data->deathSaves.Failures--;
}


void CharacterSheet::on_failur2RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Failures++;
    else data->deathSaves.Failures--;
}


void CharacterSheet::on_failur3RadioButton_clicked(bool checked)
{
    if(checked) data->deathSaves.Failures++;
    else data->deathSaves.Failures--;
}
