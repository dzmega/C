#include <stdio.h>
#include <string.h>
struct guter
{
	int gewicht;
	char gut[50];
};
struct schiffe
{
	int gl;
	int al;
	char name[50];
	struct guter sachen[100];
	int ladeposition;
};
main()
{
	FILE *datei;
	datei=fopen("Schiffe.txt","r");
	FILE *ladungen;
	ladungen=fopen("Ladungen.txt","r");
	struct schiffe schiff[3];
	int i=0;
	int j=0;
	int dgewicht;
	char dgut[50];


	if(datei==NULL || ladungen==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%i;%s",&schiff[i].gl,&schiff[i].al,schiff[i].name)!=EOF)
		{
			
			
			i++;
		}
		i=0;
		while(fscanf(ladungen,"%i;%s",&dgewicht,dgut)!=EOF)
		{
			for(j=0;j<3;j++)
			{
				if(schiff[i].sachen[j].gewicht+dgewicht<=100)
				{
					schiff[i].sachen[j].gewicht=schiff[i].sachen[j].gewicht+dgewicht;
					strcpy(schiff[i].sachen[j].gut,dgut);
				}
				else
				{
					schiff[i+1].sachen[j].gewicht=schiff[i].sachen[j].gewicht+dgewicht;
					strcpy(schiff[i+1].sachen[j].gut,dgut);
				}
			}
			i++;
		}
	}
	fclose(datei);
	fclose(ladungen);
}
