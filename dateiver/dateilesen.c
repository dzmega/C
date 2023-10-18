#include <stdio.h>
#include <string.h>

float gehaltserhohung(float gehalt)
{
	gehalt=gehalt*1.10;
	return gehalt;
}

main()
{
	FILE *datei;
	FILE *new;
	char name[30];
	float gehalt;

	datei=fopen("namen2.txt","r");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		new=fopen("namen2neu.txt","w");
		if(new==NULL)
		{
			printf("Fehler!\n");
		}
		else
		{
			while(fscanf(datei,"%f;%s",&gehalt,name)==2)
			{
				gehalt=gehaltserhohung(gehalt);
				printf("%s: %.2f Euro\n",name,gehalt);
				fprintf(new,"%s: %.2f Euro\n",name,gehalt);
			}
			printf("\n");
		}
	}
	fclose(datei);
}
