#include <stdio.h>
main()
{
	int array[100]={0};
	int eing;
	int i;
	int summe=0;

	printf("Aus wie vielen Zahlen moechten Sie den Mittelwert errechnen?");
	scanf("%i" ,&array[i]);
	
	for(i=0;i<array[i];i++)
	{
		printf("Bitte geben Sie die %i. Zahl ein:",i+1);
		scanf("%i" ,&array[i]);
		summe=summe+array[i];
	}
	summe=summe/eing;
	printf("Der Mittelwert ist %i" ,summe);
}
