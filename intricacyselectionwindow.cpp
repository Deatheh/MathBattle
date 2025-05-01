#include "intricacyselectionwindow.h"
#include "ui_intricacyselectionwindow.h"

intricacyselectionwindow::intricacyselectionwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::intricacyselectionwindow)
{
    ui->setupUi(this);
    gWindow = new gamewindow;
    connect(gWindow, &gamewindow::firstWindow, this, &intricacyselectionwindow::show);
}

intricacyselectionwindow::~intricacyselectionwindow()
{
    delete ui;
}

void intricacyselectionwindow::keyPressEvent(QKeyEvent *event){
    if (event->key()==Qt::Key_Escape) {
        this->close();
        emit firstWindow();
    }
}

void intricacyselectionwindow::on_pushButton_clicked()
{
    QFile file("intricacy.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.write("Easy");
    }
    file.close();
    this->nextWindow();
}


void intricacyselectionwindow::on_pushButton_2_clicked()
{
    QFile file("intricacy.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.write("Hard");
    }
    file.close();
    this->nextWindow();
}

void intricacyselectionwindow::nextWindow()
{
    gWindow->show();
    this->close();
}
