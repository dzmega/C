#include <stdio.h>
main()
{
	char array[5][100];
	int i;
	int k=0;

	for(i=0;i<5;i++)
	{
		printf("Bitte Name %i eingeben: ",i+1);
		scanf("%s",array[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%s",array[i]);
		if(k<4)
		{
			printf(",");
			k++;
		}
	}
	printf("\n");
}
