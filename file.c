#include "stdio.h"

int main()
{

	FILE*file1 = fopen("file.txt", "r");
	FILE*file2 = fopen("copia.txt", "w");

	if(file1 == NULL || file2 == NULL)
	{
		printf("il file non puo essere aperto");
	}

	int contL = 0;
	int contR = 0;
	int contP = 0;
	
	char buffer[100];
	while (fgets(buffer, 100, file1) != NULL) 
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


	fclose(file1);
	fclose(file2);

	return 0;
}

