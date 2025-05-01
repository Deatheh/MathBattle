/********************************************************************************
** Form generated from reading UI file 'taskselectionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSELECTIONWINDOW_H
#define UI_TASKSELECTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskselectionwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *taskselectionwindow)
    {
        if (taskselectionwindow->objectName().isEmpty())
            taskselectionwindow->setObjectName("taskselectionwindow");
        taskselectionwindow->resize(800, 600);
        centralwidget = new QWidget(taskselectionwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 40, 371, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 110, 171, 31));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        taskselectionwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(taskselectionwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        taskselectionwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(taskselectionwindow);
        statusbar->setObjectName("statusbar");
        taskselectionwindow->setStatusBar(statusbar);

        retranslateUi(taskselectionwindow);

        QMetaObject::connectSlotsByName(taskselectionwindow);
    } // setupUi

    void retranslateUi(QMainWindow *taskselectionwindow)
    {
        taskselectionwindow->setWindowTitle(QCoreApplication::translate("taskselectionwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("taskselectionwindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("taskselectionwindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202\320\275\321\213\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskselectionwindow: public Ui_taskselectionwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSELECTIONWINDOW_H
