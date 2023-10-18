#include <stdio.h>
#include "aufteilen.h"
struct tier
{
	int nummer;
	int geburtsjahr;
	int geschlecht;
	char besitzer[50];
	char name[50];
};
main()
{
	FILE *kartei;
	kartei=fopen("tierkartei.txt","r");
	struct tier ein[5];
	char alles[100];
	int i=0;
	char art[5][20]={{"Katze"},{"Hund"},{"Fisch"},{"Nagetier"},{"Pferd"}};
	char test[2][20]={{"weiblich"},{"männlich"}};
	

	if(kartei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(kartei,"%i;%i;%i;%s",&ein[i].nummer,&ein[i].geburtsjahr,&ein[i].geschlecht,alles)!=EOF)
		{
			aufteilen(alles,ein[i].besitzer,ein[i].name);
			printf("Herr/Frau %s besitzt das Tier %s. Es ist ein(e) %s %s. Geburtsjahr: %i\n",ein[i].besitzer,ein[i].name,test[ein[i].geschlecht],art[ein[i].nummer],ein[i].geburtsjahr);
			i++;
		}
	}
	fclose(kartei);
}
