/********************************************************************************
** Form generated from reading UI file 'graficadora.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICADORA_H
#define UI_GRAFICADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Graficadora
{
public:
    QWidget *centralWidget;
    QVTKWidget *qvtkWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Graficadora)
    {
        if (Graficadora->objectName().isEmpty())
            Graficadora->setObjectName(QStringLiteral("Graficadora"));
        Graficadora->resize(851, 561);
        centralWidget = new QWidget(Graficadora);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(10, 40, 501, 341));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 390, 67, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 390, 351, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 460, 81, 27));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(535, 10, 311, 471));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 10, 331, 17));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Mono L"));
        font.setPointSize(17);
        label_3->setFont(font);
        Graficadora->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Graficadora);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 851, 25));
        Graficadora->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Graficadora);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Graficadora->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Graficadora);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Graficadora->setStatusBar(statusBar);

        retranslateUi(Graficadora);

        QMetaObject::connectSlotsByName(Graficadora);
    } // setupUi

    void retranslateUi(QMainWindow *Graficadora)
    {
        Graficadora->setWindowTitle(QApplication::translate("Graficadora", "Graficadora", 0));
        label->setText(QApplication::translate("Graficadora", "Ingresar", 0));
        pushButton->setText(QApplication::translate("Graficadora", "Graficar", 0));
        label_3->setText(QApplication::translate("Graficadora", "GRAFICADOR DE FUNCIONES", 0));
    } // retranslateUi

};

namespace Ui {
    class Graficadora: public Ui_Graficadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICADORA_H
