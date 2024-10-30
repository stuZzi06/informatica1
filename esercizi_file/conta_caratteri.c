#include "stdio.h"

int main()
{

	FILE*File_in = fopen("file_in.txt", "r");
	FILE*File_out = fopen("file_out.txt", "w");

	if(File_in == NULL || File_out == NULL)
	{
		printf("il file non puo essere aperto");
	}

	int contL = 0;
	int contR = 0;
	int contP = 0;
	
	char buffer[100];
	while (fgets(buffer, 100, File_in) != NULL) 
	{
		
		for(int i = 0; buffer[i] != '\0'; i++)
		{
			char c = buffer[i];

			if(c == ' ' || c == '\t' || c == '\n')
			{
				contP++;
			}
			
			if(c != ' ' && c != '\t' && c != '\n')
			{
				contL++;
			}
			
		}

		contR++;

    }

	printf("le lettere sono:%d\n", contL);
	printf("le parole sono:%d\n", contP);
	printf("le righe sono:%d\n", contR);


	fclose(File_in);
	fclose(File_out);

	return 0;
}

