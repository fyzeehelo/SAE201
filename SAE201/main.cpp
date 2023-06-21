#include "mafenetre.h"
#include "livre.h"
#include "joueur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //    QApplication a(argc, argv);
    //    MaFenetre w;
    //    w.addImage("images/copy.png");
    //    w.show();
    //    return a.exec();
    Livre test("test",32);
    Page p1(1);
    p1.setTexte("yanis maquinouche");
    Page p2(2,1);
    p2.setTexte("sibdfg");
    p2.setModifPV(-40);
    Page p5(5,2);
    p5.setTexte("qdsfhj");
    p5.setModifPV(30);
    test.addPage(p1);
    test.addPage(p2);
    test.addPage(p5);
    joueur j1("fyze");
    j1.setCurrentPage(p2);
    cout<<j1.getNbPV()<<endl;
    cout<<"/////////////"<<endl;
    j1.setCurrentPage(p5);
    cout<<j1.getNbPV()<<endl;
}
