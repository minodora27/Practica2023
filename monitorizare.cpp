#include "monitorizare.h"
#include "ui_monitorizare.h"

QString executeCommand(const QString& command) {
    QProcess process;
    process.start(command);
    process.waitForFinished();
    return process.readAllStandardOutput();
}


Monitorizare::Monitorizare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Monitorizare)
{

    ui->setupUi(this);

    setWindowTitle("Monitorizare");


ramLabel = new QLabel();
cpuLabel = new QLabel();
 ioLabel = new QLabel();
temperatureLabel = new QLabel();
userLabel = new QLabel();
servicesLabel = new QLabel();
 hardwareLabel = new QLabel();




    QString userInfo = executeCommand("who");
    QString servicesInfo = executeCommand("systemctl list-units --type=service --state=running");
    QString hardwareInfo = executeCommand("lshw");
}

Monitorizare::~Monitorizare()
{
    delete ui;
}


void Monitorizare::on_RAM_clicked()
{

 QString ramInfo = executeCommand("free -m");
 ramLabel->setText("Informații RAM:\n" + ramInfo);
newInfo(ramLabel);
}

void Monitorizare::on_CPU_clicked()
{  QString cpuInfo = executeCommand("lscpu");
 cpuLabel->setText("Informații CPU:\n" + cpuInfo);
newInfo(cpuLabel);
}

void Monitorizare::on_IO_clicked()
{ QString ioInfo = executeCommand("iostat");
   ioLabel->setText("Informații I/O:\n" + ioInfo);
newInfo(ioLabel);
}

void Monitorizare::on_TEMP_clicked()
{ QString temperatureInfo = executeCommand("sensors");
     temperatureLabel->setText("Informații temperatură:\n" + temperatureInfo);
newInfo(temperatureLabel);

}

void Monitorizare::newInfo(QLabel *info)
{
    window = new QWidget();
   layout = new QVBoxLayout(window);
   scrollArea = new QScrollArea();
   scrollContent = new QWidget();
   scrollLayout = new QVBoxLayout(scrollContent);
     scrollLayout->addWidget(info);
     scrollArea->setWidget(scrollContent);
     scrollArea->setWidgetResizable(true);

     layout->addWidget(scrollArea);

     window->show();

}
