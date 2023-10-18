#include <stdio.h>
main()
{
	int lang;
	int zaehlers=1;
	int zaehlerw=1;

	printf("Wie groß soll das Quadrat sein?");
	scanf("%i" ,&lang);

	while(zaehlers<=lang)
	{
		while(zaehlerw<=lang)
		{
			printf("* ");
			zaehlerw++;
		}
		printf("\n");
		zaehlerw=1;
		zaehlers++;
	}

}
