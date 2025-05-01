/********************************************************************************
** Form generated from reading UI file 'leaderboardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARDWINDOW_H
#define UI_LEADERBOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_leaderboardwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *leaderboardwindow)
    {
        if (leaderboardwindow->objectName().isEmpty())
            leaderboardwindow->setObjectName("leaderboardwindow");
        leaderboardwindow->resize(800, 600);
        centralwidget = new QWidget(leaderboardwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 40, 311, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        leaderboardwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(leaderboardwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        leaderboardwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(leaderboardwindow);
        statusbar->setObjectName("statusbar");
        leaderboardwindow->setStatusBar(statusbar);

        retranslateUi(leaderboardwindow);

        QMetaObject::connectSlotsByName(leaderboardwindow);
    } // setupUi

    void retranslateUi(QMainWindow *leaderboardwindow)
    {
        leaderboardwindow->setWindowTitle(QCoreApplication::translate("leaderboardwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("leaderboardwindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\273\320\270\320\264\320\265\321\200\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leaderboardwindow: public Ui_leaderboardwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARDWINDOW_H
