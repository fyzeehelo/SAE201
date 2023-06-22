#include "joueur.h"
#include <string>

const QString &joueur::getNom() const
{
    return nom;
}

void joueur::setNom(const QString &newNom)
{
    nom = newNom;
}

int joueur::getNbPV() const
{
    return nbPV;
}

void joueur::setNbPV(int newNbPV)
{
    nbPV = newNbPV;
}

int joueur::getNbXP() const
{
    return nbXP;
}

void joueur::setNbXP(int newNbXP)
{
    nbXP = newNbXP;
}

int joueur::getCurrentPage(){
    return currentPage.getNbpage();
}

string joueur::getCurrentPageQString(){
    return to_string(currentPage.getNbpage()+2);
}


void joueur::modifPV(int n){
    int newPV = this->nbPV+n;
    this->nbPV=newPV;
}

void joueur::modifXP(int n){
    int newXP = this->nbXP+n;
    this->nbXP=newXP;
}

void joueur::setCurrentPage(Page p){
    currentPage = p;
    this->modifPV(p.getModifPV());
    this->modifXP(p.getModifXP());
}
