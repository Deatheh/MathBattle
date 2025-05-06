#include "gamewindow.h"
#include "ui_gamewindow.h"

gamewindow::gamewindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gamewindow)
{
    ui->setupUi(this);
    ui->label->setText(this->generateTask());
    timer.setInterval(10000);
    connect(&timer, &QTimer::timeout, this, &gamewindow::toscorewindow);

}

gamewindow::~gamewindow()
{
    delete ui;
}

QString gamewindow::generateTask(){
    srand(time(NULL));
    QFile file_task("task.txt");
    QString task;
    if(file_task.open(QIODevice::ReadOnly)){
        task = file_task.readLine();
    }
    file_task.close();
    QFile file_intricacy("intricacy.txt");
    QString intricacy;
    if(file_intricacy.open(QIODevice::ReadOnly)){
        intricacy = file_intricacy.readLine();
    }
    file_intricacy.close();
    if (task == "Quadratic equations"){
        if (intricacy == "Easy"){
            int x1 = rand() % (10 - (-10) + 1) - 10;
            int x2 = rand() % (10 - (-10) + 1) - 10;
            if (x1 > x2){
                int tmp = x2;
                x2 = x1;
                x1 = tmp;
            }
            qInfo() << x1 << " " << x2;
            this->ans.push_back(x1);
            this->ans.push_back(x2);
            int b = -x1 - x2;
            int c = x1 * x2;
            QString message = "Решите уравнение: x²";
            if (b > 0){
                message += "+";
                message +=QString::number(b) + "x";
            } else if (b < 0){
                message +=QString::number(b) + "x";
            }
            if (c > 0){
                message += "+";
            }
            if (c != 0){
                message += QString::number(c);
            }
            message += " = 0";
            return message;
        }
    }
    return "Qu";
}

void gamewindow::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    QStringList answers = str.split(";");
    bool is_correct = true;
    if (answers.size() != this->ans.size()){
        is_correct = false;
    } else {
        for (int i = 0; i < answers.size(); i++){
            float value = answers[i].toFloat();
            qInfo() << this->ans[i] << " " << value;
            if (this->ans[i] == value) {
                continue;
            } else {
                is_correct = false;
                break;
            }
        }
    }
    QFile file_intricacy("intricacy.txt");
    QString intricacy;
    if(file_intricacy.open(QIODevice::ReadOnly)){
        intricacy = file_intricacy.readLine();
    }
    file_intricacy.close();
    if (is_correct){
        if (intricacy == "Easy"){
            this->score += 100;
        } else {
            this->score += 150;
        }
    } else {
        this->score -= 100;
    }
    qInfo() << this->score;
    this->ans.clear();
    ui->label->setText(this->generateTask());
}

void gamewindow::toscorewindow(){
    timer.stop();
    QString sc = QString::number(score);
    qInfo() << score;
    QFile file("score.txt");
    if(file.open(QIODevice::WriteOnly)){
        QByteArray buffer = sc.toUtf8();
        file.write(buffer);
    }
    file.close();
    scWindow= new scorewindow;
    connect(scWindow, &scorewindow::firstWindow, this, &gamewindow::show);
    scWindow->show();
    this->close();
}
