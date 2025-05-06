#include "scorewindow.h"
#include "ui_scorewindow.h"

scorewindow::scorewindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::scorewindow)
{
    ui->setupUi(this);
    QFile file("score.txt");
    QString score;
    if(file.open(QIODevice::ReadOnly)){
        score = file.readLine();
    }
    file.close();
    ui->label_2->setText(score);
}

scorewindow::~scorewindow()
{
    delete ui;
}

void scorewindow::change_position(){

}

void scorewindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QFile file("gamer.txt");
    if(file.open(QIODevice::WriteOnly)){
        QByteArray buffer = name.toUtf8();
        file.write(buffer);
    }
    file.close();
    for (int i = 5; i >= 1; i--){
        QString g1_file_name = "gamer" + QString::number(i) + ".txt";
        QFile file_g1(g1_file_name);
        QString gamer_1;
        if(file_g1.open(QIODevice::ReadWrite)){
            gamer_1 = file_g1.readLine();
        }
        QString s1_file_name = "score" + QString::number(i) + ".txt";
        QFile file_s1(s1_file_name);
        QString sc_1;
        if(file_s1.open(QIODevice::ReadWrite)){
            sc_1 = file_s1.readLine();
        }

        QString g2_file_name;
        if (i == 5){
            g2_file_name = "gamer.txt";
        } else {
            g2_file_name = "gamer" + QString::number(i+1) + ".txt";
        }
        QFile file_g2(g2_file_name);
        QString gamer_2;
        if(file_g2.open(QIODevice::ReadWrite)){
            gamer_2 = file_g2.readLine();
        }
        QString s2_file_name;
        if (i == 5){
            s2_file_name = "score.txt";
        } else {
            s2_file_name = "score" + QString::number(i+1) + ".txt";
        }
        QFile file_s2(s2_file_name);
        QString sc_2;
        if(file_s2.open(QIODevice::ReadWrite)){
            sc_2 = file_s2.readLine();
        }
        if (sc_2.toInt() > sc_1.toInt()){
            QByteArray buffer1 = gamer_1.toUtf8();
            QByteArray buffer2 = gamer_2.toUtf8();
            QByteArray buffer3 = sc_1.toUtf8();
            QByteArray buffer4 = sc_2.toUtf8();
            file_g1.resize(0);
            file_g2.resize(0);
            file_s1.resize(0);
            file_s2.resize(0);
            file_g1.write(buffer2);
            file_g2.write(buffer1);
            file_s1.write(buffer4);
            file_s2.write(buffer3);
        }
        file_g1.close();
        file_g2.close();
        file_s1.close();
        file_s2.close();
    }
    QCoreApplication::quit();
}

