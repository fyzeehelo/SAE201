
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
#include <string>
#include <QPushButton>

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
    //ui->bonusxp->setMaximum(100);
    //ui->bonusxp->setMinimum(0);
    //ui->bonushealth->setMaximum(100);
    //ui->bonushealth->setMinimum(0);
    ui->bonushealth->show();
    ui->bonusxp->show();

    //ui->spinBox->setMaximum(livre.addFilesToPageList("Z:/C++/SAE/SAEMEC/livre1"));
    ui->spinBox->setMinimum(0);

    //        for (auto p : livre.listePages){
    //            ui->pagesuiv->addItem(p.getNPage());
    //            ui->pageprec->addItem(p.getNPage());
    //        }
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
        on_actionSave_as_triggered();
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
    QString fileName;
    QMessageBox msgBox;
    msgBox.setText(tr("You want to save your work in Plain/Text or HTML ?"));

    QAbstractButton* htmlButton = msgBox.addButton(tr("HTML"), QMessageBox::NoRole);
    QAbstractButton* textButton = msgBox.addButton(tr("TEXT"), QMessageBox::NoRole);
    msgBox.addButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);
    msgBox.exec();
    if (msgBox.clickedButton() == htmlButton) {
        fileName = QFileDialog::getSaveFileName(this,
                                                tr("Save your file as"),
                                                R"(Z:\C++\SAE\SAEMEC)",
                                                tr("HTML files (*html)"));
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;
        currentFile =  fileName;
        setWindowTitle(currentFile);
        QString htmlContent;
        htmlContent = R"(
            <!DOCTYPE html>
            <html lang="fr">
                <head><title>%1</title></head>
                <body style="text-align:center;">
                    <h1>%2</h1>
                    <h2>%3</h2>
                    %4
                    <a href="%5"><button>Choix 1</button></a>
                    <a href="%6"><button>Choix 2</button></a>
                </body>
            </html>
        )";
        QString str = ui->textEdit->toPlainText();
        QString title, img;
        QString content = "";
        QStringList lines_lst = str.split("\n");

        for (int i = 0; i < lines_lst.length(); i++) {
            QString line = lines_lst.value(i);
            if (i == 0)
                title = line;
            else if (line.mid(0, 4).compare("<img") == 0)
                img = line;
            else
                content += line + "<br>";
        }
        htmlContent = htmlContent.arg(currentFile, title, content, img.compare("")!=0?img:"");

        QTextStream out(&file);

        qDebug() << str;
        out << htmlContent;
        file.close();

    } else if (msgBox.clickedButton() == textButton) {
        fileName = QFileDialog::getSaveFileName(this,
                                                tr("Save your file as"),
                                                R"(Z:\C++\SAE\SAEMEC)",
                                                tr("Text files (*.txt)"));
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        currentFile =  fileName;
        setWindowTitle(currentFile);

        QTextStream out(&file);
        out << ui->textEdit->toPlainText();
        file.close();
    }
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
    QDir dir = QFileDialog::getExistingDirectory(this, "Directory", QString());
    ui->spinBox->setMaximum(livre.addFilesToPageList(dir.absolutePath().toStdString()));
    ui->spinBox->setMinimum(0);

    ui->pagesuiv->clear();
    ui->pageprec->clear();
    for (auto p : livre.listePages){
        ui->pagesuiv->addItem(p.getNPage());
        ui->pageprec->addItem(p.getNPage());
    }
}


void Notepad::on_actionImage_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Choose your image");
    if (!filePath.isEmpty()){
        QImage image(filePath);
        if (!image.isNull()){
            ui->textEdit->textCursor().insertText("<img src ='"+filePath+"' alt='image'>");
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
    }
    msgBox.setText("Select a font size");
    msgBox.exec();

    int value = b->value();
    delete b;
    ui->textEdit->setFontPointSize(value);
}

void Notepad::on_pagesuiv_currentIndexChanged(int index)
{
    Page pageActuelle = livre.getPage(j.getCurrentPage()+1);
    pageActuelle.setNumeroPageSucc(index+1);
    ui->page_suiv->setText(to_string(livre.getPage(j.getCurrentPage()+1).getNumeroPageSucc()).c_str());
    ui->page_suiv->show();
}


void Notepad::on_pageprec_currentIndexChanged(int index)
{
    Page pageActuelle = livre.getPage(j.getCurrentPage()+1);
    pageActuelle.setNumeroPagePred(index+1);
    ui->page_pred->setText(to_string(livre.getPage(j.getCurrentPage()+1).getNumeroPageSucc()).c_str());
    ui->page_pred->show();
}

void Notepad::on_actionPage_triggered()
{
    Page newPage(livre.getNbPages()+1);
    livre.addPage(newPage);
    ui->spinBox->setMaximum(ui->spinBox->maximum()+1);
    ui->spinBox->setMinimum(0);
    ui->pagesuiv->addItem(to_string(ui->spinBox->maximum()+1).c_str());
    ui->pageprec->addItem(to_string(ui->spinBox->maximum()+1).c_str());

}


void Notepad::on_bonushealth_valueChanged(int arg1)
{
    Page newPage =livre.getPage(j.getCurrentPage()+1);
    newPage.setModifPV(arg1);
    if(j.mort()){
        QMessageBox popup;
        popup.setWindowTitle("JOUEUR MORT");
        popup.setText("Le joueur est mort");
        popup.setInformativeText("Fin du jeu");
        popup.setStandardButtons(QMessageBox::Yes);
        popup.exec();
        close();
    }
}


void Notepad::on_bonusxp_valueChanged(int arg1)
{
    Page newPage =livre.getPage(j.getCurrentPage()+1);
    newPage.setModifXP(arg1);
}

