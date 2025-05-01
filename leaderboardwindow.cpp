#include "leaderboardwindow.h"
#include "ui_leaderboardwindow.h"

leaderboardwindow::leaderboardwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::leaderboardwindow)
{
    ui->setupUi(this);
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
