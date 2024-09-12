#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

#include "element.h"
#include "vecteur.h"
#include <iostream>

using namespace std;

class Trajectoire
{
public:
    Trajectoire(const int _nbEtapesMax, const Vecteur _depart);

    ~Trajectoire();
    bool Ajouter(Element *_pElement);
    void Afficher();
private:
    int nbEtapesMax;
    int prochaineEtape;
    Element **parcours;
    Vecteur depart;
};

#endif // TRAJECTOIRE_H
