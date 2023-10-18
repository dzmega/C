#include <stdio.h>

main()
{
	int listeneinkaufspreis;
	printf("Bitte geben Sie den Listeneinkaufspreis an:");
	scanf("%i" , &listeneinkaufspreis);
	int bezugskosten;
	printf("Bitte geben Sie die Bezugskosten ein:");
	scanf("%i" , &bezugskosten);
	int lieferrabatt;
	printf("Bitte geben Sie den Rabatt ein:");
	scanf("%i" ,&lieferrabatt);
	float skonto;
	printf("Bitte geben Sie den Skonto ein");
	scanf("%f" , &skonto);
	int zieleinkaufspreis = 1125;
	float bareinkaufspreis = 1102.50;
	float bezugspreis = 1152.50;
	float summe;
	summe = (listeneinkaufspreis - lieferrabatt + zieleinkaufspreis - skonto + bareinkaufspreis + bezugskosten + bezugspreis);

	printf("Einkaufskalkulation \n");
	printf("====================================\n");
	printf("   Listeneinkaufspreis	%i \n" ,listeneinkaufspreis);
	printf("-  Lieferrabatt			%i \n" ,lieferrabatt);
	printf("____________________________________\n");
	printf("   Zieleinkaufspreis	%i \n" ,zieleinkaufspreis);
	printf("-  Skonto				%.2f \n" ,skonto);
	printf("____________________________________\n");
	printf("   Bareinkaufspreis		%.2f \n" ,bareinkaufspreis);
	printf("+  Bezugskosten			%i \n" ,bezugskosten);
	printf("____________________________________\n");
	printf("   Bezugspreis			%.2f \n" ,bezugspreis);
	printf("====================================\n");
	printf("   Summe				%.2f €" ,summe);
}

