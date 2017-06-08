#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList newStr;
    newStr << "cbb1: 1" << "cbb1: 2" << "cbb1: 3" << "cbb1: 4";
    void(QComboBox::*fp)(int) = &QComboBox::currentIndexChanged;//通过函数指针指明重载函数
    //推荐写法:
//    QObject::connect(ui->cbb1,
//                     static_cast< void(QComboBox::*)(int)> (&QComboBox::currentIndexChanged),
//                     this,
//                     &MainWindow::cbbSelected_index);
    QObject::connect(ui->cbb1, fp, this, &MainWindow::cbbSelected_index);
    QObject::connect(ui->cbb2, fp, this, &MainWindow::cbbSelected_index);
    QObject::connect(ui->cbb3, fp, this, &MainWindow::cbbSelected_index);
    ui->cbb1->addItems(newStr);
    newStr.clear();

    newStr << "cbb2: 1" << "cbb2: 2" << "cbb2: 3" << "cbb2: 4";
    ui->cbb2->addItems(newStr);
    newStr.clear();

    newStr << "cbb3: 1" << "cbb3: 2" << "cbb3: 3" << "cbb3: 4";
    ui->cbb3->addItems(newStr);
    newStr.clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//combobox的slot函数
void MainWindow::cbbSelected_index(int index)
{;
    QComboBox *cbb = dynamic_cast<QComboBox *>(sender());
    qDebug() << "select value is : "<< cbb->itemText(index);
    ui->label->setText(cbb->itemText(index));
}
