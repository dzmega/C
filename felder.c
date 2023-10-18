#include <stdio.h>
main()
{
	int matrix[5][6]={{46,0,64,2,3,0},{3,2,0,32,0,0},{0,0,2,0,0,9},{0,0,0,56,0,0},{0,3,45,0,0,0}};
	int z,s;
	int zwischen=1;

	for(z=0;z<5;z++)
	{
		for(s=0;s<6;s++)
		{
			printf("%2i",matrix[z][s]);
		}
		printf("\n");
	}
	printf("\n");
	for(z=0;z<5;z++)
	{
		for(s=0;s<6;s++)
		{
			matrix[z][s]=1;
			printf("%2i",matrix[z][s]);
		}
		printf("\n");
	}
	printf("\n");
	for(z=0;z<5;z++)
	{
		for(s=0;s<6;s++)
		{
			matrix[z][s]=zwischen;
			printf("%2i",matrix[z][s]);
		}
		zwischen++;
		printf("\n");
	}	
}
