#include <stdio.h>
int rechner (int zahl)
{
	int teiler;
	int ergebnis;
	int zaehler=2;

	teiler=zahl/10;

	while(zaehler<=teiler)
	{
		if(zahl%zaehler!=0)
		{
			zaehler++;
		}
		ergebnis=zahl/zaehler;
		printf("%i = %i\n",zaehler ,ergebnis);
		zaehler++;
	}
}
main()
{
	int zahl;

	printf("Gib eine Zahl ein:");
	scanf("%i" ,&zahl);
	printf("Die Zahl %i hat folgende Teiler",zahl);
	rechner(zahl);
}
