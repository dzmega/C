#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	int z=0;
	char wort[30];
	int gesamt=0;
	int lang;

	datei=fopen("auswertung.csv","r");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%s",wort)!=EOF)
		{
			z++;
			lang=strlen(wort);
			gesamt=gesamt+lang;
		}
		printf("Anzahl der Wörter: %i\n",z);
		printf("Anzahl der Buchstaben: %i\n",gesamt);
	}
}
