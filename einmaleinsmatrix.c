#include <stdio.h>
main()
{
	int matrix[9][9];
	int z,s;
	int summe;

	for(z=1;z<=9;z++)
	{
		for(s=1;s<=9;s++)
		{
			summe=z*s;
			printf("%i	",summe);
		}
		printf("\n");
	}
}
