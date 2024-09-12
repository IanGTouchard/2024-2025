#ifndef VECTEUR_H
#define VECTEUR_H

#include <string>
#include <iostream>

using namespace std;

class Vecteur
{
public:
    Vecteur(const double _x = 0 , const double _y = 0);

    Vecteur operator+ (const Vecteur &_autre);
    Vecteur operator- (const Vecteur &_autre);
    Vecteur &operator +=(const Vecteur &_autre);
    Vecteur &operator -=(const Vecteur &_autre);

    void Afficher();

    double getX() const;
    void setX(const double _X);

    int getY() const;
    void setY(const double _Y);

private:
    double x;
    double y;
    friend ostream& operator<<(ostream& out, const Vecteur &vecteur);
};

#endif // VECTEUR_H
