#include <stdio.h>

main()
{
	float nettowert;
	printf("Bitte geben Sie den Nettowert an:");
	scanf("%f" , &nettowert);
	float ust = 0.19;
	float bruttowert;
	bruttowert = nettowert * (1 + ust);

	printf("Nettopreisrechner:\n============================\n");
	printf("Nettowert\t%10.2f €\n" ,nettowert);
	printf("+ Ust \t%10.2f %\n________________________________\n" ,ust);
	printf("Bruttowert\t%10.2f €\n" ,bruttowert);
}
