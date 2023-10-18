#include <stdio.h>
int potenz(int *zahl,int pot)
{
	int basis=*zahl;
	int i;
	*zahl=1;
	for(i=0;i<pot;i++)
	{
		*zahl*=basis;
	}
}
float wurzel(int *wurz)
{
	int speicher=*wurz;
	int i;
	*wurz/=2;
	for(i=0;i<20;i++)
	{
		*wurz=(speicher+(*wurz * *wurz))/(2* *wurz);
	}
}
main()
{
	int zahl;
	int pot;
	int wurz;

	printf("Bitte Zahl eingeben: ");
	scanf("%i",&zahl);
	printf("Bitte gewünschte Potenz eingeben: ");
	scanf("%i",&pot);
	potenz(&zahl,pot);
	printf("Ergebnis: %i\n",zahl);
	printf("Bitte eine Zahl eingeben, von der Sie die Wurzel ziehen möchten: ");
	scanf("%i",&wurz);
	wurzel(&wurz);
	printf("Ergebnis: %i\n",wurz);
}
