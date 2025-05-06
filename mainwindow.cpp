
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lbWindow= new leaderboardwindow;
    connect(lbWindow, &leaderboardwindow::firstWindow, this, &MainWindow::show);
    tsWindow = new taskselectionwindow;
    connect(tsWindow, &taskselectionwindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    lbWindow->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    tsWindow->show();
    this->close();
}


void MainWindow::on_pushButton_3_clicked()
{
    QCoreApplication::quit();
}

