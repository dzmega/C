#include <stdio.h>

main()
{
	int a;
	int b;
	int c = 10;

	printf("Bitte Zahl 1 eingeben:");
	scanf("%i" ,&a);
	printf("Bitte Zahl 2 eingeben:");
	scanf("%i" ,&b);

	if(a<b)
	{
		if(b<c)
		{
			a = a + b;
			b = b + c;
		}
		else
		{
			a = a + c;
		}
	}
	else
	{
		a = a + b + c;
	}
	printf("a=%i ; b=%i ; c=%i" ,a ,b ,c);
}


