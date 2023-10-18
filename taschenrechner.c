#include <stdio.h>

main()
{
	int modus;
	int zahl1;
	int zahl2;
	int ergebnis;

	printf("Addition		(1)");
	printf("Subtraktion		(2)");
	printf("Multiplikation	(3)");
	printf("Division		(4)");

	printf("Bitte geben Sie die entsprechende Zahl für die gewünschte Rechenart ein:");
	scanf("%i" ,&modus);

	printf("Bitte geben Sie die erste Zahl der Gleichung ein:");
	scanf("%i" ,zahl1);

	printf("Bitte geben Sie die zweite Zahl der Gleichung ein:");
	scanf("%i" ,zahl2);

	if(modus == 1)
	{
		ergebnis = zahl1 + zahl2;
		printf("Das Ergebnis von %i + %i = %i" ,zahl1 ,zahl2 ,ergebnis); 
	}
	if(modus == 2)
	{
		ergebnis = zahl1 - zahl2;
	}
	if(modus == 3)
	{
		ergebnis = zahl1 * zahl2;
	}
	if(modus == 4)
	{
		ergebnis = zahl1 / zahl2;
	}
	
