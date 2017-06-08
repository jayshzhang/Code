#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList header;
    header << "first" << "second" << "third";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    ui->tableWidget->horizontalHeader()->setVisible(true);
    for(int i = 0; i < 3; i++ )
    {
        QStringList newStr;
        newStr << "cbb1: 1" << "cbb1: 2" << "cbb1: 3" << "cbb1: 4";
        QComboBox *initCbb =  new QComboBox;
        initCbb->addItems(newStr);
        ui->tableWidget->setCellWidget(i,1, initCbb);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
