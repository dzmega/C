#include <stdio.h>
main()
{
	int array[100]={0};
	int i;
	int eing;
	int max; 
	int min;

	printf("Bitte geben Sie ein, wie viele Zahlen Sie einlesen möchten:");
	scanf("%i" ,&eing);
	
	for(i=0;i<eing;i++)
	{
		printf("Bitte geben Sie die %i. Zahl an:",i+1);
		scanf("%i" ,&array[i]);
	}
	max=array[0];
	min=array[0];
	for(i=0;i<eing;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
		if(min>array[i])
		{
			min=array[i];
		}
	}
	printf("Das Maximum ist %i\n",max);
	printf("Das Minimum ist %i\n",min);
}
