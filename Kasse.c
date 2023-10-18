#include <stdio.h>

main()
{
	float rechnungsbetrag;
	float erhalten;
	float ruckgeld;
	int ruckgeld2;
	int eur2,eur1,eur1r,cent50,cent20,cent10,cent5,cent2,cent;

	printf("Rechnungsbetrag:");
	scanf("%f" ,&rechnungsbetrag);
	printf("Erhaltener Betrag:");
	scanf("%f" ,&erhalten);
	printf("\n=========================\n");

	ruckgeld = erhalten - rechnungsbetrag;
	ruckgeld2 = (int)ruckgeld * 100;
	eur2 = ruckgeld2 / 200;
	ruckgeld2 = ruckgeld2 % 200;
	eur1 = ruckgeld2 / 100;
	ruckgeld2 = ruckgeld2 % 100;
	cent50 = ruckgeld2 / 50;
	ruckgeld2 = ruckgeld2 % 50;
	cent20 = ruckgeld2 / 20;
	ruckgeld2 = ruckgeld2 % 20;
	cent10 = ruckgeld2 / 10;
	ruckgeld2 = ruckgeld2 % 10;
	cent5 = ruckgeld2 / 5;
	ruckgeld2 = ruckgeld2 % 5;
	cent2 = ruckgeld2 / 2;
	ruckgeld2 = ruckgeld2 % 2;
	cent1 = ruckgeld / 1;
	

	printf("Rückgeld: %0.2f EUR\n" ,ruckgeld);
	printf("=========================\n");
	printf("1 Cent:\n");
	printf("2 Cent:\n");
	printf("5 Cent:\n");
	printf("10 Cent:\n");
	printf("20 Cent:%i\n",cent20);
	printf("50 Cent:%i\n",cent50);
	printf("1 EUR:	%i\n",eur1);
	printf("2 EUR:	%i\n",eur2);
}	

