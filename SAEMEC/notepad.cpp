
#include <iostream>
#include "notepad.h"
#include "page.h"
#include "ui_notepad.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>
#include <QSpinBox>
#include <QString>
#include <QLayout>

Notepad::Notepad(QWidget *parent, QString t, int npages, joueur *jo):
    QMainWindow(parent), livre(t,npages),j(jo->getNom()),ui(new Ui::Notepad)
{
    ui->setupUi(this);
    ui->pseudojoueur->setText(j.getNom());
    ui->pseudojoueur->setVisible(true);
    ui->pseudojoueur->show();
    for(int i=0;i<npages;i++){
        Page tempo(i);
        livre.addPage(tempo);
    }

    ui->spinBox->setMaximum(livre.addFilesToPageList("Z:/C++/SAE/SAEMEC/livre1"));
    ui->spinBox->setMinimum(0);

    //    for (auto p : livre.listePages){
    //        ui->comboBox->addItem(p.getPath());
    //    }
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

void Notepad::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save your file as"),
                                                    R"(Z:\C++\SAE\SAEMEC)",
                                                    tr("Text files (*.txt);;HTML files (*html)"));
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
                                  tr("Exit app"),
                                  tr("Are you sure you want quit ?\n"
                                     "Save your work before quit or it will be delete"),
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




void Notepad::on_actionSelect_Font_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit->setCurrentFont(font);
}

void Notepad::on_actionAlign_Left_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}


void Notepad::on_actionAlign_Center_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}


void Notepad::on_actionAlign_Right_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}


void Notepad::on_actionAlign_Justify_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignJustify);
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


void Notepad::on_spinBox_textChanged(const QString &arg1)
{
    ui->textEdit->setText(livre.getPage(arg1.toInt()).getTexte());
    j.setCurrentPage(livre.getPage(arg1.toInt()));
    ui->numeropage->setText((j.getCurrentPageQString()).c_str());
    ui->numeropage->show();
}

void Notepad::on_actionOpen_Project_triggered()
{
    // DEMANDER DE CHOISIR UN DOSSIER
    livre.addFilesToPageList("Z:/C++/SAE/SAEMEC/livre1");
}


void Notepad::on_actionImage_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Choose your image");
    if (!filePath.isEmpty()){
        QImage image(filePath);
        if (!image.isNull()){
            ui->textEdit->textCursor().insertImage(filePath);
            // alternative plus "détailée"
            //            QTextImageFormat imageFormat;
            //            imageFormat.setName(filePath);
            //            imageFormat.setWidth(image.width());
            //            imageFormat.setHeight(image.height());
            //            QTextCursor cursor(ui->textEdit->textCursor());
            //            cursor.insertImage(imageFormat);
        }
        else {
            QMessageBox popup;
            popup.setWindowTitle("File opener");
            popup.setText("Error IMPIM12");
            popup.setInformativeText("File has not a correct format.");
            popup.setStandardButtons(QMessageBox::Close);
            popup.exec();
        }
    }
    else{
        // Window ne laisse pas prendre un chemin inexistant donc popup négligable (sur windows)
        //        QMessageBox popup;
        //        popup.setText("Error IMP01");
        //        popup.setInformativeText("No file find at this way.");
        //        popup.setStandardButtons(QMessageBox::Close);
        //        popup.exec();
    }
}
void Notepad::on_actionFont_size_triggered()
{
    QMessageBox msgBox;
    QSpinBox* b = new QSpinBox();
    b->setRange(1, 50);
    b->setDisplayIntegerBase(11);
    if (msgBox.layout()!=nullptr){
        qDebug() << msgBox.layout();
        msgBox.layout()->addWidget(b);
        // METTRE LABEL ET ASSOCIER LES 2 OU  REDIMMENSIONNER
    }
    msgBox.setText("Select a font size");
    msgBox.exec();

    int value = b->value();
    delete b;
    ui->textEdit->setFontPointSize(value);
}
