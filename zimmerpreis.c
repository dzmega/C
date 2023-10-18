#include <stdio.h>

main()
{
	int person;
	float einzel;
	float doppel;
	float preis;
	float doppelzimmer;

	printf("Zimmerpreis\n");
	printf("___________\n");
	printf("Personenzahl:");
	scanf("%i" ,&person);
	
	doppelzimmer=person/2;
	preis=doppelzimmer*70;
	
	if(person==1)
	{
		einzel=50;
		printf("Sie zahlen %.2f Euro\n" ,einzel);
	}
	else
	{
		if(person==2)
		{	
			doppel=70;
			printf("Sie Zahlen %.2f Euro\n" ,doppel);
		}
		else
		{
			person%2==1;
			preis=preis+50;
			printf("Sie Zahlen %.2f Euro\n" ,preis);
		}
	}
}
