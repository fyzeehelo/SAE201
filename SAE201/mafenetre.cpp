#include "mafenetre.h"
#include "ui_mafenetre.h"

MaFenetre::MaFenetre(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MaFenetre)
{
    ui->setupUi(this);
}

MaFenetre::~MaFenetre()
{
    delete ui;
}

void MaFenetre::on_actionsecret_triggered(){
    nw->show();
    this->hide();
}

void MaFenetre::addImage(QString label){
    //on donne l'image au label
    QLabel test;
    test.setPixmap(QPixmap(label));
    test.show();
}
