#include <stdio.h>
#include <string.h>
#include "aufteilen.h"
#include <stdlib.h>
void note(float prozent)
{
	if(prozent>=0 && prozent<=29)
	{
		printf("Note: Ungenügend (6)\n");
	}
	if(prozent>=30 && prozent<=49)
	{
		printf("Note: Mangelhaft (5)\n");
	}
	if(prozent>=50 && prozent <=66)
	{
		printf("Note: Ausreichend (4)\n");
	}
	if(prozent>=67 && prozent <=80)
	{
		printf("Note: Befriedigend (3)\n");
	}
	if(prozent>=81 && prozent <=91)
	{
		printf("Note: Gut (2)\n");
	}
	if(prozent>=92 && prozent<=100)
	{
		printf("Note: Sehr gut (1)\n");
	}
}

main()
{
	FILE *datei;
	datei=fopen("vokabel.txt","r");
	char eing[30];
	int modus;
	char englisch[30];
	char deutsch[30];
	char alles[100];
	int richtig=0;
	int z=0;
	float prozent=0;
	char deutscharray[20][50];
	char englischarray[20][50];
	int i=0;
	int j=0;
	int zufall;

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%s",alles)!=EOF)
		{
			aufteilen(alles,deutsch,englisch);
			strcpy(deutscharray[i],deutsch);
			strcpy(englischarray[i],englisch);
			i++;
		}
		printf("Wie soll die Abfrage ablaufen?\n");
		printf("(1): Deutsch -> Englisch\n");
		printf("(2): Englisch -> Deutsch\n");
		scanf("%i",&modus);
		while(j<10)
		{
			z++;
			srand(time(NULL));
			zufall=rand()%10;
			j++;
			if(modus==1)
			{
				printf("Gesuchtes Wort: %s\n",deutscharray[zufall]);
				printf("Bitte englisches Wort eingeben: ");
				scanf("%s",eing);
				if(strcmp(eing,englischarray[zufall])==0)
				{
					printf("Richtige Antwort!\n\n");
					richtig++;
				}
				else
				{
					printf("Leider falsch!\n");
					printf("Die richtige Antwort wäre: %s\n\n",englischarray[zufall]);
				}
			}
			if(modus==2)
			{
				printf("Gesuchtes Wort: %s\n",englisch);
				printf("Bitte deutsches Wort eingeben: ");
				scanf("%s",eing);
				if(strcmp(eing,deutsch)==0)
				{
					printf("Richtige Antwort!\n\n");
					richtig++;
				}
				else
				{
					printf("Leider falsch!\n");
					printf("Die richtige Antwort wäre: %s\n\n",deutsch);
				}
			}
		}
		prozent=(float)richtig/z*100;
		printf("Sie haben %2.f% richtig!\n",prozent);
		note(prozent);
	}
}
