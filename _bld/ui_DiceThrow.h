/********************************************************************************
** Form generated from reading UI file 'DiceThrow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICETHROW_H
#define UI_DICETHROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DiceThrow
{
public:
    QGridLayout *gridLayout;
    QLabel *rNumberLabel;

    void setupUi(QDialog *DiceThrow)
    {
        if (DiceThrow->objectName().isEmpty())
            DiceThrow->setObjectName(QString::fromUtf8("DiceThrow"));
        DiceThrow->resize(400, 300);
        gridLayout = new QGridLayout(DiceThrow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rNumberLabel = new QLabel(DiceThrow);
        rNumberLabel->setObjectName(QString::fromUtf8("rNumberLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman L"));
        font.setPointSize(25);
        rNumberLabel->setFont(font);
        rNumberLabel->setAlignment(Qt::AlignCenter);
        rNumberLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(rNumberLabel, 0, 0, 1, 1);


        retranslateUi(DiceThrow);

        QMetaObject::connectSlotsByName(DiceThrow);
    } // setupUi

    void retranslateUi(QDialog *DiceThrow)
    {
        DiceThrow->setWindowTitle(QCoreApplication::translate("DiceThrow", "Dialog", nullptr));
        rNumberLabel->setText(QCoreApplication::translate("DiceThrow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiceThrow: public Ui_DiceThrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICETHROW_H
