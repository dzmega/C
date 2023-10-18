#include <stdio.h>
main()
{
	int zahl;
	int zahl2;
	int durchlauf=1;

	printf("Das ist der %i. Durchlauf. Bitte geben Sie eine Zahl ein:",durchlauf);
	scanf("%i" ,&zahl);

	while(zahl<=100)
	{
		durchlauf=durchlauf+1;
		printf("Das ist der %i. Durchlauf. Bitte geben Sie eine Zahl ein:",durchlauf);
		scanf("%i" ,&zahl2);
		zahl=zahl+zahl2;
	}
	printf("Das Ergebnis ist %i\n",zahl);
}
