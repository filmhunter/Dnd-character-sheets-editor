#ifndef CHARACTERDATA_H
#define CHARACTERDATA_H

#include <QString>
#include <QJsonObject>

class CharacterData
{
protected:
    // Лист 1
    QString charName{"New character"};
    QString charClassLevel{""};
    QString charRace{""};
    QString charBackground{""}; // Предыстория
    QString charAlignment{""}; // Мировоззрение
    QString playerName{""};
    int expPoints{0}; // Очки опыта

    // Базовые характеристики: сила, ловкость, телосложение, интеллект, мудрость, харизма
    struct
    {
        int Value{0}; // Значение
        int Modifier{0}; // Модификатор
    } strength, dexterity, constitution, intelligence, wisdom, charisma;

    int inspiration{0};
    int profBonus{0}; // бонус мастерства

    struct
    {
        bool Strength{false};
        bool Dexterity{false};
        bool Constitution{false};
        bool Intelligence{false};
        bool Wisdom{false};
        bool Charisma{false};

        bool Acrobatics{false};
        bool AnimalHandling{false};
        bool Arcana{false};
        bool Athletics{false};
        bool Deception{false};
        bool History{false};
        bool Insight{false};
        bool Intimidation{false};
        bool Investigation{false};
        bool Medicine{false};
        bool Nature{false};
        bool Perception{false};
        bool Performance{false};
        bool Persuasion{false};
        bool Religion{false};
        bool SleightOfHand{false};
        bool Stealth{false};
        bool Survival{false};
    } profBonusSet;

    // Спасброски
    struct
    {
        int Strength{0};
        int Dexterity{0};
        int Constitution{0};
        int Intelligence{0};
        int Wisdom{0};
        int Charisma{0};
    } savingThrows;

    // Навыки
    struct
    {                              // Название          (базовая характеристика)
        int Acrobatics{0};         // Акробатика        (ловкость)
        int AnimalHandling{0};     // Уход за животными (мудрость)
        int Arcana{0};             // Магия             (интеллект)
        int Athletics{0};          // Атлетика          (сила)
        int Deception{0};          // Обман             (харизма)
        int History{0};            // Истрория          (интеллект)
        int Insight{0};            // Проницательность  (мудрость)
        int Intimidation{0};       // Запугивание       (харизма)
        int Investigation{0};      // Анализ            (интеллект)
        int Medicine{0};           // Медицина          (мудрость)
        int Nature{0};             // Природа           (интеллект)
        int Perception{0};         // Внимательность    (мудрость)
        int Performance{0};        // Выступление       (харизма)
        int Persuasion{0};         // Убеждение         (харизма)
        int Religion{0};           // Религия           (интеллект)
        int SleightOfHand{0};      // Ловкость рук      (ловкость)
        int Stealth{0};            // Скрытность        (ловкость)
        int Survival{0};           // Выживание         (мудрость)
    } skills;

    int passiveWisdom{0}; // Пассивная мудрость (внимательность)

    // Прочие владения и языки
    QString otherProfAndLanguages{""};

    int armorClass{0}; // Класс доспеха
    int initiative{0}; // Инициатива

    // Скорость
    struct
    {
        int Value{0};
        QString Units{"фт"};
    } speed;

    // Очки здоровья (хиты)
    struct
    {
        int Maximum{0};  // Максимальные
        int Current{0}; // Текущие
        int Temporary{0}; // Временные
    } hitPoints;

    // Кости хитов (используются при отдыхе)
    struct
    {
        int Current{0};
        QString Total{"0"};
        //int Total{0};
        //QString DiceType{"d8"};
    } hitDice;

    QVector<QString> dices{"d4", "d6", "d8", "d10", "d12", "d20", "d100"};

    // Спасброски от смерти
    struct
    {
        int Successes{0};
        int Failures{0};
    } deathSaves;

    // Атаки и заклинания
    struct
    {
        QString AttackName{""};
        int AttackBonus{0};
        QString DamageType{""};
    } attack1, attack2, attack3;

    QString otherAttacksSpellcasts{""};

    // Черты характера
    QString personalTraits{""};

    // Идеалы
    QString ideals{""};

    // Привязанности
    QString bonds{""};

    // Слабости (недостатки, ошибки)
    QString flaws{""};

    // Снаряжение
    QString equipment{""};

    // Кошелёк
    struct
    {
        int CopperPieces{0};   // Медные монеты
        int SilverPieces{0};   // Серебряные монеты
        int ElectrumPieces{0}; // Монеты из электрума
        int GoldPieces{0};     // Золотые монеты
        int PlatinumPieces{0}; // Платиновые монеты
    } coins;

    // Умения и особенности
    QString featuresTraits{""};

    friend class DndCharacters;
    friend class CharacterSheet;

public:
    CharacterData(){}
    CharacterData(QJsonObject& jsonObject)
    {
        charName = jsonObject["charName"].toString();
        charClassLevel = jsonObject["charClassLevel"].toString();
        charRace = jsonObject["charRace"].toString();
        charBackground = jsonObject["charBackground"].toString();
        charAlignment = jsonObject["charAlignment"].toString();
        playerName = jsonObject["playerName"].toString();
        expPoints = jsonObject["expPoints"].toInt();

        QJsonObject jsonStrength = jsonObject["strength"].toObject();
        strength.Value = jsonStrength["Value"].toInt();
        strength.Modifier = jsonStrength["Modifier"].toInt();

        QJsonObject jsonDexterity = jsonObject["dexterity"].toObject();
        dexterity.Value = jsonDexterity["Value"].toInt();
        dexterity.Modifier = jsonDexterity["Modifier"].toInt();

        QJsonObject jsonConstitution = jsonObject["constitution"].toObject();
        constitution.Value = jsonConstitution["Value"].toInt();
        constitution.Modifier = jsonConstitution["Modifier"].toInt();

        QJsonObject jsonIntelligence = jsonObject["intelligence"].toObject();
        intelligence.Value = jsonIntelligence["Value"].toInt();
        intelligence.Modifier = jsonIntelligence["Modifier"].toInt();

        QJsonObject jsonWisdom = jsonObject["wisdom"].toObject();
        wisdom.Value = jsonWisdom["Value"].toInt();
        wisdom.Modifier = jsonWisdom["Modifier"].toInt();

        QJsonObject jsonCharisma = jsonObject["charisma"].toObject();
        charisma.Value = jsonCharisma["Value"].toInt();
        charisma.Modifier = jsonCharisma["Modifier"].toInt();

        inspiration = jsonObject["inspiration"].toInt();
        profBonus = jsonObject["profBonus"].toInt();

        QJsonObject jsonProfBonusSet = jsonObject["profBonusSet"].toObject();
        profBonusSet.Strength = jsonProfBonusSet["Strength"].toBool();
        profBonusSet.Dexterity = jsonProfBonusSet["Dexterity"].toBool();
        profBonusSet.Constitution = jsonProfBonusSet["Constitution"].toBool();
        profBonusSet.Intelligence = jsonProfBonusSet["Intelligence"].toBool();
        profBonusSet.Wisdom = jsonProfBonusSet["Wisdom"].toBool();
        profBonusSet.Charisma = jsonProfBonusSet["Charisma"].toBool();
        profBonusSet.Acrobatics = jsonProfBonusSet["Acrobatics"].toBool();
        profBonusSet.AnimalHandling = jsonProfBonusSet["AnimalHandling"].toBool();
        profBonusSet.Arcana = jsonProfBonusSet["Arcana"].toBool();
        profBonusSet.Athletics = jsonProfBonusSet["Athletics"].toBool();
        profBonusSet.Deception = jsonProfBonusSet["Deception"].toBool();
        profBonusSet.History = jsonProfBonusSet["History"].toBool();
        profBonusSet.Insight = jsonProfBonusSet["Insight"].toBool();
        profBonusSet.Intimidation = jsonProfBonusSet["Intimidation"].toBool();
        profBonusSet.Investigation = jsonProfBonusSet["Investigation"].toBool();
        profBonusSet.Medicine = jsonProfBonusSet["Medicine"].toBool();
        profBonusSet.Nature = jsonProfBonusSet["Nature"].toBool();
        profBonusSet.Perception = jsonProfBonusSet["Perception"].toBool();
        profBonusSet.Performance = jsonProfBonusSet["Performance"].toBool();
        profBonusSet.Persuasion = jsonProfBonusSet["Persuasion"].toBool();
        profBonusSet.Religion = jsonProfBonusSet["Religion"].toBool();
        profBonusSet.SleightOfHand = jsonProfBonusSet["SleightOfHand"].toBool();
        profBonusSet.Stealth = jsonProfBonusSet["Stealth"].toBool();
        profBonusSet.Survival = jsonProfBonusSet["Survival"].toBool();

        QJsonObject jsonSavingThrows = jsonObject["savingThrows"].toObject();
        savingThrows.Strength = jsonSavingThrows["Strength"].toInt();
        savingThrows.Dexterity = jsonSavingThrows["Dexterity"].toInt();
        savingThrows.Constitution = jsonSavingThrows["Constitution"].toInt();
        savingThrows.Intelligence = jsonSavingThrows["Intelligence"].toInt();
        savingThrows.Wisdom = jsonSavingThrows["Wisdom"].toInt();
        savingThrows.Charisma = jsonSavingThrows["Charisma"].toInt();

        QJsonObject jsonSkills = jsonObject["skills"].toObject();
        skills.Acrobatics = jsonSkills["Acrobatics"].toInt();
        skills.AnimalHandling = jsonSkills["AnimalHandling"].toInt();
        skills.Arcana = jsonSkills["Arcana"].toInt();
        skills.Athletics = jsonSkills["Athletics"].toInt();
        skills.Deception = jsonSkills["Deception"].toInt();
        skills.History = jsonSkills["History"].toInt();
        skills.Insight = jsonSkills["Insight"].toInt();
        skills.Intimidation = jsonSkills["Intimidation"].toInt();
        skills.Investigation = jsonSkills["Investigation"].toInt();
        skills.Medicine = jsonSkills["Medicine"].toInt();
        skills.Nature = jsonSkills["Nature"].toInt();
        skills.Perception = jsonSkills["Perception"].toInt();
        skills.Performance = jsonSkills["Performance"].toInt();
        skills.Persuasion = jsonSkills["Persuasion"].toInt();
        skills.Religion = jsonSkills["Religion"].toInt();
        skills.SleightOfHand = jsonSkills["SleightOfHand"].toInt();
        skills.Stealth = jsonSkills["Stealth"].toInt();
        skills.Survival = jsonSkills["Survival"].toInt();

        passiveWisdom = jsonObject["passiveWisdom"].toInt();
        otherProfAndLanguages = jsonObject["otherProfAndLanguages"].toString();
        armorClass = jsonObject["armorClass"].toInt();
        initiative = jsonObject["initiative"].toInt();

        QJsonObject jsonSpeed = jsonObject["speed"].toObject();
        speed.Value = jsonSpeed["Value"].toInt();
        //speed.Units = jsonSpeed["Units"].toString();

        QJsonObject jsonHitPoints = jsonObject["hitPoints"].toObject();
        hitPoints.Maximum = jsonHitPoints["Maximum"].toInt();
        hitPoints.Current = jsonHitPoints["Current"].toInt();
        hitPoints.Temporary = jsonHitPoints["Temporary"].toInt();

        QJsonObject jsonHitDice = jsonObject["hitDice"].toObject();
        hitDice.Total = jsonHitDice["Total"].toString();
        hitDice.Current = jsonHitDice["Current"].toInt();

        QJsonObject jsonDeathSaves = jsonObject["deathSaves"].toObject();
        deathSaves.Successes = jsonDeathSaves["Successes"].toInt();
        deathSaves.Failures = jsonDeathSaves["Failures"].toInt();

        QJsonObject jsonAttack1 = jsonObject["attack1"].toObject();
        attack1.AttackName = jsonAttack1["AttackName"].toString();
        attack1.AttackBonus = jsonAttack1["AttackBonus"].toInt();
        attack1.DamageType = jsonAttack1["DamageType"].toString();

        QJsonObject jsonAttack2 = jsonObject["attack2"].toObject();
        attack2.AttackName = jsonAttack2["AttackName"].toString();
        attack2.AttackBonus = jsonAttack2["AttackBonus"].toInt();
        attack2.DamageType = jsonAttack2["DamageType"].toString();

        QJsonObject jsonAttack3 = jsonObject["attack3"].toObject();
        attack3.AttackName = jsonAttack3["AttackName"].toString();
        attack3.AttackBonus = jsonAttack3["AttackBonus"].toInt();
        attack3.DamageType = jsonAttack3["DamageType"].toString();

        otherAttacksSpellcasts = jsonObject["otherAttacksSpellcasts"].toString();
        personalTraits = jsonObject["personalTraits"].toString();
        ideals = jsonObject["ideals"].toString();
        bonds = jsonObject["bonds"].toString();
        flaws = jsonObject["flaws"].toString();
        equipment = jsonObject["equipment"].toString();

        QJsonObject jsonCoins = jsonObject["coins"].toObject();
        coins.CopperPieces = jsonCoins["CopperPieces"].toInt();
        coins.SilverPieces = jsonCoins["SilverPieces"].toInt();
        coins.ElectrumPieces = jsonCoins["ElectrumPieces"].toInt();
        coins.GoldPieces = jsonCoins["GoldPieces"].toInt();
        coins.PlatinumPieces = jsonCoins["PlatinumPieces"].toInt();

        featuresTraits = jsonObject["featuresTraits"].toString();
    }
    ~CharacterData();
};

#endif // CHARACTERDATA_H
