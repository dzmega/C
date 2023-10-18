#include <stdio.h>

main()
{
	int a;
	int b;

	printf("Zahl A eingeben:");
	scanf("%i" ,&a);
	printf("Zahl B eingeben:");
	scanf("%i" ,&b);

	if(a == b)
	{
		a = a + b;
		b = b + 1;
	}

	a = a * b;
	b = b / 2;

	if(a < 10)
	{
		a = a + 10;
	}
	printf("Zahl A=%i ; Zahl B=%i\n" ,a ,b);
}
