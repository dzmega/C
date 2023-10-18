#include <stdio.h>
struct lehrer
{
	char vorname[30];
	char nachname[30];
};
struct klasse
{
	char kurzel[10];
	int jahrgangsstufe;
	int eingangsjahr;
	char fachausrichtung[30];
	int schuleranzahl;
	struct lehrer *klassenleiter;
};
void jahreswechsel(int *stufe);
main()
{
	struct lehrer klassenleiter={"Sebastian","Mark"};
	struct klasse ik2017={"IK",10,2017,"ITKaufmann",11,&klassenleiter};
	int anzahl;
	char vorname[30];
	char nachname[30];
	printf("Kürzel: %s\n",ik2017.kurzel);
	printf("Jahrgangsstufe: %i\n",ik2017.jahrgangsstufe);
	printf("Eingangsjahr: %i\n",ik2017.eingangsjahr);
	printf("Fachausrichtung: %s\n",ik2017.fachausrichtung);
	printf("Schüleranzahl: %i\n",ik2017.schuleranzahl);
	printf("%s %s ist Klassenleiter der %s%i.\n\n",ik2017.klassenleiter->vorname,ik2017.klassenleiter->nachname,ik2017.kurzel,ik2017.jahrgangsstufe);

	jahreswechsel(&ik2017.jahrgangsstufe);
	printf("Wie lautet die neue Schüleranzahl: ");
	scanf("%i",&ik2017.schuleranzahl);
	printf("Wie lautet der Vorname des neuen Klassenleiters? ");
	scanf("%s",ik2017.klassenleiter->vorname);;
	printf("Wie lautet der Nachname des neuen Klassenleiters? ");
	scanf("%s",ik2017.klassenleiter->nachname);
	printf("\n");
	printf("Kürzel: %s\n",ik2017.kurzel);
	printf("Jahrgangsstufe: %i\n",ik2017.jahrgangsstufe);
	printf("Eingangsjahr: %i\n",ik2017.eingangsjahr);
	printf("Fachausrichtung: %s\n",ik2017.fachausrichtung);
	printf("Schüleranzahl: %i\n",ik2017.schuleranzahl);
	printf("\n%s %s ist Klassenleiter der %s%i.\n",ik2017.klassenleiter->vorname,ik2017.klassenleiter->nachname,ik2017.kurzel,ik2017.jahrgangsstufe);

}
void jahreswechsel(int *stufe)
{
	*stufe=*stufe+1;
}
