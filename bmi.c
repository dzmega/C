#include <stdio.h>
main()
{
	float gewicht;
	float groesse;
	float bmi;

	printf("BMI für Männer\n");
	printf("--------------\n");
	printf("Gewicht in kg:");
	scanf("%f" ,&gewicht);
	printf("Groesse in m:");
	scanf("%f" ,&groesse);

	bmi = gewicht / (groesse * groesse);

	if(bmi<20)
	{
		printf("Sie haben Untergewicht\n");
	}
	else
	{
		if(bmi>25)
		{
			printf("Sie haben Übergewicht\n");
		}
		else
		{
			printf("Sie haben Normalgewicht\n");
		}
	}
}
