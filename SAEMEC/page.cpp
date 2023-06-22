#include "page.h"

int Page::getNbpage() const
{
    return nbpage;
}

void Page::setNbpage(int newNbpage)
{
    nbpage = newNbpage;
}

const QString &Page::getTexte() const
{
    return texte;
}

void Page::setTexte(const QString &newTexte)
{
    texte = newTexte;
}

int Page::getNumeroPagePred() const
{
    return numeroPagePred;
}

void Page::setNumeroPagePred(int newNumeroPagePred)
{
    numeroPagePred = newNumeroPagePred;
}

int Page::getNumeroPageSucc() const
{
    return numeroPageSucc;
}

void Page::setNumeroPageSucc(int newNumeroPageSucc)
{
    numeroPageSucc = newNumeroPageSucc;
}


QString Page::getTexte(){
    cout << texte.toUtf8().constData() << endl;
    return texte;
}

int Page::getModifPV() const
{
    return modifPV;
}

void Page::setModifPV(int newModifPV)
{
    modifPV = newModifPV;
}

int Page::getModifXP() const
{
    return modifXP;
}

void Page::setModifXP(int newModifXP)
{
    modifXP = newModifXP;
}

bool Page::pageExiste(){
    if (getTexte()!=""){
        return true;
    }
    return false;
}

