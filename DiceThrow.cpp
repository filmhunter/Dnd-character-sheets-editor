#include "DiceThrow.h"
#include "ui_DiceThrow.h"

DiceThrow::DiceThrow(const QString& d, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiceThrow)
{
    ui->setupUi(this);

    if(d == "actionD4")
    {
        this->setWindowTitle("d4");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 5)));
    }
    else if(d == "actionD6")
    {
        this->setWindowTitle("d6");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 7)));
    }
    else if(d == "actionD8")
    {
        this->setWindowTitle("d8");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 9)));
    }
    else if(d == "actionD10")
    {
        this->setWindowTitle("d10");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 11)));
    }
    else if(d == "actionD12")
    {
        this->setWindowTitle("d12");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 13)));
    }
    else if(d == "actionD20")
    {
        this->setWindowTitle("d20");
        ui->rNumberLabel->setText(QString::number(QRandomGenerator::global()->bounded(1, 21)));
    }
    else if(d == "actionD100")
    {
        this->setWindowTitle("d100");
        ui->rNumberLabel->setText(QString::number(10 * QRandomGenerator::global()->bounded(1, 10)));
    }
}

DiceThrow::~DiceThrow()
{
    delete ui;
}
