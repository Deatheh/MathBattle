/********************************************************************************
** Form generated from reading UI file 'scorewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREWINDOW_H
#define UI_SCOREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scorewindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *scorewindow)
    {
        if (scorewindow->objectName().isEmpty())
            scorewindow->setObjectName("scorewindow");
        scorewindow->resize(800, 600);
        QFont font;
        font.setPointSize(14);
        scorewindow->setFont(font);
        centralwidget = new QWidget(scorewindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 331, 61));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 90, 331, 61));
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 200, 331, 61));
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(270, 290, 271, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 370, 131, 31));
        pushButton->setFont(font);
        scorewindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(scorewindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        scorewindow->setMenuBar(menubar);
        statusbar = new QStatusBar(scorewindow);
        statusbar->setObjectName("statusbar");
        scorewindow->setStatusBar(statusbar);

        retranslateUi(scorewindow);

        QMetaObject::connectSlotsByName(scorewindow);
    } // setupUi

    void retranslateUi(QMainWindow *scorewindow)
    {
        scorewindow->setWindowTitle(QCoreApplication::translate("scorewindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("scorewindow", "\320\222\320\260\321\210 \320\270\320\263\321\200\320\276\320\262\320\276\320\271 \321\201\321\207\321\221\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("scorewindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("scorewindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \320\270\320\274\321\217:", nullptr));
        pushButton->setText(QCoreApplication::translate("scorewindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scorewindow: public Ui_scorewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREWINDOW_H
