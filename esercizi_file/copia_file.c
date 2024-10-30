#include "stdio.h"

int main()
{
    FILE* File_in = fopen("file_in.txt", "r");
    FILE* File_out = fopen("file_out.txt", "w");

    if (File_in == NULL || File_out == NULL)
    {
        printf("il file non puo essere aperto");
    }

    // serve per copiare il file
    char riga[100];
    while (fgets(riga, sizeof(riga), File_in) != NULL)
    {
        fputs(riga, File_out);
    }

    fclose(File_in);
    fclose(File_out);

    printf("\n");
    return 0;
}
