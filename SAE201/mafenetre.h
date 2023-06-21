#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QMainWindow>
#include <QLabel>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MaFenetre; }
QT_END_NAMESPACE

class MaFenetre : public QMainWindow
{
    Q_OBJECT

public:
    MaFenetre(QWidget *parent = nullptr);
    ~MaFenetre();
    void addImage(QString label);
private slots:
void on_actionsecret_triggered();


private:
    Ui::MaFenetre *ui;
    MaFenetre *nw;
};
#endif // MAFENETRE_H
