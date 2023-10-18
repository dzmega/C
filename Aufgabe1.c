#include <stdio.h>

main()
{
	int zahl;
	printf("Bitte Zahl eingeben:");
	scanf("%i" ,&zahl);

	if((zahl*2) > 30)
	{
		zahl = zahl + 4;
	}
	zahl = zahl / 2;
	zahl = zahl + 1;

	if((zahl - 11) < (2 * zahl -23))
	{
		zahl = zahl - 1;
	}
	printf("%i\n" ,zahl);
}

