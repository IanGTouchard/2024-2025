#include "Emballage.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{


    Emballage colis1("XS",1,270,190);
    colis1.Visualiser();
    Emballage *pColis;
    Emballage *tabColis[5];

    string format;
    int resistance;
    int largeur;
    int longueur;
    int hauteur;

    for (int var = 0; var < 2; ++var){

        cout << "Nom du format : ";
        getline(cin, format);
        cout << "Resistance max : ";
        cin >> resistance;
        cout << "longueur : ";
        cin >> longueur;
        cout << "largeur : ";
        cin >> largeur;
        cout << "hauteur : ";
        cin >> hauteur;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        tabColis[var] = new Emballage(format, resistance, largeur, longueur, hauteur);
    }
    cout << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(18) << "+" << setfill('-') << endl;
    cout << "| Format        | Resistance      | Dimensions      |" << endl;
    cout << "+" << setfill('-') << setw(16) << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(18) << "+" << setfill('-') << endl;


    for (int indice = 0; indice < 2; ++indice){
        tabColis[indice]->Visualiser();
    }

    // pColis = new Emballage("XL", 7, 383, 250, 195);
    // pColis->Visualiser();
    // delete pColis;
    cout << "+---------------+-----------------+-----------------+" << endl;

    if(*tabColis[0] < *tabColis[1]){
        cout << "tabColis[0] est plus petit que tabColis[1]" << endl;
    }else{
        cout << "tabColis[1] est plus petit que tabColis[0]" << endl;
    }


    return 0;
}
