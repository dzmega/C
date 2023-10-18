#include <stdio.h>

main()
{
	float preis;
	int alter;

	printf("Eintrittspreis\n");
	printf("--------------\n");
	printf("Ihr Alter:");
	scanf("%i" ,&alter);

	if(alter<=2)
	{
		preis=0;
		printf("Sie Zahlen 0.00 Euro");
	}
	else
	{
		if(alter<=5)
		{
			preis=4;
			printf("Sie zahlen 4.00 Euro");
		}
		else
		{
			if(alter>=65)
			{
				preis=6;
				printf("Sie zahlen 6.00 Euro");
			}
			else
			{
				preis=8;
				printf("Sie zahlen 8.00 Euro");
			}
		}
	}
}
