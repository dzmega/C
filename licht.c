#include <stdio.h>

main()
{
	int entfernung;
	float sekunden;
	float minuten;
	printf("Entfernung eingeben:");
	scanf("%i" ,&entfernung);
	sekunden = entfernung / 300000;
	minuten = (entfernung / 300000) / 60;
	printf("Zeit in Sekunden: %f\n" ,sekunden);
	printf("Zeit in Minuten: %f\n" ,minuten);
}

