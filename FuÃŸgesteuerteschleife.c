#include <stdio.h>
#include <stdbool.h>
main()
{
	int zaehler=0;
	bool weiter = false;
	int zahl;

	printf("Bitte Zahl eingeben:");
	scanf("%i" ,&zahl);

	do
	{
		if(zahl==0)
		{
			weiter=true;
		}
		else
		{
			if(zahl>0)
			{
				zahl=zahl-3;
				zaehler=zaehler+1;
			}
			else
			{
				zahl=zahl+2;
				zaehler=zaehler+1;
			}
		}
	}while((weiter==false)&&(zaehler<50));
	printf("%i",zahl);
}
