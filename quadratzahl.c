#include <stdio.h>

main()
{
	int zahl;
	printf("Zahl eingeben:");
	scanf("%i" ,&zahl);
	zahl = zahl * zahl;
	printf("Die Quadratzahl beträgt: %i\n" ,zahl);
}
