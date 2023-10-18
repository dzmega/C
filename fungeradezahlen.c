#include <stdio.h>
void test (int ergebnis)
{
	if(ergebnis<=0)
	{
		printf("Ungültiger Wert!");
	}
	else
	{
		if(ergebnis%2!=0)
		{
			printf("Die Zahl ist ungerade!");
		}
		else
		{
			printf("Die Zahl ist gerade!");
		}
	}
}
main()
{
	int eing;

	printf("Bitte geben Sie eine positive Zahl:");
	scanf("%i" ,&eing);

	test(eing);
}
