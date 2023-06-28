#ifndef PROCESE_H
#define PROCESE_H

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QProcess>
#include "monitorizare.h"
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Procese;
}

class Procese : public QDialog
{
    Q_OBJECT

public:
    explicit Procese(QWidget *parent = 0);
    ~Procese();

private slots:


    void on_inchide_clicked();

    void on_porneste_clicked();

private:
    Ui::Procese *ui;
    QWidget* window;
    QVBoxLayout* layout ;

    QScrollArea* scrollArea;
    QWidget* scrollContent ;
    QVBoxLayout* scrollLayout ;

    QLabel* processLabel ;
};

#endif // PROCESE_H
