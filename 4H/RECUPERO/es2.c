#include "stdio.h"
#include "string.h"
#define N 10


typedef struct Persona
{
    char cognome[20];
    int voti[N];
} Persona;


void carica (Persona st[]);
void stampa(Persona St[]);
int visualizzaMedia(Persona St[ ], char cog[ ]);
int votoMassimo(Persona St[]); 
int indiceVotoMassimo (Persona St[]);

int main()
{

}

void carica (Persona st[])
{
    int cont = 0, media;

    printf("inserisci il cognome: ");
    scanf("%s", st[0].cognome);

    printf("inserisci 10 voti:\n ");
    for(int i=0; i<N; i++)
    {
        scanf("%d", &st[0].voti[i]);
        cont += st[0].voti[i];
    }
    media = cont/N;
}

void stampa(Persona St[])
{
    int media = 0;
    for(int i=0; i<N; i++)
    {
        media += St[0].voti[i];
    }
    media /= N;

    printf("cognome: %s\n", St[0].cognome);
    printf("voti: ");
    for(int i=0; i<N; i++)
    {
        printf("%d ", St[0].voti[i]);
    }
    printf("\n");
    printf("media: %d\n", media);
    printf("voto massimo: %d\n", votoMassimo(St));
    printf("indice del voto massimo: %d\n", indiceVotoMassimo(St));
    printf("media: %d\n", visualizzaMedia(St, St[0].cognome));
}

