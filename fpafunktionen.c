#include <stdio.h>

int test(int alter)
{
	int pro=1;
	if(alter<16)
	{
		pro=0;
	}
	return pro;
}
int back(int summe)
{
	int punkte;
	int speicher;

	punkte=summe/10;
	speicher=punkte%10;
	if(speicher!=0)
	{
		punkte++;
	}

	return punkte;
}
main()
{
	int zucker=2;
	int proteine=30;
	int steroide=100;
	int alter;
	int produkt;
	int menge;
	int zwischen=0;
	int summe=0;
	int payback;
	int erg;

	printf("===Bitte geben Sie die Einkaufsdaten ein===\n\n");
	printf("Traubenzucker		(1)\n");
	printf("Spezialproteine		(2)\n");
	printf("Steroide		(3)\n");
	printf("Einkauf beenden		(0)\n\n");
	printf("Alter: ");
	scanf("%i",&alter);

	erg=test(alter);

	if(erg==1)
	{
		do
		{
			printf("Produkt: ");
			scanf("%i",&produkt);
			if(produkt!=0)
			{
				printf("Menge: ");
				scanf("%i",&menge);
			}
			if(produkt==1)
			{
				zwischen=zucker*menge;
				summe=summe+zwischen;
			}
			else if(produkt==2)
			{
				zwischen=proteine*menge;
				summe=summe+zwischen;
			}
			else if(produkt==3)
			{
				zwischen=steroide*menge;
				summe=summe+zwischen;
			}
		}while(produkt!=0);
		printf("Ihr Umsatz beträgt %i.\n",summe);
		payback=back(summe);
		printf("Für Ihren Einkauf erhalten Sie %i Paybackpunkte!\n",payback);
		printf("Vielen Dank für Ihren Einkauf.\n");
	}
	else
	{
		printf("Der Kunde ist zu jung für einen Einkauf.\n");
	}
}
