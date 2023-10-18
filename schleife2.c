#include <stdio.h>

main()
{
	int zahl=1;
	int anzahl;

	printf("Bitte Anzahl eingeben:");
	scanf("%i" ,&anzahl);

	while(zahl<=anzahl)
	{
		printf("Dies ist der %i. Schleifendurchlauf.\n" ,zahl);
		zahl=zahl+1;
	}
}
