#include "detecteurtemporise.h"
#include <QTimer>
#include <QMessageBox>

DetecteurTemporise::DetecteurTemporise() {
    connect(&timerIntru,&QTimer::timeout,this,&DetecteurTemporise::onPushButton_timeout);
}

DetecteurTemporise::~DetecteurTemporise(){
    timerIntru.stop();
}

void DetecteurTemporise::on_pushButtonIntrus_clicked()
{
    timerIntru.start(3000);
}


void DetecteurTemporise::onPushButton_timeout(){
    timerIntru.stop();
    QMessageBox messageIntrus;
    messageIntrus.setText("3s passé, intrusion Detecte");
    messageIntrus.exec();
}
