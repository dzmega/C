#include <stdio.h>
main()
{
	int i = 1;
	int a = 1;

	while(i<=10)
	{
			while(a<=i)
		{
			printf("*");
			a=a+1;
		}
		printf("\n");
		i=i+1;
	}
}
