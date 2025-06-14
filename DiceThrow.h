#ifndef DICETHROW_H
#define DICETHROW_H

#include <QDialog>
#include <QRandomGenerator>

namespace Ui {
class DiceThrow;
}

class DiceThrow : public QDialog
{
    Q_OBJECT

public:
    explicit DiceThrow(const QString& d, QWidget *parent = nullptr);
    ~DiceThrow();

private:
    Ui::DiceThrow *ui;
};

#endif // DICETHROW_H
