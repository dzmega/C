#include <stdio.h>
main()
{
	FILE *umsatz;
	float summe=0;
	float zahl;

	umsatz=fopen("umsatz.csv","r");

	if(umsatz==NULL)
	{
		printf("Dateiöffnungsfehler\n");
	}
	else
	{
		while(fscanf(umsatz,"%f",&zahl)==1)
		{
			summe=summe+zahl;
		}
		fclose(umsatz);
	}
	printf("Die Summe ist %f\n",summe);
}
