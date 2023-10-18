#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	srand(time (NULL));
	int zufallszahl = rand() % 100 + 1;
	int zahl;
	int versuche=1;

	do
	{
		printf("Rate mal welche Zahl ich weiß!");
		scanf("%i" ,&zahl);

		if(zahl>zufallszahl)
		{
			printf("Die gesuchte Zahl ist kleiner!");
			versuche=versuche+1;
		}
		if(zahl<zufallszahl)
		{	
		printf("Die gesuchte Zahl ist größer!");
		versuche=versuche+1;
		}
	}while(zahl!=zufallszahl);

	if(zahl==zufallszahl);
	{
		printf("Glückwunsch %i war die Zahl!\n" ,zahl);
		printf("Du hast %i Versuche gebraucht!\n" ,versuche);
	}
}
