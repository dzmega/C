#include <stdio.h>
void funktion1(int *z1, int *z2)
{
	printf("Zahl 1 eingeben: ");
	scanf("%i",z1);
	printf("Zahl 2 eingeben: ");
	scanf("%i",z2);
}
void funktion2(int *z1, int *z2)
{
	*z1=*z1 *2;
	*z2=*z2 *2;
	printf("Zahl1=%i Zahl2=%i\n",*z1,*z2);
}
void funktion3(int *z1, int *z2)
{
	int speicher=*z1;
	*z1=*z2;
	*z2=speicher;
	printf("Zahl1=%i Zahl2=%i\n",*z1,*z2);
}
void funktion4(int *z1, int *z2)
{
	int zahl;
	printf("Bitte Zahl eingeben: ");
	scanf("%i",&zahl);
	*z1=*z1+zahl;
	*z2=*z2+zahl;
	printf("Zahl1=%i Zahl2=%i\n",*z1,*z2);
}
main()
{
	int z1;
	int z2;
	funktion1(&z1,&z2);
	printf("Zahl1=%i Zahl2=%i\n",z1,z2);
	funktion2(&z1,&z2);
	funktion3(&z1,&z2);
	funktion4(&z1,&z2);
}
