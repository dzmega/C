#include <stdio.h>

main()
{
	float zahl;

	printf("NEGATIV oder POSITIV\n");
	printf("--------------------\n");
	printf("Bitte Zahl eingeben:");
	scanf("%f" ,&zahl);

	if(zahl >= 0)
	{
		printf("Die Zahl %.2f ist positiv\n" ,zahl);
	}
	else
	{
		printf("Die zahl %.2f ist negativ\n" ,zahl);
	}
}
