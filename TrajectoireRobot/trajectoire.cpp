#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMax):
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0)
{
    parcours = new Element *[nbEtapesMax];
}

Trajectoire::~Trajectoire()
{
    for (int indice = 0; indice < prochaineEtape; ++indice)
    {
        delete parcours[indice];
    }

    delete[] parcours;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if(prochaineEtape < nbEtapesMax)
        parcours[prochaineEtape++] = _pElement;
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl << endl;

    for(int indice = 0; indice < nbEtapesMax; ++indice)
    {
        parcours[indice] -> Afficher();
    }
    cout << endl;
}
