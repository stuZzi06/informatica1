#include <iostream>

class Nodo 
{
    public:
        int valore;
        Nodo* next;
};

class Lista 
{
    private:
        Nodo* testa;

    public: 
    Lista() 
    {
        testa = nullptr;
    }    
    //aggiunge un nodo in testa
    void aggiungiTesta(int valore) 
    {
        Nodo* nuovoNodo = new Nodo();

        nuovoNodo->valore = valore;
        nuovoNodo->next = testa;

        testa = nuovoNodo;
    }
    //aggiunge un nodo in coda 
    void aggiungiCoda(int valore) 
    {
        Nodo* nuovoNodo = new Nodo();
        Nodo* temp = testa;

        nuovoNodo->valore = valore;
        nuovoNodo->next = nullptr;

        if (testa == nullptr) 
        {
            testa = nuovoNodo;
        } 
        else 
        {
            while (temp->next != nullptr) 
            {
                temp = temp->next;
            }

            temp->next = nuovoNodo;
        }
    }
};