#include <stdio.h>
main()
{
	int zehner=0;
	int einer=0;

	printf("Zählen mit zwei Schleifen:");

	while(zehner!=10)
	{
		while(einer!=10)
		{
			printf("%i%i\n",zehner ,einer);
			einer++;
		}
		einer=0;
		zehner++;
	}
}
