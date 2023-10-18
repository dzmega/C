#include <stdio.h>
main()
{
	char matrix[16][26];
	int z,s;
	int reihe;
	int spalte;
	int eing;

	for(z=0;z<16;z++)
	{
		for(s=0;s<26;s++)
		{
			matrix[z][s]='o';
		}
	}

	do
	{
		for(z=1;z<16;z++)
		{
			printf("Reihe %2i: ",z);
			for(s=1;s<26;s++)
			{
				printf("%c ",matrix[z][s]);
			}
			printf("\n");
		}
	
		printf("\n");
		printf("Welche Reihe?");
		scanf("%i",&reihe);
		printf("Welche Spalte?");
		scanf("%i",&spalte);

		if(matrix[z][s]=='x')
		{
			printf("Platz bereits belegt\n");
		}
		else
		{
			matrix[reihe][spalte]='x';
		}
	
		printf("Möchten Sie ein weiteres Ticket kaufen?");
		printf("1=JA 0=NEIN\n");
		scanf("%i",&eing);

	}while(eing==1);
}	
