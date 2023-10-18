#include <stdio.h>

main()
{
	int zahl;
	int zahlp;

	printf("Betrag einer Zahl\n");
	printf("-----------------\n");
	printf("Bitte Zahl eingeben:");
	scanf("%i" ,&zahl);

	if (zahl < 0)
	{
		zahlp = (zahl * -1);
		printf("Die Zahl %i hat den Betrag %i!\n" ,zahl ,zahlp);
	}
	if (zahl > 0)
	{
		printf("Die Zahl %i hat den Betrag %i!\n" ,zahl ,zahl);
	}
}
