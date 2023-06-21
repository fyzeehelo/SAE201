/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionColor;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionItalic;
    QAction *actionCopy;
    QAction *actionSelect_Font;
    QAction *actionAlign_Left;
    QAction *actionAlign_Center;
    QAction *actionAlign_Right;
    QAction *actionAlign_Justify;
    QAction *actionInfo;
    QAction *actionFont_size;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFont;
    QMenu *menuAbout;
    QMenu *menuMise_en_page;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icones/Img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icones/Img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icones/Img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icones/Img/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icones/Img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionColor = new QAction(Notepad);
        actionColor->setObjectName("actionColor");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icones/Img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icones/Img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName("actionUndo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icones/Img/edit_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icones/Img/edit_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName("actionBold");
        actionBold->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icones/Img/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon9);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName("actionUnderline");
        actionUnderline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icones/Img/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon10);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName("actionItalic");
        actionItalic->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icones/Img/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon11);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icones/Img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon12);
        actionSelect_Font = new QAction(Notepad);
        actionSelect_Font->setObjectName("actionSelect_Font");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icones/Img/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_Font->setIcon(icon13);
        actionAlign_Left = new QAction(Notepad);
        actionAlign_Left->setObjectName("actionAlign_Left");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icones/Img/left-align.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_Left->setIcon(icon14);
        actionAlign_Center = new QAction(Notepad);
        actionAlign_Center->setObjectName("actionAlign_Center");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icones/Img/center-align.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_Center->setIcon(icon15);
        actionAlign_Right = new QAction(Notepad);
        actionAlign_Right->setObjectName("actionAlign_Right");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icones/Img/right-align.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_Right->setIcon(icon16);
        actionAlign_Justify = new QAction(Notepad);
        actionAlign_Justify->setObjectName("actionAlign_Justify");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Icones/Img/justification.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlign_Justify->setIcon(icon17);
        actionInfo = new QAction(Notepad);
        actionInfo->setObjectName("actionInfo");
        actionFont_size = new QAction(Notepad);
        actionFont_size->setObjectName("actionFont_size");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFont = new QMenu(menuEdit);
        menuFont->setObjectName("menuFont");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        menuMise_en_page = new QMenu(menubar);
        menuMise_en_page->setObjectName("menuMise_en_page");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName("toolBar");
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuMise_en_page->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionColor);
        menuEdit->addAction(menuFont->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFont->addAction(actionSelect_Font);
        menuFont->addSeparator();
        menuFont->addAction(actionBold);
        menuFont->addAction(actionUnderline);
        menuFont->addAction(actionItalic);
        menuFont->addSeparator();
        menuFont->addAction(actionFont_size);
        menuAbout->addAction(actionInfo);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionSelect_Font);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionItalic);
        toolBar->addSeparator();
        toolBar->addAction(actionAlign_Left);
        toolBar->addAction(actionAlign_Center);
        toolBar->addAction(actionAlign_Right);
        toolBar->addAction(actionAlign_Justify);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionColor->setText(QCoreApplication::translate("Notepad", "Color", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("Notepad", "Italic", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionSelect_Font->setText(QCoreApplication::translate("Notepad", "Select Font", nullptr));
        actionAlign_Left->setText(QCoreApplication::translate("Notepad", "Align Left", nullptr));
#if QT_CONFIG(tooltip)
        actionAlign_Left->setToolTip(QCoreApplication::translate("Notepad", "Align left", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAlign_Center->setText(QCoreApplication::translate("Notepad", "Align Center", nullptr));
        actionAlign_Right->setText(QCoreApplication::translate("Notepad", "Align Right", nullptr));
        actionAlign_Justify->setText(QCoreApplication::translate("Notepad", "Align Justify", nullptr));
#if QT_CONFIG(tooltip)
        actionAlign_Justify->setToolTip(QCoreApplication::translate("Notepad", "Justify", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInfo->setText(QCoreApplication::translate("Notepad", "Info", nullptr));
        actionFont_size->setText(QCoreApplication::translate("Notepad", "Font size", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFont->setTitle(QCoreApplication::translate("Notepad", "Font", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "&About", nullptr));
        menuMise_en_page->setTitle(QCoreApplication::translate("Notepad", "Mise en page", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
