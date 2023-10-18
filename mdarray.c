#include <stdio.h>
main()
{
	int matrix[5][6];
	int z,s;
	int zwischen=1;

	for(z=0;z<5;z++)
	{
		for(s=0;s<6;s++)
		{
			matrix[z][s]=zwischen;
			zwischen++;
			printf("%i ",matrix[z][s]);
		}
		printf("\n");
	}
}
