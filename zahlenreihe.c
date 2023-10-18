#include <stdio.h>
main()
{
	int anfangszahl;
	int endzahl;
	int zaehler;

	printf("Bitte geben Sie die Anfangszahl ein:");
	scanf("%i" ,&anfangszahl);
	printf("Bitte gaben Sie die Endzahl ein:");
	scanf("%i" ,&endzahl);

	for(zaehler=1; anfangszahl<=endzahl; zaehler++)
	{
		printf("%i\t" ,anfangszahl);
		anfangszahl=anfangszahl+1;
	}
}


