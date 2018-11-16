#include "firststart.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstStart w;
    w.show();

    return a.exec();
}
