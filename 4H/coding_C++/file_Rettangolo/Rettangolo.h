#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo 
{
    private:
        double base;
        double altezza;
        double perimetro;
        double area;
        double diagonale;

    public:
        double getBase();
        double getAltezza();
        double calcolaPerimetro();
        double calcolaArea();
        double calcoloDiagonale();
        void setBase(double);
        void setAltezza(double);
        void stampa();

        // COSTRUTTORI
        Rettangolo();
        Rettangolo(double, double);
        Rettangolo(double);
};
 
#endif
