#include <stdio.h>
main()
{
	int zahl1=1;
	int zahl2=1;
	int ergebnis;

	do
	{
		ergebnis=zahl1*zahl2;	
		printf("%i * %i = %i\n",zahl1 ,zahl2 ,ergebnis);
		zahl2=zahl2+1;
	}while(zahl2<=10);
	if(zahl2=10)
	{
		zahl1=zahl1+1;
		do
		{
			zahl2=0;
			zahl2=zahl2+1;
			ergebnis=zahl1*zahl2;
			zahl2=zahl2+1;
			printf("%i * %i = %i\n",zahl1 ,zahl2 ,ergebnis);
		}while(zahl1<=10);
	
	}
}




