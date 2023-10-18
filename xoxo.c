#include <stdio.h>
main()
{
	int matrix[10][10];
	int z,s;

	for(z=0;z<10;z++)
	{
		for(s=0;s<10;s++)
		{
			if((z==0)||(z==9)||(s==0)||(s==9))
			{
				printf("x ");
			}
			else
			{
				printf("o ");
			}
		}
		printf("\n");
	}
}
