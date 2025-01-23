#include <stdio.h>
#define N 10

typedef struct data
{
    int giorno;
    char mese [15];
    int anno;
} data;

typedef struct persona
{
    char cognome [20];
    data nascita;
    int voti[N];
} persona;



int main()
{
    persona pippo, topolino;
    float cont=0, media=0;
    int anni=0;


    //pippo
    printf("inserisci il cognome: ");
    scanf("%s", pippo.cognome);

    printf("inserisci il giorno di nascita: ");
    scanf ("%d", &pippo.nascita.giorno);

    printf("inserisci il mese di nascita (con le lettere): ");
    scanf("%s", pippo.nascita.mese);

    printf("insersci l'anno di nascita: ");
    scanf("%d", &pippo.nascita.anno);

    printf("inserisci 10 voti:\n ");
    for(int i=0; i<N; i++)
    {
        scanf("%d", &pippo.voti[i]);
        cont += pippo.voti[i];
        media = cont/10;
    }

    anni = 2025 - pippo.nascita.anno;


    printf("COGNOME: %s\n", pippo.cognome);
    printf("DATA DI NASCITA: %d %s %d \n", pippo.nascita.giorno, pippo.nascita.mese, pippo.nascita.anno);
    printf("MEDIA: %.2f\n", media);

    printf("nel 2025 hai %d anni\n", anni);


    //topolino
     strcpy = topolino.cognome = "Rossi";

}