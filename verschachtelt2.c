#include <stdio.h>

main()
{
	int a;
	int b;
	int c;

	printf("Bitte Zahl 1 eingeben:");
	scanf("%i" ,&a);
	printf("Bitte Zahl 2 eingeben:");
	scanf("%i" ,&b);

	c = a - b;

	if(c < 0)
	{
		if(c * c < 100)
		{
			if(c % 2 == 0)
			{
				printf("C ist gerade");
			}
			else
			{
				printf("C ist ungerade");
			}
		}	
		else
		{
			printf("C ist ganz schön klein");
		}
	}
	else 
	{
		c = c * c;
		if (c != 0)
		{
			printf("C ist ungleich");
		}
	}
}
