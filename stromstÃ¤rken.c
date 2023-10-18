#include <stdio.h>

main()
{
	float u;
	float r;
	float i;

	printf("Elektrische Spannung\n");
	printf("--------------------\n");
	printf("Bitte geben Sie die gegebenen Groeßen ein,\nfür die gesuchte Groeße geben Sie bitte\neine negative zahl ein (z.B. -1)\n");
	printf("Spannung eingeben:");
	scanf("%f" ,&u);
	printf("Wiederstand eingeben:");
	scanf("%f" ,&r);
	printf("Bitte Stromstärke eingeben:");
	scanf("%f" ,&i);

	if(u<1)
	{
		u = r * i;
		printf("Die Spannung beträgt %f Volt\n" ,u);
	}
	else
	{
		if(r<1)
		{
			r = u / i;
			printf("Der Widerstand beträgt %f Ohm\n" ,r);
		}
		else
		{
			i = u / r;
			printf("Der Strom beträgt %f Ampere\n" ,i);
		}
	}
}
