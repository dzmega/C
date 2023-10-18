#include <stdio.h>

main()
{
	int zahl=1;
	int alter;
	int person;
	int eintritt=0;
	int draussen=0;

	printf("Wie viele Personen sind in der Gruppe?");
	scanf("%i" ,&person);
	
	while(zahl <= person)
	{
		printf("Bitte geben Sie das Alter der %i. Person an:",zahl);
		scanf("%i" ,&alter);
		zahl=zahl+1;
		if(alter>18)
		{
			eintritt=eintritt+1;
		}
		else
		{
			draussen=draussen+1;
		}
	}
	printf("%i Personen dürfen eintreten, der Rest von %i Personen muss draussen bleiben!\n",eintritt ,draussen);
}
