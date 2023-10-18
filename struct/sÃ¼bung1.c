#include <stdio.h>

struct fisch
{
	char name[30];
	char art[30];
	int zaehne;
	int alter;
};

void ausgabe(struct fisch *eins,struct fisch *zwei)
{

	printf("Name vom Fisch: %s\nArt vom Fisch: %s\nAnzahl der Zähne vom Fisch: %i\nAlter vom Fisch: %i\n-----------------------------------------\n",eins->name,eins->art,eins->zaehne,eins->alter);
	printf("Name vom Fisch: %s\nArt vom Fisch: %s\nAnzahl der Zähne vom Fisch: %i\nAlter vom Fisch: %i\n-----------------------------------------\n",zwei->name,zwei->art,zwei->zaehne,zwei->alter);
}

main()
{
	struct fisch eins={"snappy","piranha",69,5};
	struct fisch zwei;

	printf("Namen eingeben: "); 
	scanf("%s",zwei.name);
	printf("Art eingeben: ");
	scanf("%s",zwei.art);
	printf("Anzahl der Zähne eingeben: "); 
	scanf("%i",&zwei.zaehne);
	printf("Alter eingeben: "); 
	scanf("%i",zwei.alter);
	ausgabe(&eins,&zwei);
}
