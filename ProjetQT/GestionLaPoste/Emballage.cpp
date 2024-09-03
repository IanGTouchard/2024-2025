#include "Emballage.h"

Emballage::Emballage(const string _format, const int _resistance, const int _largeur, const int _longueur, const int _hauteur):
    format(_format),
    resistance(_resistance),
    largeur(_largeur),
    longueur(_longueur),
    hauteur(_hauteur),
    stock(0)
{
    //cout << "constructeur : Emballage : " << format << endl;

}


Emballage::~Emballage()
{

}

/*void Emballage::Visualiser()
{
    //cout << "| " << format << " | " << resistance << " Kg" << " | " << longueur << " X " << largeur << " |" << endl;
    cout << "| " << left << setfill(' ') << setw(12) << format << "| " << left << setfill(' ') << setw (16) << resistance << "| " << left << left << setfill(' ') << setw (3) << longueur << " X " << setw (3) << largeur ;
    if (hauteur > 0 )
        cout << " X " << setw (5) << hauteur;
    else cout << setw (8) << " ";
    cout << " | " << endl;
    //cout     << "| " << format << " | " << resistance << " Kg" << " | " << longueur << " X " << largeur << " X " << hauteur << " |" << endl;

}*/


void Emballage::Visualiser()
{
    cout << "| " << setfill(' ');
    cout << setw(13) << left << format ;
    cout << " | ";
    cout << left << resistance << " Kg" << setw(14);
    cout << right << " | ";
    cout << setw(3) << longueur << " X " << setw(3) << largeur;
    if (hauteur > 0)
        cout << " X " << setw (3)<< hauteur;
    else cout << setw(6) << " ";
    cout<<" | " << endl;


}

bool Emballage::operator <(Emballage &autre)
{
    return calculerVolume() < autre.calculerVolume();
}

double Emballage::calculerVolume()
{
    int volume = largeur * longueur;
    if (hauteur > 0){
        volume *= hauteur;
    }

    double volumeCM3 = volume / 1000.0;

    return volumeCM3;
}

bool Emballage::operator ==(Emballage &autre)
{
    return( longueur == autre.longueur && largeur == autre.largeur && hauteur == autre.hauteur && resistance == autre.resistance);
}

Emballage::operator float()
{
    return CalculerVolume();
}
