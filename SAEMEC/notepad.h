#ifndef NOTEPAD_H
#define NOTEPAD_H

#include "ui_notepad.h"
#include "livre.h"
#include "joueur.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr, QString t="", int npages=1, joueur *j = new joueur());
    ~Notepad();
    Livre livre;
    joueur j;

private:
    Ui::Notepad *ui;
    QString currentFile;

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_actionExit_triggered();
    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionCut_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionBold_toggled(bool arg1);
    void on_actionUnderline_triggered();
    void on_actionItalic_triggered();
    void on_actionSelect_Font_triggered();
    void on_actionAlign_Left_triggered();
    void on_actionAlign_Center_triggered();
    void on_actionAlign_Right_triggered();
    void on_actionAlign_Justify_triggered();
    void on_actionInfo_triggered();
    void on_spinBox_textChanged(const QString &arg1);
    void on_actionOpen_Project_triggered();
    void on_actionImage_triggered();
    void on_actionFont_size_triggered();
};
#endif // NOTEPAD_H
