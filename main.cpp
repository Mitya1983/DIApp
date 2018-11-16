#include "firststart.h"
#include <QApplication>
#include <QRect>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstStart w;
    QScreen *mainScreen = QApplication::primaryScreen();
    w.resize(mainScreen->availableVirtualGeometry().width() / 2, mainScreen->availableVirtualGeometry().height() / 2);
    w.show();

    return a.exec();
}
