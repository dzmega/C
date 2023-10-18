#include <stdio.h>
void rechnung(int basis, int potenz)
{
	int ergebnis=1;
	int zaehler=1;

	while(zaehler<=potenz)
	{
		ergebnis=ergebnis*basis;
		zaehler++;
	}
	printf("Ergebnis: %i",ergebnis);
}
main()
{
	int basis;
	int potenz;

	printf("Potenzierende Zahl:");
	scanf("%i" ,&basis);
	printf("Potenz:");
	scanf("%i" ,&potenz);

	rechnung (basis,potenz);
}
