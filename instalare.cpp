#include "instalare.h"
#include "ui_instalare.h"

Instalare::Instalare(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Instalare)
{
    ui->setupUi(this);
     setWindowTitle("Instalare");
}

Instalare::~Instalare()
{
    delete ui;
}

void Instalare::on_instalare_clicked()
{
    QString argument = ui->denumire->text();
    QString parola = ui->parola->text();

    QProcess process;
    process.setProgram("sudo");
    process.setArguments({"-S","apt-get", "install","-y", argument});


    connect(&process, &QProcess::readyReadStandardError, [&process]() {
        QByteArray errorOutput = process.readAllStandardError();

    });

    process.start();
    process.write(parola.toUtf8() + '\n');
    process.closeWriteChannel();
    process.waitForFinished(-1);
    QMessageBox::information(nullptr, "Succes", "Instalarea s-a făcut cu succes!");
}

void Instalare::on_dezinstalare_clicked()
{
    QString argument = ui->denumire->text();
    QString parola = ui->parola->text();

    QProcess process;
    process.setProgram("sudo");
    process.setArguments({"-S", "apt-get", "remove","-y", argument});


    connect(&process, &QProcess::readyReadStandardError, [&process]() {
        QByteArray errorOutput = process.readAllStandardError();

    });

    process.start();
    process.write(parola.toUtf8() + '\n');
    process.closeWriteChannel();
    process.waitForFinished(-1);
    QMessageBox::information(nullptr, "Succes", "Dezinstalarea s-a făcut cu succes!");

}
