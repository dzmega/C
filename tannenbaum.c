#include <stdio.h>
main()
{
	int eing;
	int i;
	int j;
	int gesamt=1;
	int leer;
	int s;
	int stamm=2;

	printf("Wie hoch soll der Tannenbaum werden?");
	scanf("%i" ,&eing);
	printf("\n");

	leer=eing-1;

	for(i=0;i<eing;i++)
	{
		for(j=0;j<leer;j++)
		{
			printf(" ");
		}
		leer--;
		for(s=0;s<gesamt;s++)
		{
			printf("\e[32mx");
		}
		printf("\n");
		gesamt=gesamt+2;
	}
	leer=eing-1;
	for(i=0;i<stamm;i++)
	{
		for(j=0;j<leer;j++)
		{
			printf(" ");
		}
		printf("\e[39mx\n");
	}
}
