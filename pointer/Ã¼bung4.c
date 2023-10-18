#include <stdio.h>
void funktion(int *modus,int *punkte)
{
	while(*modus!=4)
	{
		if(*modus==1)
		{
			*punkte=*punkte+3;
		}
		if(*modus==2)
		{
			*punkte=*punkte+1;
		}
		if(*modus==3)
		{
			*punkte=*punkte+0;
		}
		if(*modus>=5 && *modus<=1)
		{
			printf("Fehler! Bitte versuchen Sie es erneut!\n");
		}
		printf("gewonnen(1) - unentschieden(2) - verloren(3) - beenden(4)");
		scanf("%i",modus);
	}
}
void zuschauer(int *anzahl)
{
	printf("Wie viele Zuschauer waren da? ");
	scanf("%i",anzahl);
}
void ausgabe(int *punkte)
{
	printf("Der neue Punktestand der Würzburger Kickers beträgt: %i\n",*punkte);
}
main()
{
	int modus;
	int punkte=0;
	int anzahl=0;

	printf("Wie war das Spielergebnis?\n");
	printf("gewonnen(1) - unentschieden(2) - verloren(3) - beenden(4)");
	scanf("%i",&modus);
	funktion(&modus,&punkte);
	ausgabe(&punkte);
	zuschauer(&anzahl);
	printf("%i Zuschauer waren da!\n",anzahl);
}
