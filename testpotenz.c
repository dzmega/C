
#include <stdio.h>
main()
{
	int zahl;
	int speicher;
	int potenz;
	int zp=1;

	printf("Bitte geben Sie eine Zahl ein:");
	scanf("%i" ,&zahl);
	printf("Bitte geben Sie die Potenz ein:");
	scanf("%i" ,&potenz);

	zahl=speicher;

	if(potenz<=0)
	{
		printf("negative Potenzen sind nicht zugelassen");
		printf("Ergebnis ist 1");
	}
	while(zp<=potenz)
	{
		zahl=zahl*speicher;
		zp++;
	}
	printf("%i hoch %i ist %i." ,speicher ,potenz ,zahl);
}
