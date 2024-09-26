#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
    ~DetecteurTemporise();
private:
    QTimer timerIntru;
private slots:
    void on_pushButtonIntrus_clicked();
    void onPushButton_timeout();
};

#endif // DETECTEURTEMPORISE_H
