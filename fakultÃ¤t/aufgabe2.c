#include <stdio.h>
int rechner(int z)
{
	z++;
	if(z==6)
	{
		return 1;
	}
	else
	{
		return z*rechner(z);
	}	
}
main()
{
	printf("%i\n",rechner(0));
}
