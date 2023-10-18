#include <stdio.h>
main()
{
	int array[10]={0};
	int eing;
	int ziffer;
	int i;

	printf("Bitte geben Sie eine Zahl ein:");
	scanf("%i",&eing);

	while(eing>0)
	{
		ziffer=eing%10;
		array[ziffer]=array[ziffer]+1;
		eing=eing/10;
	}
	for(i=0;i<10;i++)
	{
		printf("Die Ziffer %i kommt %i mal vor.\n",i,array[i]);
	}
}
