#include <stdio.h>

main()
{
	int zahl1;
	int zahl2;

	printf("KLEINER oder GROESSER\n");
	printf("--------------------\n");
	printf("Bitte Zahl 1 eingeben:");
	scanf("%i" ,&zahl1);
	printf("Bitte Zahl 2 eingeben:");
	scanf("%i" ,&zahl2);
	if(zahl1 > zahl2)
	{
		printf("%i ist größer als %i\n" ,zahl1 ,zahl2);
	}
	if(zahl1 < zahl2)
	{
		printf("%i ist kleiner als %i\n" ,zahl1 ,zahl2);
	}
}
