#include <stdio.h>
#include <stdlib.h>
main()
{
	int anzahl;
	int i;
	int eing;
	float durch;
	
	printf("Wie viele Werte benötigen Sie? ");
	scanf("%i",&anzahl);

	int *p=malloc(anzahl*sizeof(int));
	for(i=0;i<anzahl;i++)
	{
		printf("Bitte %i Zahl eingeben: ",i+1);
		scanf("%i",&eing);
		durch=durch+eing;
		*(p+i)=eing;
	}
	durch=durch/anzahl;
	printf("Der Durchschnitt beträgt %f\n",durch);
	free (p);
}
