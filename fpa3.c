#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void einlesen(FILE *datei,int *counter,int datum[100][3],char namen[100][50])
{
	datei=fopen("daten.txt","r");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%i;%i;%s",&datum[*counter][0],&datum[*counter][1],&datum[*counter][2],namen[*counter])!=EOF)
		{
			*counter=*counter+1;
		}
	}
	fclose(datei);
}
void check(int *counter,int datum[100][3],char namen[100][50])
{
	int i;
	int jh=2022;
	int mh=4;
	int th=6;

	for(i=0;i<*counter;i++)
	{
		printf("%s wurde am %i.%i.%i geboren und ist ",namen[i],datum[i][2],datum[i][1],datum[i][0]);
		if(datum[i][0]<2004 || datum[i][0]==2004&&datum[i][1]<4 || datum[i][0]==2004&&datum[i][1]==4&&datum[i][2]<=6)
		{
			printf("volljährig.\n");
		}
		else
		{
			printf("minderjährig.\n");
		}
	}
}
main()
{
	FILE *datei;
	int counter=0;
	int datum[100][3];
	char namen[100][50];

	einlesen(datei,&counter,datum,namen);
	check(&counter,datum,namen);
}
