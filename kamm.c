#include <stdio.h>
main()
{
	int zacken;
	int oftz=1;
	int lang;
	int oftl=1;
	int abstand;
	int ofta=1;

	printf("Bitte gben Sie ein wie viele Zacken der Kamm besitzen soll:");
	scanf("%i" ,&zacken);
	printf("Bitte geben Sie ein wie lang die Zacken sein sollen:");
	scanf("%i" ,&lang);
	printf("Bitte geben Sie ein wie groß der Abstand zwischen den Zacken sein soll:");
	scanf("%i" ,&abstand);

	do
	{
		printf("*");
		oftl++;
	}while(oftl<=lang);

	do
	{
		printf("\n*");
		ofta++;
	}while(ofta<=abstand);
}
