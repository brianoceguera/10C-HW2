#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Run Schema A
    if(ui->radioButton->isChecked()){
        //schema values
        const int num_homeworks = 3;
        const double hw_p = 0.15;
        const double mt1_p = 0.25;
        const double final_p = 0.30;
        const double finalpro_p = 0.35;
        //Acquire hw scores
        double hwscore =
                (ui->spinBox->value()+
                ui->spinBox_2->value()+
                ui->spinBox_3->value())*hw_p/num_homeworks;
        //Acquire exam scores
        double examscore =
                ui->spinBox_8->value()*mt1_p+
                ui->spinBox_10->value()*final_p;
        //Acquire Final Project score
        double finalpro = ui->spinBox_11->value()*finalpro_p;
        //Display calculated grade
        ui->score->setText(QString::number(hwscore+examscore+finalpro));

    }
    //Run Schema B
    else if(ui->radioButton_2->isChecked()){
        //schema values
        const int num_homeworks = 3;
        const double hw_p = 0.15;
        const double final_p = 0.50;
        const double finalpro_p = 0.35;
        //Acquire hw scores
        double hwscore =
                (ui->spinBox->value()+
                ui->spinBox_2->value()+
                ui->spinBox_3->value())*hw_p/num_homeworks;
        //Acquire exam scores
        double examscore = ui->spinBox_10->value()*final_p;
        //Acquire Final Project score
        double finalpro = ui->spinBox_11->value()*finalpro_p;
        //Display calculated grade
        ui->score->setText(QString::number(hwscore+examscore+finalpro));
    }
    else{}

}
