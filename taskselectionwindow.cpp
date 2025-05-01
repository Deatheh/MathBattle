#include "taskselectionwindow.h"
#include "ui_taskselectionwindow.h"

taskselectionwindow::taskselectionwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::taskselectionwindow)
{
    ui->setupUi(this);
}

taskselectionwindow::~taskselectionwindow()
{
    delete ui;
}

void taskselectionwindow::keyPressEvent(QKeyEvent *event){
    if (event->key()==Qt::Key_Escape) {
        this->close();
        emit firstWindow();
    }
}
