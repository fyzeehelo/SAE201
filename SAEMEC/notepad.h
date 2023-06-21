#ifndef NOTEPAD_H
#define NOTEPAD_H

#include "ui_notepad.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();

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
    void on_actionFont_size_triggered();
};
#endif // NOTEPAD_H
