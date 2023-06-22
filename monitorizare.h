#ifndef MONITORIZARE_H
#define MONITORIZARE_H

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QProcess>

namespace Ui {
class Monitorizare;
}

class Monitorizare : public QMainWindow
{
    Q_OBJECT

public:
    explicit Monitorizare(QWidget *parent = 0);
    ~Monitorizare();

private slots:

    void on_RAM_clicked();

    void on_CPU_clicked();

    void on_IO_clicked();

    void on_TEMP_clicked();
    void newInfo(QLabel * info);

private:
    Ui::Monitorizare *ui;
    QWidget* window;
    QVBoxLayout* layout ;

    QScrollArea* scrollArea;
    QWidget* scrollContent ;
    QVBoxLayout* scrollLayout ;

    QLabel* ramLabel ;
    QLabel* cpuLabel;
    QLabel* ioLabel;
    QLabel* temperatureLabel;
    QLabel* userLabel;
    QLabel* servicesLabel;
    QLabel* hardwareLabel;

};

#endif // MONITORIZARE_H
