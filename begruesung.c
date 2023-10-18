#include <stdio.h>
void begruesung (int oft)
{
	int zaehler=1;

	while(zaehler<=oft)
	{
		printf("Hallo IK10! Willkommen zum Thema Funktionen!\n");
		zaehler++;
	}
}
main()
{
	int oft2;

	printf("Wie oft möchten Sie die Begrüßung ausgeben?");
	scanf("%i" ,&oft2);

	begruesung(oft2);
}
