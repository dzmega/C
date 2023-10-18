#include <stdio.h>

int test (int);

int main (void)
{
	int zahl;
	int ergebnis;

	printf("Bitte zahl eingeben:");
	scanf("%i" ,&zahl);
	if(zahl<1)
	{
		printf("Die Zahl ist -1\n");
	}
	else
	{
		printf("Die Zahl ist 1\n");
	}
	return 0;
}
int test (zahl)
{
	return(zahl*-1);
}
