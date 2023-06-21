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
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionItalic;
    QAction *actionTESTTTTTT;
    QAction *actionSelect_Font_2;
    QAction *actionInfo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFont;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(800, 600);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName("actionSave_as");
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        actionColor = new QAction(Notepad);
        actionColor->setObjectName("actionColor");
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName("actionRedo");
        actionBold = new QAction(Notepad);
        actionBold->setObjectName("actionBold");
        actionBold->setCheckable(true);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName("actionUnderline");
        actionUnderline->setCheckable(true);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName("actionItalic");
        actionItalic->setCheckable(true);
        actionTESTTTTTT = new QAction(Notepad);
        actionTESTTTTTT->setObjectName("actionTESTTTTTT");
        actionTESTTTTTT->setCheckable(true);
        actionSelect_Font_2 = new QAction(Notepad);
        actionSelect_Font_2->setObjectName("actionSelect_Font_2");
        actionInfo = new QAction(Notepad);
        actionInfo->setObjectName("actionInfo");
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
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
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
        menuFont->addAction(actionSelect_Font_2);
        menuFont->addSeparator();
        menuFont->addAction(actionBold);
        menuFont->addAction(actionUnderline);
        menuFont->addAction(actionItalic);
        menuAbout->addAction(actionInfo);

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
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
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
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
        actionItalic->setText(QCoreApplication::translate("Notepad", "Italic", nullptr));
        actionTESTTTTTT->setText(QCoreApplication::translate("Notepad", "TESTTTTTT", nullptr));
        actionSelect_Font_2->setText(QCoreApplication::translate("Notepad", "Select Font", nullptr));
        actionInfo->setText(QCoreApplication::translate("Notepad", "Info", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFont->setTitle(QCoreApplication::translate("Notepad", "Font", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "&About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
