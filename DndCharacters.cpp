#include "DndCharacters.h"
#include "ui_DndCharacters.h"

DndCharacters::DndCharacters(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DndCharacters)
{
    ui->setupUi(this);
    addNewCharacterSheet();
}

DndCharacters::~DndCharacters()
{
    delete ui;
}

// Слот установки нового наименования вкладки при смене имени персонажа (сигнал newNameEdited() в CharacterSheet)
void DndCharacters::setTabTitle()
{
    int i = ui->tabWidget->currentIndex();
    QString newTabTitle = replaceSameTitle(i, charactersVector[i]->charName); // Проверка наименования новой вкладки на уникальность
    ui->tabWidget->setTabText(i, newTabTitle);
}

// Функция добавления нового листа персонажа
void DndCharacters::addNewCharacterSheet()
{
    CharacterData *newCharacter = new CharacterData(); // Новый персонаж (данные)
    CharacterSheet *newTab = new CharacterSheet(newCharacter, this); // Новый лист персонажа (вкладка в QTabWidget)

    int newCharacterIndex = charactersVector.count(); // Порядковый номер нового персонажа
    charactersVector.append(newCharacter); // Добавление нового персонажа в вектор

    QString newTabTitle = replaceSameTitle(newCharacterIndex, QString("New character %1").arg(newCharacterIndex)); // Установка уникального наименования новой вкладки

    ui->tabWidget->addTab(newTab, newTabTitle); // Добавление новой вкладки в QTabWidget
    ui->tabWidget->setCurrentWidget(newTab); // Переключение на новую вкладку

    connect(newTab, SIGNAL(newNameEdited()), this, SLOT(setTabTitle())); // Подключение сигнала поля ввода имени персонажа (в CharacterSheet) со слотом установки нового наименования вкладки (в этом классе)
}

// Функция устранения повторяющихся названий вкладок QTabWidget
QString DndCharacters::replaceSameTitle(int index, const QString& offeredTitle)
{
    ui->actionAddCharacter->setEnabled(false); // Отключение возможности добавления и удаления персонажей
    ui->actionDeleteCharacter->setEnabled(false); // на время работы цикла

    QString tmpTabTitle = offeredTitle;
    int countTabs = ui->tabWidget->count();
    if((countTabs > 1))
    {
        int count = 0;
        int i = 0;
        while(i < countTabs)
        {
            if((i != index) && (ui->tabWidget->tabText(i) == tmpTabTitle))
            {
                i = 0;
                count++;
                tmpTabTitle = offeredTitle + QString("_%1").arg(count);
            }
            else i++;
        }
    }

    ui->actionAddCharacter->setEnabled(true);
    ui->actionDeleteCharacter->setEnabled(true);

    return tmpTabTitle;
}

// Функция удаления текущего листа персонажа
void DndCharacters::deleteCharacterSheet()
{
    ui->actionAddCharacter->setEnabled(false); // Отключение возможности добавления и удаления персонажей
    ui->actionDeleteCharacter->setEnabled(false); // на время работы цикла

    int i = ui->tabWidget->currentIndex();
    if(i < 0)
    {
        QMessageBox::information(0, "Information", "There is no characters!");
    }
    else
    {

        int n = QMessageBox::warning(this,
                                     "Confirm delete",
                                     QString("Are you shure you want to delete %1?").arg(ui->tabWidget->tabText(i)),
                                     "Delete",
                                     "Cancel",
                                     QString(),
                                     0,
                                     1);
        if(!n)
        {
            delete ui->tabWidget->widget(i);
            charactersVector.remove(i);
        }
    }
    ui->actionAddCharacter->setEnabled(true);
    ui->actionDeleteCharacter->setEnabled(true);
}

void DndCharacters::dataConversion(QJsonObject& jsonParams, CharacterData& character)
{
    jsonParams.insert("charName", character.charName);
    jsonParams.insert("charClassLevel", character.charClassLevel);
    jsonParams.insert("charRace", character.charRace);
    jsonParams.insert("charBackground", character.charBackground);
    jsonParams.insert("charAlignment", character.charAlignment);
    jsonParams.insert("playerName", character.playerName);
    jsonParams.insert("expPoints", character.expPoints);

    QJsonObject strength;
    strength.insert("Value", character.strength.Value);
    strength.insert("Modifier", character.strength.Modifier);
    jsonParams.insert("strength", strength);

    QJsonObject dexterity;
    dexterity.insert("Value", character.dexterity.Value);
    dexterity.insert("Modifier", character.dexterity.Modifier);
    jsonParams.insert("dexterity", dexterity);

    QJsonObject constitution;
    constitution.insert("Value", character.constitution.Value);
    constitution.insert("Modifier", character.constitution.Modifier);
    jsonParams.insert("constitution", constitution);

    QJsonObject intelligence;
    intelligence.insert("Value", character.intelligence.Value);
    intelligence.insert("Modifier", character.intelligence.Modifier);
    jsonParams.insert("intelligence", intelligence);

    QJsonObject wisdom;
    wisdom.insert("Value", character.wisdom.Value);
    wisdom.insert("Modifier", character.wisdom.Modifier);
    jsonParams.insert("wisdom", wisdom);

    QJsonObject charisma;
    charisma.insert("Value", character.charisma.Value);
    charisma.insert("Modifier", character.charisma.Modifier);
    jsonParams.insert("charisma", charisma);

    jsonParams.insert("inspiration", character.inspiration);
    jsonParams.insert("profBonus", character.profBonus);

    QJsonObject profBonusSet;
    profBonusSet.insert("Strength", character.profBonusSet.Strength);
    profBonusSet.insert("Dexterity", character.profBonusSet.Dexterity);
    profBonusSet.insert("Constitution", character.profBonusSet.Constitution);
    profBonusSet.insert("Intelligence", character.profBonusSet.Intelligence);
    profBonusSet.insert("Wisdom", character.profBonusSet.Wisdom);
    profBonusSet.insert("Charisma", character.profBonusSet.Charisma);
    profBonusSet.insert("Acrobatics", character.profBonusSet.Acrobatics);
    profBonusSet.insert("AnimalHandling", character.profBonusSet.AnimalHandling);
    profBonusSet.insert("Arcana", character.profBonusSet.Arcana);
    profBonusSet.insert("Athletics", character.profBonusSet.Athletics);
    profBonusSet.insert("Deception", character.profBonusSet.Deception);
    profBonusSet.insert("History", character.profBonusSet.History);
    profBonusSet.insert("Insight", character.profBonusSet.Insight);
    profBonusSet.insert("Intimidation", character.profBonusSet.Intimidation);
    profBonusSet.insert("Investigation", character.profBonusSet.Investigation);
    profBonusSet.insert("Medicine", character.profBonusSet.Medicine);
    profBonusSet.insert("Nature", character.profBonusSet.Nature);
    profBonusSet.insert("Perception", character.profBonusSet.Perception);
    profBonusSet.insert("Performance", character.profBonusSet.Performance);
    profBonusSet.insert("Persuasion", character.profBonusSet.Persuasion);
    profBonusSet.insert("Religion", character.profBonusSet.Religion);
    profBonusSet.insert("SleightOfHand", character.profBonusSet.SleightOfHand);
    profBonusSet.insert("Stealth", character.profBonusSet.Stealth);
    profBonusSet.insert("Survival", character.profBonusSet.Survival);
    jsonParams.insert("profBonusSet", profBonusSet);

    QJsonObject savingThrows;
    savingThrows.insert("Strength", character.savingThrows.Strength);
    savingThrows.insert("Dexterity", character.savingThrows.Dexterity);
    savingThrows.insert("Constitution", character.savingThrows.Constitution);
    savingThrows.insert("Intelligence", character.savingThrows.Intelligence);
    savingThrows.insert("Wisdom", character.savingThrows.Wisdom);
    savingThrows.insert("Charisma", character.savingThrows.Charisma);
    jsonParams.insert("savingThrows", savingThrows);

    QJsonObject skills;
    skills.insert("Acrobatics", character.skills.Acrobatics);
    skills.insert("AnimalHandling", character.skills.AnimalHandling);
    skills.insert("Arcana", character.skills.Arcana);
    skills.insert("Athletics", character.skills.Athletics);
    skills.insert("Deception", character.skills.Deception);
    skills.insert("History", character.skills.History);
    skills.insert("Insight", character.skills.Insight);
    skills.insert("Intimidation", character.skills.Intimidation);
    skills.insert("Investigation", character.skills.Investigation);
    skills.insert("Medicine", character.skills.Medicine);
    skills.insert("Nature", character.skills.Nature);
    skills.insert("Perception", character.skills.Perception);
    skills.insert("Performance", character.skills.Performance);
    skills.insert("Persuasion", character.skills.Persuasion);
    skills.insert("Religion", character.skills.Religion);
    skills.insert("SleightOfHand", character.skills.SleightOfHand);
    skills.insert("Stealth", character.skills.Stealth);
    skills.insert("Survival", character.skills.Survival);
    jsonParams.insert("skills", skills);

    jsonParams.insert("passiveWisdom", character.passiveWisdom);
    jsonParams.insert("otherProfAndLanguages", character.otherProfAndLanguages);
    jsonParams.insert("armorClass", character.armorClass);
    jsonParams.insert("initiative", character.initiative);

    QJsonObject speed;
    speed.insert("Value", character.speed.Value);
    speed.insert("Units", character.speed.Units);
    jsonParams.insert("speed", speed);

    QJsonObject hitPoints;
    hitPoints.insert("Maximum", character.hitPoints.Maximum);
    hitPoints.insert("Current", character.hitPoints.Current);
    hitPoints.insert("Temporary", character.hitPoints.Temporary);
    jsonParams.insert("hitPoints", hitPoints);

    QJsonObject hitDice;
    hitDice.insert("Current", character.hitDice.Current);
    hitDice.insert("Total", character.hitDice.Total);
    jsonParams.insert("hitDice", hitDice);

    QJsonObject deathSaves;
    deathSaves.insert("Successes", character.deathSaves.Successes);
    deathSaves.insert("Failures", character.deathSaves.Failures);
    jsonParams.insert("deathSaves", deathSaves);

    QJsonObject attack1;
    attack1.insert("AttackName", character.attack1.AttackName);
    attack1.insert("AttackBonus", character.attack1.AttackBonus);
    attack1.insert("DamageType", character.attack1.DamageType);
    jsonParams.insert("attack1", attack1);

    QJsonObject attack2;
    attack2.insert("AttackName", character.attack2.AttackName);
    attack2.insert("AttackBonus", character.attack2.AttackBonus);
    attack2.insert("DamageType", character.attack2.DamageType);
    jsonParams.insert("attack2", attack2);

    QJsonObject attack3;
    attack3.insert("AttackName", character.attack3.AttackName);
    attack3.insert("AttackBonus", character.attack3.AttackBonus);
    attack3.insert("DamageType", character.attack3.DamageType);
    jsonParams.insert("attack3", attack3);

    jsonParams.insert("otherAttacksSpellcasts", character.otherAttacksSpellcasts);
    jsonParams.insert("personalTraits", character.personalTraits);
    jsonParams.insert("ideals", character.ideals);
    jsonParams.insert("bonds", character.bonds);
    jsonParams.insert("flaws", character.flaws);
    jsonParams.insert("equipment", character.equipment);

    QJsonObject coins;
    coins.insert("CopperPieces", character.coins.CopperPieces);
    coins.insert("SilverPieces", character.coins.SilverPieces);
    coins.insert("ElectrumPieces", character.coins.ElectrumPieces);
    coins.insert("GoldPieces", character.coins.GoldPieces);
    coins.insert("PlatinumPieces", character.coins.PlatinumPieces);
    jsonParams.insert("coins", coins);

    jsonParams.insert("featuresTraits", character.featuresTraits);
}

void DndCharacters::saveCatalog(bool saveAs)
{
    if(saveAs || currentFilename == "")
    {
        // Диалоговое окно
        QString filename = QFileDialog::getSaveFileName(this,
                                                        "Save file",
                                                        "MyCharacters.json",
                                                        "*.json");
        if(filename != "")currentFilename = filename;
    }
    if(currentFilename != "")
    {
        QJsonArray jsonArray;
        foreach (CharacterData *character, charactersVector)
        {
            QJsonObject jsonObject;
            dataConversion(jsonObject, *character);
            jsonArray.append(jsonObject);
        }

        // Запись данных в файл
        QJsonDocument jsonDocument(jsonArray);
        QByteArray byteArray = jsonDocument.toJson(QJsonDocument::Indented); // Преобразование JSON объекта в байтовый массив
        QFile file(currentFilename);
        if(file.open(QIODevice::WriteOnly)) file.write(byteArray);
        //QTextStream stream(&file);
        //stream << jsonDocument.toJson();
        file.close();
    }
}

void DndCharacters::openCharacterSheet(QJsonObject& jsonObject)
{
    CharacterData *newCharacter = new CharacterData(jsonObject); // Новый персонаж (данные)
    CharacterSheet *newTab = new CharacterSheet(newCharacter, this); // Новый лист персонажа со значениями из json

    int newCharacterIndex = charactersVector.count(); // Порядковый номер нового персонажа
    charactersVector.append(newCharacter); // Добавление нового персонажа в вектор

    QString newTabTitle = replaceSameTitle(newCharacterIndex, newCharacter->charName); // Установка уникального наименования новой вкладки

    ui->tabWidget->addTab(newTab, newTabTitle); // Добавление новой вкладки в QTabWidget
    ui->tabWidget->setCurrentWidget(newTab); // Переключение на новую вкладку

    connect(newTab, SIGNAL(newNameEdited()), this, SLOT(setTabTitle())); // Подключение сигнала поля ввода имени персонажа (в CharacterSheet) со слотом установки нового наименования вкладки (в этом классе)
}

void DndCharacters::deleteAllCharacterSheets()
{
    int last = ui->tabWidget->count();
    for(int i = last - 1; i >= 0; --i)
    {
        delete ui->tabWidget->widget(i);
        charactersVector.remove(i);
    }
}

void DndCharacters::openJsonFile()
{
    // Диалоговое окно
    QString filename = QFileDialog::getOpenFileName(this,
                                                    "Open file",
                                                    "",
                                                    "*.json");
    if(filename != "")
    {
        currentFilename = filename;
        deleteAllCharacterSheets(); // Удаление всех текущих листов персонажа

        QFile file(filename);
        QByteArray byteArray; // Байтовый массив для JSON объекта
        if(file.open(QIODevice::ReadOnly)) byteArray = file.readAll();
        file.close();

        QJsonArray jsonArray = QJsonDocument::fromJson((byteArray)).array();
        foreach (QJsonValue jsonValue, jsonArray)
        {
            QJsonObject jsonObject = jsonValue.toObject();
            openCharacterSheet(jsonObject);
        }
    }
}

void DndCharacters::newCatalog()
{
    if(currentFilename == "")
    {
        QMessageBox* pmbx = new QMessageBox("New catalog",
                            "Save current catalog?",
                            QMessageBox::Warning,
                            QMessageBox::Yes,
                            QMessageBox::No,
                            QMessageBox::Cancel | QMessageBox::Escape);
        int n = pmbx->exec();
        delete pmbx;
        if(n == QMessageBox::Yes)
        {
            saveCatalog(true);
            if(currentFilename != "")
            {
                currentFilename = "";
                deleteAllCharacterSheets();
                addNewCharacterSheet();
            }
        }
        else if(n == QMessageBox::No)
        {
            currentFilename = "";
            deleteAllCharacterSheets();
            addNewCharacterSheet();
        }
    }
    else
    {
        saveCatalog();
        currentFilename = "";
        deleteAllCharacterSheets();
        addNewCharacterSheet();
    }
}

void DndCharacters::openCatalog()
{
    if(currentFilename == "")
    {
        QMessageBox* pmbx = new QMessageBox("Open catalog",
                            "Save current catalog?",
                            QMessageBox::Warning,
                            QMessageBox::Yes,
                            QMessageBox::No,
                            QMessageBox::Cancel | QMessageBox::Escape);
        int n = pmbx->exec();
        delete pmbx;
        if(n == QMessageBox::Yes)
        {
            saveCatalog(true);
            if(currentFilename != "") openJsonFile();
        }
        else if(n == QMessageBox::No) openJsonFile();
    }
    else
    {
        saveCatalog();
        openJsonFile();
    }
}

void DndCharacters::exitProgram()
{
    if(currentFilename == "")
    {
        QMessageBox* pmbx = new QMessageBox("Exit",
                            "Save current catalog?",
                            QMessageBox::Warning,
                            QMessageBox::Yes,
                            QMessageBox::No,
                            QMessageBox::Cancel | QMessageBox::Escape);
        int n = pmbx->exec();
        delete pmbx;
        if(n == QMessageBox::Yes)
        {
            saveCatalog(true);
            if(currentFilename != "") QApplication::quit();
        }
        else if(n == QMessageBox::No) QApplication::quit();
    }
    else
    {
        saveCatalog();
        QApplication::quit();
    }
}

void DndCharacters::on_menuFile_triggered(QAction *action)
{
    QString menuItem = action->objectName();
    if(menuItem == "actionAddCharacter")
    {
        addNewCharacterSheet();
    }
    else if(menuItem == "actionDeleteCharacter")
    {
        deleteCharacterSheet();
    }
    else if (menuItem == "actionNewCatalog")
    {
        newCatalog();
    }
    else if(menuItem == "actionOpen")
    {   
        openCatalog();
    }
    else if(menuItem == "actionSaveAs")
    {
        saveCatalog(true);
    }
    else if(menuItem == "actionSave")
    {
        saveCatalog();
    }
    else if(menuItem == "actionAbout")
    {
        QString messAbout = "<p align=\"left\">Программа для создания и сохранения листов персонажей, используемых в настольной ролевой игре \"Подземелья и драконы\".\n"
                            "Разработана в рамках обучения С++ с целью подтверждения полученных знаний.</p>"
                            "<p align=\"left\">Разработал <i>Казаков Д.А.</i></p>"
                            "<p>MAIL: <i>daniilkazakov27@mail.ru</i></p>"
                            "<p>GMAIL: <i>daniilkazakoff@gmail.com</i></p>";

        QMessageBox::about(this, "About program", messAbout);
    }
    else if(menuItem == "actionExit")
    {
        exitProgram();
    }
}

// Бросок кубика (d4, d6, d8, d10, d12, d20 или d100)
void DndCharacters::on_menuDice_triggered(QAction *action)
{
    DiceThrow *dice = new DiceThrow(action->objectName());
    dice->exec();
    delete dice;
}
