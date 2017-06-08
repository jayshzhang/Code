#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSlider>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //valueChanged: 当值改变的时候就调用一次
    //sliderReleased:当slider松开的时候调用一次
    //倘若一直滑动只取最后出现的值，使用sliderReleased

    QObject::connect(ui->verticalSlider, &QSlider::valueChanged, this, &MainWindow::doSth);
    QObject::connect(ui->verticalSlider_R,&QSlider::sliderReleased,this,&MainWindow::doSth);
    ui->verticalSlider->setValue(5);
    ui->verticalSlider->setMinimum(1);
    ui->verticalSlider->setMaximum(10);
    ui->verticalSlider->setSingleStep(1);
    //ui->verticalSlider->setRange(20,60);//设置范围为20~60
    ui->verticalSlider->setTickInterval(1);//设置刻度间隔，绘制刻度线的数目
    //ui->verticalSlider->setPageStep(10);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSth()
{
    int position = ui->verticalSlider->value();
    QString str = QString("%1").arg(position);
    ui->textEdit_L->setText(str);

    int pos_R = ui->verticalSlider_R->value();
    QString str_R = QString("%1").arg(pos_R);
    ui->textEdit_R->setText(str_R);
}
