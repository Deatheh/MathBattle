#ifndef SCOREWINDOW_H
#define SCOREWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <vector>
#include <QTimer>
#include <QLabel>

namespace Ui {
class scorewindow;
}

class scorewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit scorewindow(QWidget *parent = nullptr);
    ~scorewindow();
signals:
    void firstWindow();
protected:
    void change_position();
private slots:
    void on_pushButton_clicked();

private:
    Ui::scorewindow *ui;
};

#endif // SCOREWINDOW_H
