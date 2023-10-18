#include <stdio.h>

main()
{
	int zahl1;
	int zahl2;
	int gesamt;
	printf("Zahl eingeben:");
	scanf("%i" ,&zahl1);
	printf("Zahl eingeben:");
	scanf("%i" ,&zahl2);
	gesamt = zahl1 + zahl2;
	printf("Die Summe aus %i und %i beträgt %i\n" ,zahl1 ,zahl2 ,gesamt);
}
	
