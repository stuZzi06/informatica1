#include "stdio.h"

int main()
{
    FILE* File_in = fopen("file_in.txt", "r");

    if (File_in == NULL)
    {
        printf("il file non puo essere aperto");
    }

    // serve per stampare il file
    char riga[100];
    while (fgets(riga, sizeof(riga),File_in) != NULL)
    {
        printf("%s", riga);
    }

    fclose(File_in);

    printf("\n");
    return 0;
}