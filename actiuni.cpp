#include "actiuni.h"
#include "ui_actiuni.h"
#include <QHBoxLayout>
#include <QProcess>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>

Actiuni::Actiuni(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Actiuni)
{
    ui->setupUi(this);
    setWindowTitle("Actiuni");
}

Actiuni::~Actiuni()
{
    delete ui;
}

void Actiuni::on_PROCESE_clicked()
{
    proc=new Procese();
    proc->show();

}



void Actiuni::on_ACTIUNI_clicked()
{
    copii=new copiere();
    copii->show();
}

void Actiuni::on_INSTALARE_clicked()
{
    install=new Instalare();
    install->show();
}
