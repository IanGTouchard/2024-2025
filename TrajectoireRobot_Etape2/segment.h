#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"
#include "iomanip"
#include "iostream"
#include "vecteur.h"
#include <math.h>

using namespace std;

class Segment : public Element
{
public:
    Segment(const double _longueur, const double _angle, const double _vitesse);
    void Afficher();
    double ObtenirLongueur();
    double ObtenirDuree();
    Vecteur ObtenirVecteurArrivee();

protected:
    double longueur;
    double angle;
};

#endif // SEGMENT_H
