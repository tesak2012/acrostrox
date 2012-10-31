/********************************************************************************
** Form generated from reading UI file 'formaa.ui'
**
** Created: Wed 31. Oct 16:37:14 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMAA_H
#define UI_FORMAA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formaa
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Formaa)
    {
        if (Formaa->objectName().isEmpty())
            Formaa->setObjectName(QString::fromUtf8("Formaa"));
        Formaa->resize(400, 300);
        menuBar = new QMenuBar(Formaa);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Formaa->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Formaa);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Formaa->addToolBar(mainToolBar);
        centralWidget = new QWidget(Formaa);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Formaa->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Formaa);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Formaa->setStatusBar(statusBar);

        retranslateUi(Formaa);

        QMetaObject::connectSlotsByName(Formaa);
    } // setupUi

    void retranslateUi(QMainWindow *Formaa)
    {
        Formaa->setWindowTitle(QApplication::translate("Formaa", "Formaa", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Formaa: public Ui_Formaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMAA_H
