#include <stdio.h>

struct schueler
{
	char vorname[30];
	char nachname[30];
	int alter;
	float groesse;
};
main()
{
	struct schueler eing;
	printf("Geben Sie den Vornamen ein: ");
	scanf("%s",eing.vorname);
	printf("Geben Sie den Nachnamen ein: ");
	scanf("%s",eing.nachname);
	printf("Geben Sie das Alter ein: ");
	scanf("%i",&eing.alter);
	printf("Geben Sie die Größe ein: ");
	scanf("%f",&eing.groesse);

	printf("Daten vom Schüler: %s;%s;%i;%.2f\n",eing.vorname,eing.nachname,eing.alter,eing.groesse);
}
