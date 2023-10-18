#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void zufall(char array[20][100],int z);
void checker(char zufallswort[50],char erraten[50],int i);
main()
{
	FILE *datei;
	datei=fopen("begriffe.txt","r");
	char array[4][100];
	char wort[50];
	int i;
	int z=0;

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%s",wort)!=EOF)
		{
			for(i=0;wort[i]!='\0';i++)
			{
				if(wort[i]>=97 && wort[i]<=122)
				{
					wort[i]=wort[i]-32;
				}
			}
			strcpy(array[z],wort);
			z++;
		}
		for(i=0;i<z;i++)
		{
			printf("%s\n",array[i]);
		}
		zufall(array,z);
	}
}
void zufall(char array[20][100],int z)
{
	int random;
	srand(time(NULL));
	random=rand()%4;
	random--;
	char zufallswort[50];
	char erraten[50];
	int i=0;
	int j=0;

	strcpy(zufallswort,array[random]);
	i=strlen(zufallswort);
	for(j;j<i;j++)
	{
		erraten[j]='*';
	}
	printf("\n");
	checker(zufallswort,erraten,i);
}
void checker(char zufallswort[50],char erraten[50],int i)
{
	int versuche=0;
	int fehler=0;
	char buchstabe;
	char dummy;
	int j=0;
	int z=0;

	do
	{
		printf("%s\n",erraten);
		printf("Das gesuchte Wort ist:%s\n",zufallswort);
		printf("%s\n",erraten);
		printf("%i / 10 Fehler\n",versuche);
		printf("Bitte geben Sie einen Buchstaben ein: ");
		scanf("%c%c",&buchstabe,&dummy);
		printf("Buchstabe: %c\n",buchstabe);
		if(buchstabe>=97 && buchstabe<=125)
		{
			buchstabe=buchstabe-32;
		}
		else
		{
			printf("Fehler!\n");
			break;
		}
	
		for(j;j<i;j++)
		{
			if(buchstabe==zufallswort[j])
			{
				printf("Hello\n");
				erraten[j]=buchstabe;
				z++;
			}
			else
			{
				fehler++;
				if(fehler==i)
				{
					versuche++;
				}
				fehler=0;
			}
		}
	}while(versuche!=10);
	
	if(z==i)
	{
		printf("Bravo, das war der richtige Begriff!\n");
	}
	else
	{
		printf("Leider verloren!\n");
	}
}
