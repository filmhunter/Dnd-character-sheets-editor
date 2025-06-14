#ifndef DNDCHARACTERS_H
#define DNDCHARACTERS_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>
#include <QDebug>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFileDialog>

#include "CharacterSheet.h"
#include "CharacterData.h"
#include "DiceThrow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DndCharacters; }
QT_END_NAMESPACE

class DndCharacters : public QMainWindow
{
    Q_OBJECT

public:
    DndCharacters(QWidget *parent = nullptr);
    ~DndCharacters();

private:
    Ui::DndCharacters *ui;
    QVector<CharacterData *> charactersVector;
    QString currentFilename{""};

    void addNewCharacterSheet();
    void deleteCharacterSheet();
    QString replaceSameTitle(int, const QString&);
    void dataConversion(QJsonObject&, CharacterData&);
    void saveCatalog(bool saveAs = false);
    void openCharacterSheet(QJsonObject&);
    void deleteAllCharacterSheets();
    void openJsonFile();
    void newCatalog();
    void openCatalog();
    void exitProgram();

private slots:
    void setTabTitle();
    void on_menuFile_triggered(QAction*);
    void on_menuDice_triggered(QAction*);
};
#endif // DNDCHARACTERS_H
