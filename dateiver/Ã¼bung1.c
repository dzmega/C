#include <stdio.h>
main()
{
	FILE *zahlen;
	float summe=0;
	float ziffer;
	int z=0;
	float d=0;

	zahlen=fopen("zahlen.csv","r");
	if(zahlen==NULL)
	{
		printf("Dateiöffnungsfehler!!\n");
	}
	else
	{
		while(fscanf(zahlen,"%f",&ziffer)==1)
		{
			summe=summe+ziffer;
			z++;
		}
	}
	d=summe/z;
	printf("Der Durchschnitt der eingelesenen Zahlen ist %.2f\n",d);
}
