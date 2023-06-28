#include "copiere.h"
#include "ui_copiere.h"

copiere::copiere(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::copiere)
{
    ui->setupUi(this);
    setWindowTitle("Copiere");
}

copiere::~copiere()
{
    delete ui;
}


void copiere::on_copiere_2_clicked()
{
    QString sursa=ui->sursa->text();
    QString destinatie=ui->destinatie->text();
    QProcess::execute(QString("cp %1 %2").arg(sursa,destinatie));
     QMessageBox::information(nullptr, "Succes", "Copierea s-a făcut cu succes!");
    ui->sursa->clear();
    ui->destinatie->clear();
}
