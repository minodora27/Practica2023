#include "procese.h"
#include "ui_procese.h"



QString executeComman(const QString& command) {
    QProcess process;
    process.start(command);
    process.waitForFinished();
    return process.readAllStandardOutput();
}


Procese::Procese(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Procese)
{

    ui->setupUi(this);
    setWindowTitle("Procese");

    QString processInfo = executeComman("ps -A");
    ui->procesele->appendPlainText("Procese:\n"+processInfo);


}

Procese::~Procese()
{
    delete ui;
}

void Procese::on_inchide_clicked()
{
    QString denumire_pid= ui->nume->text();

    QRegExp regex("[a-zA-Z]");
    bool containsLetters = denumire_pid.contains(regex);

    if (containsLetters) {
      QProcess::execute(QString("pkill %1").arg(denumire_pid));
    } else {
        int pid=denumire_pid.toInt();
      QProcess::execute(QString("kill %1").arg(denumire_pid));
    }
    QMessageBox::information(nullptr, "Succes", "Procesul a fost inchis cu succes!");
    ui->nume->clear();
}

void Procese::on_porneste_clicked()
{
    QString process= ui->nume->text();

    QProcess::execute(QString("%1").arg(process));
    ui->nume->clear();
}
