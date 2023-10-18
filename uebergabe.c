#include <stdio.h>
float addition(float zahl1, float zahl2)
{
	return zahl1+zahl2;
}
main()
{
	float eing1;
	float eing2;
	float ergebnis;

	printf("Bitte geben Sie Gleitkommazahl1 ein:");
	scanf("%f" ,&eing1);
	printf("Bitte geben Sie Gleitkommazahl2 ein:");
	scanf("%f" ,&eing2);

	ergebnis=addition(eing1,eing2);

	printf("%.2f" ,ergebnis);
}
