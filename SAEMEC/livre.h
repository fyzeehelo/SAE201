#ifndef LIVRE_H
#define LIVRE_H
#include <QList>
#include <QString>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>
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

    //void loadBook(const string& folderPath);
    int addFilesToPageList(const string& folderPath);
private:
    QString titre;
    int nbPages;
};

#endif // LIVRE_H
