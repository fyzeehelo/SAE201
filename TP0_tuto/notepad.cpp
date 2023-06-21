#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>
#include <QColorDialog>
#include "notepad.h"
#include "ui_notepad.h"


Notepad::Notepad(QWidget *parent):
    QMainWindow(parent), ui(new Ui::Notepad)
{
    ui->setupUi(this);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void Notepad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void Notepad::on_actionSave_triggered()
{
    if (currentFile.isEmpty()) {
        QString fileName = QFileDialog::getSaveFileName(this, "Save your file as");
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        currentFile =  fileName;
        setWindowTitle(currentFile);
        QTextStream out(&file);
        out << ui->textEdit->toPlainText();
        file.close();
    }
    else {
        QFile file(currentFile);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream out(&file);
        out << ui->textEdit->toPlainText();
        file.close();
    }
}

void Notepad::on_actionSave_As_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save your file as");
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    currentFile =  fileName;
    setWindowTitle(currentFile);
    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();
}

void Notepad::on_actionExit_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,
                                  "Exit app",
                                  "Are you sure you want quit ?\n"
                                  "Save your work before quit or it will be delete",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        qDebug() << "Yes";
        QApplication::quit();
    } else {
        qDebug() << "No";
    }
}


void Notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void Notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void Notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void Notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void Notepad::on_actionColor_triggered()
{
    QColor col = QColorDialog::getColor(Qt::white, this, "Select a color");
    QPalette pal = ui->textEdit->palette();
    pal.setColor(QPalette::HighlightedText, col);
    ui->textEdit->setPalette(pal);
}

void Notepad::on_actionBold_toggled(bool arg1)
{
    if (ui->textEdit->fontWeight()== QFont::Bold)
        ui->textEdit->setFontWeight(QFont::Normal);
    else
        ui->textEdit->setFontWeight(QFont::Bold);
}


void Notepad::on_actionUnderline_triggered()
{
    ui->textEdit->setFontUnderline(!ui->textEdit->fontUnderline());
}


void Notepad::on_actionItalic_triggered()
{
    ui->textEdit->setFontItalic(!ui->textEdit->fontItalic());
}

void Notepad::on_actionSelect_Font_2_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setCurrentFont(font);
}



void Notepad::on_actionInfo_triggered()
{
    QMessageBox::StandardButton btn;
    btn = QMessageBox::information(this,
                                   tr("About MDI"),
                                   tr("The Notepad exemple demonstrates "
                                      "how to code a basic text editor "
                                      "using QtWidgets"),
                                   QMessageBox::Ok,
                                   QMessageBox::NoButton);
    if (btn == QMessageBox::Ok)
        qDebug() << "OK";
}

