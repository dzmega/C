#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	datei=fopen("Klasse.csv","r");
	int anzahl;
	int fach;
	int note;
	char name[50];
	char name2[50];
	float schnitt;
	int i=0;

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		anzahl=fscanf(datei,"%i;%i;%s",&fach,&note,name);
		while(anzahl==3)
		{
			printf("Die Noten von: %s\n",name);
			strcpy(name2,name);
			schnitt=0;
			i=0;
			while(anzahl==3 && strcmp(name2,name)==0)
			{
				printf("%i\n",note);
				schnitt=schnitt+note;
				i++;
				anzahl=fscanf(datei,"%i;%i;%s",&fach,&note,name);
			}
			schnitt=schnitt/i;
			printf("---------------------------\n");
			printf("Gesamtschnitt: %.2f\n\n",schnitt);
		}
	}
	fclose(datei);
}
