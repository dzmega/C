#include <stdio.h>
struct wasserstand
{
	char stadt[50];
	int w1;
	int w2;
	int w3;
	int pegel;
};
void warnstufe(struct wasserstand ein[10])
{
	int i;
	for(i=0;i<7;i++)
	{
		if(ein[i].pegel<ein[i].w1)
		{
			printf("Der Wasserstand in %s ist normal.\tPegel -> %i\n",ein[i].stadt,ein[i].pegel);
		}
		if(ein[i].pegel>ein[i].w1 && ein[i].pegel<ein[i].w2)
		{
			printf("In %s ist Warnstufe 1 erreicht.\tPegel -> %i\n",ein[i].stadt,ein[i].pegel);
		}
		if(ein[i].pegel>ein[i].w2 && ein[i].pegel<ein[i].w3)
		{
			printf("In %s ist Warnstufe 2 erreicht.\tPegel -> %i\n",ein[i].stadt,ein[i].pegel);
		}
		if(ein[i].pegel>ein[i].w3)
		{
			printf("Achtung in %s ist Warnstufe 3!\tPegel-> %i\n",ein[i].stadt,ein[i].pegel);
		}
	}
}
void eingabe(int *eins, int *zwei)
{
	printf("Pegel von Trunstadt: ");
	scanf("%i",eins);
	printf("Pegel von Würzburg: ");
	scanf("%i",zwei);
}
main()
{
	FILE *datei;
	datei=fopen("Warnstufen.txt","r");
	FILE *pegelstand;
	pegelstand=fopen("Pegelstand1.txt","r");
	struct wasserstand ein[10];
	char ort[50];
	int i=0;

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%i;%i;%s",&ein[i].w1,&ein[i].w2,&ein[i].w3,ein[i].stadt)!=EOF)
		{
			i++;
		}
		i=0;
		while(fscanf(pegelstand,"%i;%s",&ein[i].pegel,ort)!=EOF)
		{
			i++;
		}
		eingabe(&ein[0].pegel,&ein[2].pegel);
		warnstufe(ein);
	}
	fclose(datei);
	fclose(pegelstand);
}
