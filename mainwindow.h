#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "monitorizare.h"
#include "actiuni.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Monitorizare_clicked();

    void on_Actiuni_clicked();

private:
    Ui::MainWindow *ui;
    Monitorizare *mon;
    Actiuni *act;
};

#endif // MAINWINDOW_H
