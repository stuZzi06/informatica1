#include "stdlib.h"
#include "iostream"                  

struct s_nodo
{
    int info;
    s_nodo *next;
};

typedef struct s_nodo *nodo;


int main()
{
    nodo *p; 
    nodo *q;
    p = new nodo;
    scanf("%d", p->info);
    p->next = NULL;
    q = new nodo;
    q = info = 50;
    q->next = NULL;
    p->next = q;
    
}