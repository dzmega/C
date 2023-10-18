#include <stdio.h>
main()
{
	int zahl;
	int quersumme=0;
	int teil=10;
	int rest=0;

	printf("Bitte geben Sie die zahl ein, von der Sie die Quersumme wissen möchten:");
	scanf("%i",&zahl);

	while(zahl>0)
	{
		rest=0;
		rest=zahl%teil;
		zahl=zahl/10;
		quersumme=quersumme+rest;

	}
	printf("Die Quersumme ist: %i\n" ,quersumme);
}
		
		

