#include "stdio.h"

int main()
{
    FILE* File_in = fopen("file_in.txt", "r");
    FILE* File_out = fopen("file_out.txt", "w");

    if (File_in == NULL || File_out == NULL)
    {
        printf("il file non puo essere aperto");
    }

    char riga[100];
    while (fgets(riga, sizeof(riga), File_in) != NULL)
    {
        for (int i = 0; i < 100; i++)
        {
            if (riga[i] >= 'a' && riga[i] <= 'z')
            {
                riga[i] = riga[i] - 32;
            }
        }
        fputs(riga, File_out);
    }

    fclose(File_in);
    fclose(File_out);

    return 0;
}
