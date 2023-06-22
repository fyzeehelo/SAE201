#ifndef PAGE_H
#define PAGE_H

#include <iostream>
#include <QString>
#include <string>

using namespace std;

class Page
{
public:
    Page(int npage, int npagepred, int npagesucc){
        cout<<"+[Page]"<<endl;
        nbpage=npage;
        numeroPagePred=npagepred;
        numeroPageSucc = npagesucc;
    }
    Page(int npage){
        cout<<"+[Page]"<<endl;
        nbpage=npage;
    }
    Page(int npage, int npagepred){
        cout<<"+[Page]"<<endl;
        nbpage=npage;
        numeroPagePred=npagepred;
    }

    ~Page(){cout<<"-[Page]"<<endl;};

    int getNbpage() const;
    void setNbpage(int newNbpage);
    const QString &getTexte() const;
    void setTexte(const QString &newTexte);

    int getNumeroPagePred() const;
    void setNumeroPagePred(int newNumeroPagePred);
    int getNumeroPageSucc() const;
    void setNumeroPageSucc(int newNumeroPageSucc);
    QString getTexte();

    int getModifPV() const;
    void setModifPV(int newModifPV);
    int getModifXP() const;
    void setModifXP(int newModifXP);

    bool pageExiste();
    void setPath(QString s){path = s;}
    string getPath(){return path.toStdString();}
    QString getNPage(){return to_string(nbpage+1).c_str();};

private:
    int nbpage;
    QString texte;
    int numeroPagePred;
    int numeroPageSucc;
    int modifPV;
    int modifXP;
    QString path;
};

#endif // PAGE_H
