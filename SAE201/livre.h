#ifndef LIVRE_H
#define LIVRE_H
#include <QList>
#include <iostream>
#include "page.h"
using namespace std;

class Livre
{
public:
    QList<Page> listePages;
    Livre(QString t,int npages){
        cout<<"+[Livre]"<<endl;
        titre=t;
        nbPages=npages;
    };
    ~Livre(){cout<<"-[Livre]"<<endl;};

    const QString &getTitre() const;
    void setTitre(const QString &newTitre);
    int getNbPages() const;
    void setNbPages(int newNbPages);

    void addPage(Page newPage);
    Page getPage(int n);
private:
    QString titre;
    int nbPages;
};

#endif // LIVRE_H
