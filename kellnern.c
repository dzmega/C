#include <stdio.h>
main()
{
	int kellner;
	int zaehlerk=1;
	int tische;
	int zaehlert=1;
	float umsatz;
	float summe=0;
	
	printf("Wie viele Kellner haben geute gearbeitet?");
	scanf("%i" ,&kellner);
	printf("Wie viele Tische haben Sie im Restaurant?");
	scanf("%i" ,&tische);

	while(zaehlert<=tische)
	{
		printf("Kellner %i, wie viel Umsatz haben Sie an Tisch %i gemacht?",zaehlerk ,zaehlert);
		scanf("%i" ,&umsatz);
		summe=summe+umsatz;
		
		if(zaehlert=tische)
		{
			zaehlerk++;
			zaehlert=1;
		}
	}
	printf("Der gesamte Umsatz heute Abend beträgt: %.2f Euro!",summe);
}
