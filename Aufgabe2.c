#include <stdio.h>

main()
{
	int zahl1;
	int zahl2;

	printf("Bitte geben Sie Zahl 1 ein:");
	scanf("%i" ,&zahl1);
	printf("Bitte geben Sie Zahl 2 ein:");
	scanf("%i" ,&zahl2);

	if(zahl1 == zahl2)
	{
		printf("Richtig! Zahlen gleich");
	}
	else
	{
		printf("Falsch! Zahlen ungleich");
	}
}

