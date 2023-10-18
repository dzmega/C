#include <stdio.h>
#include <string.h>
#include "aufteilen.h"

main()
{
	FILE *datei;
	datei=fopen("ursprungsdatei.txt","r");
	FILE *kunden;
	kunden=fopen("kunden.txt","w");
	FILE *lieferanten;
	lieferanten=fopen("lieferanten.txt","w");
	FILE *mitarbeiter;
	mitarbeiter=fopen("mitarbeiter.txt","w");
	char alles[100];
	int kri;
	int alter;
	char wort1[50];
	char wort2[50];

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%i;%s",&kri,&alter,alles)==3)
		{
			aufteilen(alles,wort1,wort2);
			if(kri==1)
			{
				fprintf(kunden,"%s;%s;%i\n",wort2,wort1,alter);
			}
			if(kri==2)
			{
				fprintf(lieferanten,"%s;%s;%i\n",wort2,wort1,alter);
			}
			if(kri==3)
			{
				fprintf(mitarbeiter,"%s;%s;%i\n",wort2,wort1,alter);
			}
		}
	}
	fclose(datei);
	fclose(kunden);
	fclose(lieferanten);
	fclose(mitarbeiter);
}
