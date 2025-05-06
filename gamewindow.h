#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QRandomGenerator>
#include <QDebug>
#include <vector>
#include <QTimer>
#include <QLabel>
#include <QTimer>
#include "scorewindow.h"

namespace Ui {
class gamewindow;
}

class gamewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();
    std::vector<float> ans;
    int score = 0;
    QTimer timer;
signals:
    void firstWindow();

protected:
    QString generateTask();

private slots:
    void on_pushButton_clicked();
    void toscorewindow();

private:
    Ui::gamewindow *ui;
    scorewindow* scWindow;
};

#endif // GAMEWINDOW_H
