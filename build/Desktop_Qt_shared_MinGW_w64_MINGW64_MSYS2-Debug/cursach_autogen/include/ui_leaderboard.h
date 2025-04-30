/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Leaderboard
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Leaderboard)
    {
        if (Leaderboard->objectName().isEmpty())
            Leaderboard->setObjectName("Leaderboard");
        Leaderboard->resize(800, 600);
        centralwidget = new QWidget(Leaderboard);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(266, 30, 161, 20));
        Leaderboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Leaderboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Leaderboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Leaderboard);
        statusbar->setObjectName("statusbar");
        Leaderboard->setStatusBar(statusbar);

        retranslateUi(Leaderboard);

        QMetaObject::connectSlotsByName(Leaderboard);
    } // setupUi

    void retranslateUi(QMainWindow *Leaderboard)
    {
        Leaderboard->setWindowTitle(QCoreApplication::translate("Leaderboard", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Leaderboard", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\273\320\270\320\264\320\265\321\200\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leaderboard: public Ui_Leaderboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
