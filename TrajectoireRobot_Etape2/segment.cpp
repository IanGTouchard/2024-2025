#include "segment.h"


Segment::Segment(const double _longueur, const double _angle, const double _vitesse):
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher(){
    cout << "(" << numero << ")" << " SEGMENT L = " << longueur;
    cout << setw(12) << right << "A = " << setw(9) << left << angle;
    cout << setw(12) << right << "V = " << vitesse << endl;
}

double Segment::ObtenirLongueur()
{
    return longueur;
}

double Segment::ObtenirDuree()
{
    return longueur /vitesse;
}

Vecteur Segment::ObtenirVecteurArrivee()
{
    return Vecteur(longueur * cos(angle), longueur * sin(angle));
}
