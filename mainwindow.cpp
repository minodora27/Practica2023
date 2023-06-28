#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    this->setFixedSize(800,400);

    ui->setupUi(this);
    setWindowTitle("Aplicatie");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Monitorizare_clicked()
{

    mon=new Monitorizare();
    mon->show();
}

void MainWindow::on_Actiuni_clicked()
{
    act=new Actiuni();
    act->show();
}
