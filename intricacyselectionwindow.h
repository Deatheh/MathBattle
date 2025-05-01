#ifndef INTRICACYSELECTIONWINDOW_H
#define INTRICACYSELECTIONWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <Qt>
#include <QFile>
#include "gamewindow.h"

namespace Ui {
class intricacyselectionwindow;
}

class intricacyselectionwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit intricacyselectionwindow(QWidget *parent = nullptr);
    ~intricacyselectionwindow();
signals:
    void firstWindow();

private:
    Ui::intricacyselectionwindow *ui;
    gamewindow* gWindow;

protected:
    virtual void keyPressEvent(QKeyEvent *event);
    void nextWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // INTRICACYSELECTIONWINDOW_H
