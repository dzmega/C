#include <stdio.h>}
int einlesen()
{
	int zahl;

	printf("Bitte Zahl eingeben: ");
	scanf("%i",&zahl);
	if(zahl<10)
	{
		return (0);
	}
	else
	{
		return zahl+einlesen();
	}
}
main()
{
	printf("%i\n",einlesen());
}
