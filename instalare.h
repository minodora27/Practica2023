#ifndef INSTALARE_H
#define INSTALARE_H

#include <QWidget>
#include <QProcess>
#include <QMessageBox>
namespace Ui {
class Instalare;
}

class Instalare : public QWidget
{
    Q_OBJECT

public:
    explicit Instalare(QWidget *parent = 0);
    ~Instalare();

private slots:
    void on_instalare_clicked();

    void on_dezinstalare_clicked();

private:
    Ui::Instalare *ui;
};

#endif // INSTALARE_H
