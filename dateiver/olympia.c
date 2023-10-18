#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	int zahl;
	char name[30];
	int speicher=0;
	char ns[30];

	datei=fopen("olynamen.csv","r");
	if(datei==NULL)
	{
		printf("Dateiöffnungsfehler!!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%s",&zahl,name)==2)
		{
			if(speicher==0)
			{
				speicher=zahl;
				strcpy(ns,name);
			}
			if(zahl<speicher)
			{
				speicher=zahl;
				strcpy(ns,name);
			}
		}
		fclose(datei);
		printf("Herzlichen Glückwunsch %s, du hast die schnellste Zeit!\n",ns);
	}
}
