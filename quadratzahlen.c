#include <stdio.h>

main()
{
	int zahl = 0;
	int quadratzahl;
	
	while(zahl<=10)
	{
		quadratzahl=zahl*zahl;
		printf("%i\n" ,quadratzahl);
		zahl=zahl+1;
	}
}
