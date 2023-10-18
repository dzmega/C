#include <stdio.h>

main()
{
	int watt;
	float ps;
	printf("Kilowatt eingeben:");
	scanf("%i" ,&watt);
	ps = (watt * 1.36);
	printf("Die Leistung in PS beträgt: %0.2f\n" ,ps);
}
	
