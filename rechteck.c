#include <stdio.h>
main()
{
	int langa;
	int langb;
	int zaehlers=1;
	int zaehlerw=1;

	printf("Lange Seite a:");
	scanf("%i" ,&langa);
	printf("Lange Seite b:");
	scanf("%i" ,&langb);

	while(zaehlers<=langa)
	{
		while(zaehlerw<=langb)
		{
			printf("* ");
			zaehlerw++;
		}
		printf("\n");
		zaehlerw=1;
		zaehlers++;
	}
}
