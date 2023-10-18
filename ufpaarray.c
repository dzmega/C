#include <stdio.h>
main()
{
	int array[6]={9,12,28,30,34,43};
	int i,j;
	int eing;
	int richtig=0;


	for(i=0;i<6;i++)
	{
		printf("Bitte geben Sie den Tipp für die %i. Zahl an: ",i+1);
		scanf("%i",&eing);
		for(j=0;j<6;j++)
		{
			if(eing==array[j])
			{
				richtig++;
			}
		}
	}
	if(richtig<=3)
	{
		printf("%i richtig getippte Zahlen.\nGewinn: 0 Euro",richtig);
	}
	else if(richtig==4)
	{
		printf("%i richtig getippte Zahlen.\nGewinn: 10 Euro",richtig);
	}
	else if(richtig==5)
	{
		printf("%i richtig getippte Zahlen.\nGewinn: 250 Euro",richtig);
	}
	else
	{
		printf("%i richtig getippte Zahlen.\nGewinn: 3.000.000 Euro",richtig);
	}
}
