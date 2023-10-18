#include <stdio.h>
main()
{
	int a=1;
	int b;

	scanf("%i" ,&b);

	while(a<10)
	{
		if(b<a)
		{
			b=b*2;
		}
		a=a+1;
	}
	if(b>100)
	{
		b=b/2;
	}
	else
	{
		b=b+a;
	}

	printf("%i" ,b);
}
