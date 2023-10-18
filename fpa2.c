#include <stdio.h>
#include <string.h>

main()
{
	char passwort[20]="Kellner";
	char pw[20];
	float array[11]={0};
	int eing=1;
	float umsatz;
	int i;
	float gesamt;
	int z=0;

	printf("Bitte Passwort eingeben: ");
	scanf("%s",pw);
	if(strcmp(pw,passwort)==0)
	{
		printf("Tisch eingeben: ");
		scanf("%i",&eing);
		while(eing!=0)
		{
			if(eing<1||eing>10)
			{
				printf("Tisch muss zwischen 1 und 10 sein!\n");
			}
			else
			{
				printf("Umsatz eingeben: ");
				scanf("%f",&umsatz);
				array[eing]=array[eing]+umsatz;
			}
			printf("Tisch eingeben: ");
			scanf("%i",&eing);
		}
		printf("\nTisch\t\tUmsatz\n");
		for(i=10;i>=1;i--)
		{
			printf("%i\t\t%.2f\n",i,array[i]);
			z++;
			gesamt=gesamt+array[i];
		}
		gesamt=gesamt/z;
		printf("Der durchschnittliche Umsatz je Tisch beträgt %.2f EUR.\n",gesamt);
	}
	else
	{
		printf("Falsche Passworteingabe!\n");
	}
}
