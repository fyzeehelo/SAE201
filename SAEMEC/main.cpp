#include "notepad.h"
#include "livre.h"
#include "joueur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    joueur j1("fyze");
    QApplication a(argc, argv);
    // Notepad w(nullptr,"crampte",100,&j1);
    // w.livre=test;
    Notepad j;
    j.show();
    // w.show();
    return a.exec();
}
