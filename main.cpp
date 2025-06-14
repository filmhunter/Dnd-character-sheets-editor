#include "DndCharacters.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DndCharacters w;
    w.show();
    return a.exec();
}
