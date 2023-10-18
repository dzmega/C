#include <stdio.h>
main()
{
	int darlehnensumme;
	int jahreszins;
	int tilgungsanteil;
	float mtlzinsanteil;
	float mtltilgungsanteil;
	float rest;
	int monate=1;
	int monate2;
	int jahre;
	int anuitaet;

	printf("Darlehnensumme:");
	scanf("%i" ,&darlehnensumme);
	printf("Zinssatz in (jaehrlich):");
	scanf("%i" ,&jahreszins);
	printf("Anfaengliche Tilgung in (jaehrlich):");
	scanf("%i" ,&tilgungsanteil);

	mtlzinsanteil=darlehnensumme*jahreszins/100/12;
	mtltilgungsanteil=darlehnensumme*tilgungsanteil/100/12;
	anuitaet=mtlzinsanteil+mtltilgungsanteil;

	printf("Monat	mtl. Zins	Tilgung			Rest\n");

	do
	{	
		rest=darlehnensumme-mtlzinsanteil;
		mtlzinsanteil=mtlzinsanteil-mtlzinsanteil*5/100/12;
		mtltilgungsanteil=anuitaet-mtlzinsanteil;
		printf("%i	 %10.2f	 %10.2f		%10.2f\n",monate ,mtlzinsanteil ,mtltilgungsanteil ,rest);
		monate=monate+1;
		jahre=monate/12;
		monate2=monate%12;
	}
	while(rest>0);

	printf("Sie sind in %i Jahren und %i Monaten schuldenfrei!\n",jahre,monate2);
}
		




