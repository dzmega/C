#include <stdio.h>
#include <string.h>
#include "aufteilen.h"
main()
{
	FILE *abteilung;
	abteilung=fopen("abteilung.csv","r");
	FILE *mitarbeiter;
	mitarbeiter=fopen("Mitarbeiter.csv","r");
	FILE *new;
	new=fopen("Auswertung.csv","w");
	int a;
	char wort1[50];
	char wort2[50];
	char alles[100];

	if(abteilung==NULL || mitarbeiter==NULL || new==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(mitarbeiter,"%i;%s",&a,alles)==2)
		{
			aufteilen(alles,wort1,wort2);
			if(a==0)
			{
				fprintf(new,"Abteilung Buchführung: %s %s\n",wort1,wort2);
			}
			if(a==1)
			{
				fprintf(new,"Abteilung Einkauf: %s %s\n",wort1,wort2);
			}
			if(a==2)
			{
				fprintf(new,"Abteilung Marketing: %s %s\n",wort1,wort2);
			}
			if(a==3)
			{
				fprintf(new,"Abteilung Produktion: %s %s\n",wort1,wort2);
			}
		}
	}
	fclose(abteilung);
	fclose(mitarbeiter);
	fclose(new);
}
