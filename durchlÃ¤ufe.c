#include <stdio.h>
main()
{
	int zahl;
	int zaehler;

	printf("Wie viele Durchläufe?:");
	scanf("%i" ,&zahl);

	for(zaehler=1; zaehler<=zahl; zaehler++)
	{
		printf("Dies ist der %i. Schleifendurchlauf.\n" ,zaehler);
	}
}
