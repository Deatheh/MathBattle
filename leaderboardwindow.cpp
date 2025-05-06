#include "leaderboardwindow.h"
#include "ui_leaderboardwindow.h"

leaderboardwindow::leaderboardwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::leaderboardwindow)
{
    ui->setupUi(this);
    QVector <QLabel*> labels_g;
    QVector <QLabel*> labels_s;
    labels_g.push_back(ui->label_g_1);
    labels_g.push_back(ui->label_g_2);
    labels_g.push_back(ui->label_g_3);
    labels_g.push_back(ui->label_g_4);
    labels_g.push_back(ui->label_g_5);
    labels_s.push_back(ui->label_s_1);
    labels_s.push_back(ui->label_s_2);
    labels_s.push_back(ui->label_s_3);
    labels_s.push_back(ui->label_s_4);
    labels_s.push_back(ui->label_s_5);
    for (int i = 1; i <= 5; i++){
        QString g_file_name = "gamer" + QString::number(i) + ".txt";
        QFile file_g(g_file_name);
        QString gamer;
        if(file_g.open(QIODevice::ReadOnly)){
            gamer = file_g.readLine();
        }
        labels_g[i-1]->setText(gamer);
        file_g.close();
        QString s_file_name = "score" + QString::number(i) + ".txt";
        QFile file_s(s_file_name);
        QString sc;
        if(file_s.open(QIODevice::ReadOnly)){
            sc = file_s.readLine();
        }
        labels_s[i-1]->setText(sc);
        file_s.close();
    }
}

leaderboardwindow::~leaderboardwindow()
{
    delete ui;
}

void leaderboardwindow::keyPressEvent(QKeyEvent *event){
    if (event->key()==Qt::Key_Escape) {
        this->close();
        emit firstWindow();
    }
}
