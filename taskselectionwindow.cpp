#include "taskselectionwindow.h"
#include "ui_taskselectionwindow.h"

taskselectionwindow::taskselectionwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::taskselectionwindow)
{
    ui->setupUi(this);
    isWindow = new intricacyselectionwindow;
    connect(isWindow, &intricacyselectionwindow::firstWindow, this, &taskselectionwindow::show);
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

void taskselectionwindow::on_pushButton_clicked()
{
    QFile file("task.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.write("Quadratic equations");
    }
    file.close();
    this->nextWindow();
}

void taskselectionwindow::nextWindow()
{
    isWindow->show();
    this->close();
}
