#include <stdio.h>

main()
{
	int zahl1;
	int zahl2;
	int ergebnis1;
	int ergebnis2;

	printf("Zahl eingeben:");
	scanf("%i" ,&zahl1);
	printf("Teiler eingeben:");
	scanf("%i" ,&zahl2);
	ergebnis1 = zahl1 / zahl2;
	ergebnis2 = zahl1 % zahl2;
	printf("%i durch %i ergibt %i Rest %i.\n" ,zahl1 ,zahl2 ,ergebnis1 ,ergebnis2);
}
