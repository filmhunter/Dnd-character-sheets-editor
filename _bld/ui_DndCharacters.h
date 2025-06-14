/********************************************************************************
** Form generated from reading UI file 'DndCharacters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNDCHARACTERS_H
#define UI_DNDCHARACTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DndCharacters
{
public:
    QAction *actionAddCharacter;
    QAction *actionDeleteCharacter;
    QAction *actionSaveAs;
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionD4;
    QAction *actionD6;
    QAction *actionD8;
    QAction *actionD10;
    QAction *actionD12;
    QAction *actionD20;
    QAction *actionD100;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionNewCatalog;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuDice;

    void setupUi(QMainWindow *DndCharacters)
    {
        if (DndCharacters->objectName().isEmpty())
            DndCharacters->setObjectName(QString::fromUtf8("DndCharacters"));
        DndCharacters->resize(891, 723);
        DndCharacters->setDocumentMode(false);
        actionAddCharacter = new QAction(DndCharacters);
        actionAddCharacter->setObjectName(QString::fromUtf8("actionAddCharacter"));
        actionDeleteCharacter = new QAction(DndCharacters);
        actionDeleteCharacter->setObjectName(QString::fromUtf8("actionDeleteCharacter"));
        actionSaveAs = new QAction(DndCharacters);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionOpen = new QAction(DndCharacters);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionAbout = new QAction(DndCharacters);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionD4 = new QAction(DndCharacters);
        actionD4->setObjectName(QString::fromUtf8("actionD4"));
        actionD6 = new QAction(DndCharacters);
        actionD6->setObjectName(QString::fromUtf8("actionD6"));
        actionD8 = new QAction(DndCharacters);
        actionD8->setObjectName(QString::fromUtf8("actionD8"));
        actionD10 = new QAction(DndCharacters);
        actionD10->setObjectName(QString::fromUtf8("actionD10"));
        actionD12 = new QAction(DndCharacters);
        actionD12->setObjectName(QString::fromUtf8("actionD12"));
        actionD20 = new QAction(DndCharacters);
        actionD20->setObjectName(QString::fromUtf8("actionD20"));
        actionD100 = new QAction(DndCharacters);
        actionD100->setObjectName(QString::fromUtf8("actionD100"));
        actionSave = new QAction(DndCharacters);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(DndCharacters);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionNewCatalog = new QAction(DndCharacters);
        actionNewCatalog->setObjectName(QString::fromUtf8("actionNewCatalog"));
        centralwidget = new QWidget(DndCharacters);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout_6->addWidget(tabWidget, 0, 1, 1, 1);

        DndCharacters->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DndCharacters);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 891, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDice = new QMenu(menubar);
        menuDice->setObjectName(QString::fromUtf8("menuDice"));
        DndCharacters->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDice->menuAction());
        menuFile->addAction(actionAddCharacter);
        menuFile->addAction(actionDeleteCharacter);
        menuFile->addAction(actionNewCatalog);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionAbout);
        menuFile->addAction(actionExit);
        menuDice->addAction(actionD4);
        menuDice->addAction(actionD6);
        menuDice->addAction(actionD8);
        menuDice->addAction(actionD10);
        menuDice->addAction(actionD12);
        menuDice->addAction(actionD20);
        menuDice->addAction(actionD100);

        retranslateUi(DndCharacters);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(DndCharacters);
    } // setupUi

    void retranslateUi(QMainWindow *DndCharacters)
    {
        DndCharacters->setWindowTitle(QCoreApplication::translate("DndCharacters", "DndCharacters", nullptr));
        actionAddCharacter->setText(QCoreApplication::translate("DndCharacters", "Add sheet", nullptr));
        actionDeleteCharacter->setText(QCoreApplication::translate("DndCharacters", "Delete sheet", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("DndCharacters", "Save as...", nullptr));
        actionOpen->setText(QCoreApplication::translate("DndCharacters", "Open...", nullptr));
        actionAbout->setText(QCoreApplication::translate("DndCharacters", "About", nullptr));
        actionD4->setText(QCoreApplication::translate("DndCharacters", "d4", nullptr));
        actionD6->setText(QCoreApplication::translate("DndCharacters", "d6", nullptr));
        actionD8->setText(QCoreApplication::translate("DndCharacters", "d8", nullptr));
        actionD10->setText(QCoreApplication::translate("DndCharacters", "d10", nullptr));
        actionD12->setText(QCoreApplication::translate("DndCharacters", "d12", nullptr));
        actionD20->setText(QCoreApplication::translate("DndCharacters", "d20", nullptr));
        actionD100->setText(QCoreApplication::translate("DndCharacters", "d100", nullptr));
        actionSave->setText(QCoreApplication::translate("DndCharacters", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("DndCharacters", "Exit", nullptr));
        actionNewCatalog->setText(QCoreApplication::translate("DndCharacters", "New catalog", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DndCharacters", "File", nullptr));
        menuDice->setTitle(QCoreApplication::translate("DndCharacters", "Throw dice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DndCharacters: public Ui_DndCharacters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNDCHARACTERS_H
