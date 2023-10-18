#include <stdio.h>
main()
{
	float array[10]={15,19.4,3,2.5,97,4,84.2,76,65,22.3};
	int modus;
	int i;
	int j;
	int k;
	float zwischen;

	printf("Die Sortierung soll\nabsteigend(0)\naufsteigend(1)\nerfolgen:");
	scanf("%i" ,&modus);

	if(modus==0)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(array[j]<array[j+1])
				{
					zwischen=array[j];
					array[j]=array[j+1];
					array[j+1]=zwischen;
				}
			}
		}
	}
	else
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(array[j]>array[j+1])
				{
					zwischen=array[j];
					array[j]=array[j+1];
					array[j+1]=zwischen;
				}
			}
		}
	}
	for(k=0;k<10;k++)
	{
		printf("%.1f\n" ,array[k]);
	}
}
