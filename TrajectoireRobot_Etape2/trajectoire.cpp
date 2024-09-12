#include "trajectoire.h"

Trajectoire::Trajectoire(const int _nbEtapesMax, const Vecteur _depart):
    nbEtapesMax(_nbEtapesMax),
    prochaineEtape(0),
    depart(_depart)
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
    if(prochaineEtape < nbEtapesMax){
        parcours[prochaineEtape++] = _pElement;
        parcours[prochaineEtape - 1] -> setNumero(prochaineEtape);
    }
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    Vecteur vecteurTotal;

    double longueurTotal = 0.0;
    double dureeTotale = 0.0;

    cout << "trajectoire : " << endl << endl;
    
    vecteurTotal = depart;

    for (int indice = 0 ; indice < nbEtapesMax; ++indice)
    {
        parcours[indice]->Afficher();
        vecteurTotal += parcours[indice]->ObtenirVecteurArrivee();
        cout << "Vecteur en " << vecteurTotal << endl;

        longueurTotal += parcours[indice]->ObtenirLongueur();
        dureeTotale += parcours[indice]->ObtenirDuree();
    }
    cout << endl;

    cout << "Durée totale du parcours = " << dureeTotale << endl;
    cout << "Longueur total du parcours = " << longueurTotal << endl;

    cout << "Vecteur de départ = " << depart << endl;
    cout << "Vecteur d'arrivée = " << vecteurTotal << endl;

    cout << endl;
}
