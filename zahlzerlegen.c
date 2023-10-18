#include <stdio.h>
main()
{
	int eing;
	int ziffer;
	int matrix[10][2]={{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0}};
	int z,s;

	printf("Bitte geben Sie eine Ganzzahl ein:");
	scanf("%i",&eing);

	while(eing>0)
	{
		ziffer=eing%10;
		eing=eing/10;
		matrix[ziffer][1]++;
	}

	for(z=0;z<10;z++)
	{
		for(s=0;s<2;s++)
		{
			if(matrix[z][1]!=0)
			{
			printf("%i	",matrix[z][s]);
			}
		}
		printf("\n");
	}
}	
