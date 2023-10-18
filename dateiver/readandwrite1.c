#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	int hausnr;
	int plz;
	char stadt[30];
	char strasse[30];
	char vorname[30];
	char nachname[30];

	datei=fopen("adresse.txt","w");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		printf("Vorname eingeben: ");
		scanf("%s",vorname);
		printf("Nachname eingeben: ");
		scanf("%s",nachname);
		printf("Strasse eingeben: ");
		scanf("%s",strasse);
		printf("Hausnummer eingeben: ");
		scanf("%i",&hausnr);
		printf("Postleitzahl eingeben: ");
		scanf("%i",&plz);
		printf("Stadt eingeben: ");
		scanf("%s",stadt);
		fprintf(datei,"%s-%s-%s-%i-%i-%s",vorname,nachname,strasse,hausnr,plz,stadt);
	}
	fclose(datei);
}
