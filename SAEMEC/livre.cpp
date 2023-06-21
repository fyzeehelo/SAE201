#include "livre.h"

const QString &Livre::getTitre() const
{
    return titre;
}

void Livre::setTitre(const QString &newTitre)
{
    titre = newTitre;
}

int Livre::getNbPages() const
{
    return nbPages;
}

void Livre::setNbPages(int newNbPages)
{
    nbPages = newNbPages;
}

void Livre::addPage(Page newPage){
    this->listePages.push_back(newPage);
}

Page Livre::getPage(int n){
    return this->listePages[n-1];
}
