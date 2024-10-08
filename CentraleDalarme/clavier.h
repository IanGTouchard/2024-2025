#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>
#include <QMessageBox>
#include <QString>
#include <QCheckBox>
#include <QTimer>
#include "detecteur.h"
#include "detecteurtemporise.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Clavier;
}
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    Clavier(QWidget *parent = nullptr);
    ~Clavier();

private slots:
    void on_pushButton_Marche_clicked();
    void TraiterChiffre();
    void on_pushButton_Arret_clicked();
    void onTimerLed_timeout();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
    Detecteur *leDetecteur;
    DetecteurTemporise *leDetecteurTempo;
};
#endif // CLAVIER_H
