/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *verticalSlider;
    QTextEdit *textEdit_L;
    QSlider *verticalSlider_R;
    QTextEdit *textEdit_R;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(60, 20, 19, 160));
        verticalSlider->setSingleStep(1);
        verticalSlider->setPageStep(1);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);
        verticalSlider->setTickInterval(10);
        textEdit_L = new QTextEdit(centralWidget);
        textEdit_L->setObjectName(QStringLiteral("textEdit_L"));
        textEdit_L->setGeometry(QRect(90, 30, 91, 21));
        verticalSlider_R = new QSlider(centralWidget);
        verticalSlider_R->setObjectName(QStringLiteral("verticalSlider_R"));
        verticalSlider_R->setGeometry(QRect(260, 10, 19, 160));
        verticalSlider_R->setSingleStep(1);
        verticalSlider_R->setPageStep(1);
        verticalSlider_R->setOrientation(Qt::Vertical);
        verticalSlider_R->setTickPosition(QSlider::TicksBothSides);
        verticalSlider_R->setTickInterval(10);
        textEdit_R = new QTextEdit(centralWidget);
        textEdit_R->setObjectName(QStringLiteral("textEdit_R"));
        textEdit_R->setGeometry(QRect(300, 30, 91, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
