#include <stdio.h>
#include "aufteilen.h"

main()
{
	FILE *datei;
	datei=fopen("namen.txt","r");
	char gesamtstring[100];
	char wort1[50];
	char wort2[50];

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%s",gesamtstring)==1)
		{
			aufteilen(gesamtstring,wort1,wort2);
			printf("%s %s\n",wort1,wort2);
		}
	}
	fclose(datei);
}
