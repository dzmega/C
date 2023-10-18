#include <stdio.h>
void umrechner (int ergebnis)
{
	ergebnis=ergebnis*(-1);
	printf("%i\n",ergebnis);
}
main()
{
	int eing;

	printf("Zahl:");
	scanf("%i" ,&eing);

	umrechner(eing);
}
