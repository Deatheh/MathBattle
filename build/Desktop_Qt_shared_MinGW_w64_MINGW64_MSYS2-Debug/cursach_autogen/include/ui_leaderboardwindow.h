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
    QLabel *label_g_1;
    QLabel *label_s_1;
    QLabel *label_g_2;
    QLabel *label_g_3;
    QLabel *label_g_4;
    QLabel *label_g_5;
    QLabel *label_s_2;
    QLabel *label_s_3;
    QLabel *label_s_4;
    QLabel *label_s_5;
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
        label_g_1 = new QLabel(centralwidget);
        label_g_1->setObjectName("label_g_1");
        label_g_1->setGeometry(QRect(190, 110, 231, 41));
        QFont font1;
        font1.setPointSize(14);
        label_g_1->setFont(font1);
        label_g_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_s_1 = new QLabel(centralwidget);
        label_s_1->setObjectName("label_s_1");
        label_s_1->setGeometry(QRect(420, 110, 191, 41));
        label_s_1->setFont(font1);
        label_s_1->setAlignment(Qt::AlignCenter);
        label_g_2 = new QLabel(centralwidget);
        label_g_2->setObjectName("label_g_2");
        label_g_2->setGeometry(QRect(190, 150, 231, 41));
        label_g_2->setFont(font1);
        label_g_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_g_3 = new QLabel(centralwidget);
        label_g_3->setObjectName("label_g_3");
        label_g_3->setGeometry(QRect(190, 190, 231, 41));
        label_g_3->setFont(font1);
        label_g_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_g_4 = new QLabel(centralwidget);
        label_g_4->setObjectName("label_g_4");
        label_g_4->setGeometry(QRect(190, 230, 231, 41));
        label_g_4->setFont(font1);
        label_g_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_g_5 = new QLabel(centralwidget);
        label_g_5->setObjectName("label_g_5");
        label_g_5->setGeometry(QRect(190, 270, 231, 41));
        label_g_5->setFont(font1);
        label_g_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_s_2 = new QLabel(centralwidget);
        label_s_2->setObjectName("label_s_2");
        label_s_2->setGeometry(QRect(420, 150, 191, 41));
        label_s_2->setFont(font1);
        label_s_2->setAlignment(Qt::AlignCenter);
        label_s_3 = new QLabel(centralwidget);
        label_s_3->setObjectName("label_s_3");
        label_s_3->setGeometry(QRect(420, 190, 191, 41));
        label_s_3->setFont(font1);
        label_s_3->setAlignment(Qt::AlignCenter);
        label_s_4 = new QLabel(centralwidget);
        label_s_4->setObjectName("label_s_4");
        label_s_4->setGeometry(QRect(420, 230, 191, 41));
        label_s_4->setFont(font1);
        label_s_4->setAlignment(Qt::AlignCenter);
        label_s_5 = new QLabel(centralwidget);
        label_s_5->setObjectName("label_s_5");
        label_s_5->setGeometry(QRect(420, 270, 191, 41));
        label_s_5->setFont(font1);
        label_s_5->setAlignment(Qt::AlignCenter);
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
        label_g_1->setText(QCoreApplication::translate("leaderboardwindow", "Gamer:", nullptr));
        label_s_1->setText(QCoreApplication::translate("leaderboardwindow", "0", nullptr));
        label_g_2->setText(QCoreApplication::translate("leaderboardwindow", "Gamer:", nullptr));
        label_g_3->setText(QCoreApplication::translate("leaderboardwindow", "Gamer:", nullptr));
        label_g_4->setText(QCoreApplication::translate("leaderboardwindow", "Gamer:", nullptr));
        label_g_5->setText(QCoreApplication::translate("leaderboardwindow", "Gamer:", nullptr));
        label_s_2->setText(QCoreApplication::translate("leaderboardwindow", "0", nullptr));
        label_s_3->setText(QCoreApplication::translate("leaderboardwindow", "0", nullptr));
        label_s_4->setText(QCoreApplication::translate("leaderboardwindow", "0", nullptr));
        label_s_5->setText(QCoreApplication::translate("leaderboardwindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leaderboardwindow: public Ui_leaderboardwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARDWINDOW_H
