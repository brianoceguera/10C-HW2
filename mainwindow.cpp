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
    //PIC 10C Calculate
    if(ui->comboBox->currentIndex() == 0){
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

    //PIC 10B Calculate
    if(ui->comboBox->currentIndex() == 1){
        //Run Schema A
        if(ui->radioButton->isChecked()){
            //schema values
            const int num_homeworks = 7;
            const double hw_p = 0.25;
            const double mt1_p = 0.20;
            const double mt2_p = 0.20;
            const double final_p = 0.35;
            //Acquire hw scores
            double hwscore =
                    (ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                    ui->spinBox_4->value()+
                    ui->spinBox_5->value()+
                    ui->spinBox_6->value()+
                    ui->spinBox_7->value())*hw_p/num_homeworks;
            //Acquire exam scores
            double mt1score = ui->spinBox_8->value()*mt1_p;
            double mt2score = ui->spinBox_10->value()*mt2_p;
            double finalscore = ui->spinBox_11->value()*final_p;
            //Display calculated grade
            ui->score->setText(QString::number(hwscore+mt1score+mt2score+finalscore));

        }
        //Run Schema B
        else if(ui->radioButton_2->isChecked()){
            //schema values
            const int num_homeworks = 7;
            const double hw_p = 0.25;
            const double mt1_p = 0.30;
            const double final_p = 0.44;
            //Acquire hw scores
            double hwscore =
                    (ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                    ui->spinBox_4->value()+
                    ui->spinBox_5->value()+
                    ui->spinBox_6->value()+
                    ui->spinBox_7->value())*hw_p/num_homeworks;
            //Acquire exam scores
            //Acquire exam scores
            double mt1score = ui->spinBox_8->value()*mt1_p;
            double finalscore = ui->spinBox_11->value()*final_p;
            //Display calculated grade
            ui->score->setText(QString::number(hwscore+mt1score+finalscore));
        }
        else{}
    }
}
