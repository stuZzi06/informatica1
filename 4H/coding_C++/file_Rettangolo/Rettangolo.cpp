#include <iostream>
#include <cmath>
#include "Rettangolo.h"

using namespace std;

 void Rettangolo :: setBase(double base)
{
    this -> base = base;
}
void Rettangolo :: setAltezza(double altezza)
{
    this -> altezza = altezza;
}
double Rettangolo::getBase()
{
    return base;
}
double Rettangolo::getAltezza()
{
    return altezza;
}
double Rettangolo::calcolaPerimetro()
{
    double perimetro;
    this -> perimetro = 2*(base+altezza);

    return this->perimetro;
}

double Rettangolo::calcolaArea()
{
    double area;
    this -> area = base*altezza;
    return this->area;
}

double Rettangolo::calcoloDiagonale()
{
    double diagonale;
    this-> diagonale = sqrt((base*base)+(altezza*altezza));
    return this-> diagonale;
}

Rettangolo::Rettangolo()
{
    base = 0;
    altezza = 0;
}

Rettangolo::Rettangolo(double b, double a)
{
    base = b;
    altezza = a;
}

Rettangolo::Rettangolo(double b)
{
    base = b;
    altezza = b;
}

void Rettangolo::stampa() 
{
    cout << "Base: " << base << endl;
    cout << "Altezza: " << altezza << endl;
    cout << "Perimetro: " << calcolaPerimetro() << endl;
    cout << "Area: " << calcolaArea() << endl;
    cout << "Diagonale: " << calcoloDiagonale() << endl;
}

