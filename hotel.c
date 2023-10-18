#include <stdio.h>

main()
{
	int modusz;
	int modusf;
	int oft;
	int preis;
	int preis2;
	int person;
	int fruestueck = 10;

	printf("Brauchen Sie ein Einzel- (1) oder Doppelzimmer (2):");
	scanf("%i" ,&modusz);
	if(modusz == 1)
	{
		preis = 60;
	}
	if(modusz == 2)
	{
		preis = 80;
	}
	printf("Wie viele Nächte möchten sie bleiben:");
	scanf("%i" ,&oft);
	preis2 = preis * oft;

	printf("Wünschen Sie Frühstück ja(1) nein (0):");
	scanf("%i" ,&modusf);
	if(modusf == 1)
	{
		printf("Wie viele Personen:");
		scanf("%i" ,&person);
		fruestueck = fruestueck * person;
		preis2 = preis2 + fruestueck * oft;
	}
	if(modusf == 0)
	{
		printf("Kein Frühstück\n");
	}
	printf("Der Preis beträgt %i Euro.\n" ,preis2);
}
