#ifndef JOUEUR_H
#define JOUEUR_H
#include <QString>
#include <iostream>
#include "page.h"

using namespace std;

class joueur
{
public:
    QString nom;
    int nbPV=100;
    int nbXP=0;
    Page currentPage=0;

    joueur(QString n){nom=n;cout<<"+[Joueur]"<<endl;};
    joueur(){cout<<"+[Joueur]"<<endl;};

    const QString &getNom() const;
    void setNom(const QString &newNom);
    int getNbPV() const;
    void setNbPV(int newNbPV);
    int getNbXP() const;
    void setNbXP(int newNbXP);
    void setCurrentPage(Page p);
    int getCurrentPage();
    string getCurrentPageQString();

    void modifPV(int n);
    void modifXP(int n);
    bool mort();
};

#endif // JOUEUR_H
