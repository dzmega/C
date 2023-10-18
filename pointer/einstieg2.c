#include <stdio.h>
void funktion(int *a, int *b)
{
	int zwischenspeicher;
	zwischenspeicher=*a;
	*a=*b;
	*b=zwischenspeicher;
}
main()
{
	int a=1;
	int b=2;

	printf("a=%i b=%i\n",a,b);
	funktion(&a,&b);
	printf("a=%i b=%i\n",a,b);
	printf("Die Variable ist bei %p\n",a);
}
