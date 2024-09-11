#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"
#include "iomanip"
#include "iostream"

using namespace std;

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle);
    virtual void Afficher();
private:
    double longueur;
    double angle;
};

#endif // SEGMENT_H
