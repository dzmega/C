#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aufteilen.h"
void ausgabe(double *sum,int *count,char *dat)
{
	char datei[50];
	int i;
	int j;
	for(i=0;dat[i]!='.';i++)
	{
		datei[i]=dat[i];
	}
	datei[i]='\0';
	printf("Das Ergebnis der Berechnung finden Sie in der Datei: Durchschnitt.txt\n");
	FILE *new;
	new=fopen("Durchschnitt.txt","w");
	if(new==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		fprintf(new,"Durchschnitt der Datei %s: %.2f\n",dat,*sum);
		fprintf(new,"Anzahl der Einträge: %i\n",*count);
		for(i=1;i<=5;i++)
		{
			fprintf(new,"%i");
	}

}
void berechnung(double *arr,double *sum,int *count)
{
	int j;
	int nummer;
	char gesamtstring[100];
	
	for(j=0;j<*count;j++)
	{
		*sum=*sum+arr[j];
	}
	*sum = *sum / (double)*count;
}

int einlesen(double *arr,FILE *dennis,char *dat,char alles[500][300])
{
	int nummer;
	double wert;
	int i=0;
	char gesamtstring[100];
	char wort1[50];
	char wort2[50];
	char snummer[500];


	printf("Bitte geben Sie die Datei zur Berechnung des Durschitts an: ");
	scanf("%s",dat);
	dennis=fopen(dat,"r");
	if(dennis==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(dennis,"%i;%s",&nummer,gesamtstring)!=EOF)
		{
			sprintf(snummer,"%i",nummer);
			strcat(snummer,';');
			strcat(snummer,gesamtstring);
			strcpy(alles[i],snummer);
			aufteilen(gesamtstring,wort1,wort2);
			wert=strtod(wort2,NULL);
			arr[i]=wert;
			i++;
		}
	}
	return i;
}
void sort(double *arr,int *count)
{
	int i;
	int j;
	double speicher;

	for(i=1;i<=*count;i++)
	{
		for(j=1;j<=*count;j++)
		{
			if(arr[i]>arr[j])
			{
				speicher=arr[i];
				arr[i]=arr[j];
				arr[j]=speicher;
			}
		}
	}
}
main()
{
	double arr[500];
	FILE *dennis;
	char dat[50];
	double sum;
	int count;
	char alles[500][300];

	count=einlesen(arr,dennis,dat,alles);
	berechnung(arr,&sum,&count);
	sort(arr,&count);
	ausgabe(&sum,&count,dat);
	printf("\n\n");
	for(int i=0;i<count;i++)
	{
		printf("%s\n",alles[i]);
	}
}
