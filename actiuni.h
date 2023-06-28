#ifndef ACTIUNI_H
#define ACTIUNI_H

#include <QMainWindow>
#include "procese.h"
#include "copiere.h"
#include "instalare.h"
#include <QProcess>
namespace Ui {
class Actiuni;
}

class Actiuni : public QMainWindow
{
    Q_OBJECT

public:
    explicit Actiuni(QWidget *parent = 0);
    ~Actiuni();

private slots:
    void on_PROCESE_clicked();



    void on_ACTIUNI_clicked();

    void on_INSTALARE_clicked();

private:
    Ui::Actiuni *ui;
    Procese* proc;
    copiere* copii;
    Instalare* install;
};

#endif // ACTIUNI_H
