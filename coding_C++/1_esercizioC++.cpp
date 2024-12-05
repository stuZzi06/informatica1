#include <iostream>

using namespace std;

class Rettangolo
{
    private:
        double base;
        double altezza;

    public:
        void setAltezza(double a)
        {
            altezza = a;
        }
        void setBase(double b)
        {
            base = b;
        }
        double calcolaPerimetro()
        {
            double perimetro;

            perimetro = base*altezza;

            return perimetro;

        }
        double calcolaArea()
        {
            double area;

            area = 2*(base*altezza);

            return area;

        }
        void stampa()
        {
            cout << "Base: " << base << endl;
            cout << "Altezza: " << altezza << endl; 
            cout << "Perimetro: " << calcolaPerimetro() << endl; 
            cout << "Area: " << calcolaArea() << endl;
        }
};

int main()
{
    Rettangolo r1;
    Rettangolo r2;

    double a, b;

    cout << "inserisci l'altezza" << endl;
    cin >> a;
    r1.setAltezza(a);

    cout << "inserisci la base" << endl;
    cin >> b;
    r1.setBase(b);

    r1.stampa();

}