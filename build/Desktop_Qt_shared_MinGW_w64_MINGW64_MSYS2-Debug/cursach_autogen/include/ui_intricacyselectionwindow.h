/********************************************************************************
** Form generated from reading UI file 'intricacyselectionwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRICACYSELECTIONWINDOW_H
#define UI_INTRICACYSELECTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_intricacyselectionwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *intricacyselectionwindow)
    {
        if (intricacyselectionwindow->objectName().isEmpty())
            intricacyselectionwindow->setObjectName("intricacyselectionwindow");
        intricacyselectionwindow->resize(800, 600);
        centralwidget = new QWidget(intricacyselectionwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 40, 521, 61));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 260, 141, 61));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 260, 141, 61));
        pushButton_2->setFont(font1);
        intricacyselectionwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(intricacyselectionwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        intricacyselectionwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(intricacyselectionwindow);
        statusbar->setObjectName("statusbar");
        intricacyselectionwindow->setStatusBar(statusbar);

        retranslateUi(intricacyselectionwindow);

        QMetaObject::connectSlotsByName(intricacyselectionwindow);
    } // setupUi

    void retranslateUi(QMainWindow *intricacyselectionwindow)
    {
        intricacyselectionwindow->setWindowTitle(QCoreApplication::translate("intricacyselectionwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("intricacyselectionwindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("intricacyselectionwindow", "\320\233\321\221\320\263\320\272\320\270\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("intricacyselectionwindow", "\320\241\320\273\320\276\320\266\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class intricacyselectionwindow: public Ui_intricacyselectionwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRICACYSELECTIONWINDOW_H
