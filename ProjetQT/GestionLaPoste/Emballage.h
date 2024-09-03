#ifndef EMBALLAGE_H
#define EMBALLAGE_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>


using namespace std;


class Emballage
{
public:
    Emballage(const string _format, const int _resistance, const int _largeur, const int _longueur, const int _hauteur=0);
    ~Emballage();
    void Visualiser();
    bool operator < (Emballage &autre);
    bool operator == (Emballage &autre);
    operator float();
    double calculerVolume();

private:
    string format;
    int resistance;
    int largeur;
    int longueur;
    int hauteur;
    int stock;
};

#endif // EMBALLAGE_H
