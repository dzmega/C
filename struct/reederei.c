#include <stdio.h>
#include <string.h>
struct schiffe
{
	int gl;
	int al;
	char name[50];
};
struct guter
{
	int gewicht;
	char gut[50];
};
main()
{
	FILE *schiff;
	schiff=fopen("Schiffe.txt","r");
	FILE *ladung;
	ladung=fopen("Ladungen.txt","r");
	int i=0;
	int j=0;
	struct schiffe boot[3];
	struct guter essen[7];
	FILE *new;

	if(schiff==NULL || ladung==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(schiff,"%i;%i;%s",&boot[i].gl,&boot[i].al,boot[i].name)!=EOF)
		{
			i++;
		}
		i=0;
		while(fscanf(ladung,"%i;%s",&essen[i].gewicht,essen[i].gut)!=EOF)
		{
			i++;
		}
		printf("Schiff\tGesamtladung\tAktuelle Ladung\n");
		printf("=====================================\n");
		for(j;j<3;j++)
		{
			printf("%s\t\t%i\t%i\n",boot[j].name,boot[j].gl,boot[j].al);
		}
	}
	fclose(schiff);
	fclose(ladung);
}
