#ifndef COPIERE_H
#define COPIERE_H

#include <QWidget>
#include <QProcess>
#include <QMessageBox>
namespace Ui {
class copiere;
}

class copiere : public QWidget
{
    Q_OBJECT

public:
    explicit copiere(QWidget *parent = 0);
    ~copiere();

private slots:


    void on_copiere_2_clicked();

private:
    Ui::copiere *ui;
};

#endif // COPIERE_H
