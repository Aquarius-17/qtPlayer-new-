#include "qtplayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtPlayer w;
    w.show();
    return a.exec();
}
