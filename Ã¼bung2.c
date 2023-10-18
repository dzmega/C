#include <stdio.h>
main()
{
	int a;

	printf("Bitte Zahl a eingeben:");
	scanf("%i" ,&a);

	while(a<5)
	{
		if(a%2!=0)
		{
			a=a+1;
		}
		else
		{
			a=a+3;
		}
		printf("a=%i" ,a);
	}
}
