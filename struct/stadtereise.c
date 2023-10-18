#include <stdio.h>
#include <string.h>
#include "aufteilen.h"
#include "aufteilen3.h"
struct Stadt
{
	char sname[50];
	char hotel[50];
	int tage;
	char stadtfuhrer[50];
};
struct Reisender
{
	char vorname[50];
	char nachname[50];
	int kategorie;
};
struct Reise
{
	char abreisedatum[50];
	int reisedauer;
	char rname[50];
	struct Stadt orte[50];
	struct Reisender gruppe[50];

};
main()
{
	FILE *rfile;
	rfile=fopen("Reisende.txt","r");
	FILE *sfile;
	sfile=fopen("Stadt.txt","r");
	struct Reise ausflug={"20.06.2022",10,"Zygmunt"};
	int i=0;
	int j=0;
	int z=0;
	char alles[100];
	char gesamt[100];
	char filename[100];
	FILE *new;

	if(rfile==NULL || sfile==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(rfile,"%i;%s",&ausflug.gruppe[i].kategorie,alles)!=EOF)
		{
			aufteilen(alles,ausflug.gruppe[i].vorname,ausflug.gruppe[i].nachname);
			i++;
			j++;
		}
		i=0;
		while(fscanf(sfile,"%i;%s",&ausflug.orte[i].tage,gesamt)!=EOF)
		{
			aufteilen3(ausflug.orte[i].hotel,ausflug.orte[i].sname,ausflug.orte[i].stadtfuhrer,gesamt);
			i++;
		}
		i=0;
		while(i<j)
		{
			strcpy(filename,ausflug.gruppe[i].vorname);
			strcat(filename,ausflug.gruppe[i].nachname);
			strcat(filename,".txt");
			new=fopen(filename,"w");
			fprintf(new,"Hallo %s %s,\n",ausflug.gruppe[i].vorname,ausflug.gruppe[i].nachname);
			fprintf(new,"willkommen auf deiner Traumreise. Dein betreuender Reiseleiter ist %s. Die Reise dauert %i Tage und startet am %s. Es wurde die %i gebucht\n\n",ausflug.rname,ausflug.reisedauer,ausflug.abreisedatum,ausflug.gruppe[i].kategorie);
			fprintf(new,"Der Reiseplan sieht wie folgt aus:\n\n");
			for(z=0;z<5;z++)
			{
				fprintf(new,"Die %i. Station ist %s. Sie übernachten %i Tage im %s und werden von Herrn %s durch die Stadt geführt.\n",z+1,ausflug.orte[z].sname,ausflug.orte[z].tage,ausflug.orte[z].hotel,ausflug.orte[z].stadtfuhrer);
			}
			i++;
		}
		i=0;
	}
	fclose(rfile);
	fclose(sfile);
}
