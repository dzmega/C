#include <stdio.h>
main()
{
	int array[5]={3,1,14,2,7};
	int zwischen;
	int runden=4;
	int z=1;
	int i=0;

	while(z<=runden)
	{
		while(i<=4)
		{
			if(array[i]>array[i+1])
			{
				zwischen=array[i];
				array[i]=array[i+1];
				array[i+1]=zwischen;
			}
			i++;
		}
		i=0;
		z++;
	}
	for(i=0;i<=4;i++)
	{
		printf("%i\t",array[i]);
	}
}
