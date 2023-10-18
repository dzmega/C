#include <stdio.h>
main()
{
	int zahl;
	int i;
	int ergebnis=1;

	printf("Bitte geben Sie die Zahl ein:");
	scanf("%i" ,&zahl);

	for(i=1; i<=zahl;i++)
	{
		ergebnis=i*ergebnis;
	}
}
