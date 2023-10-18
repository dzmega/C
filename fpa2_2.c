#include <stdio.h>

int nurbuchstaben(char wort[])
{
	int i;
	int j=0;
	int array[3];

	for(i=0;wort[i]!='\0';i++)
	{
		if((wort[i]>=65&&wort[i]<=90)||(wort[i]>=97&&wort[i]<=122))
		{
			j++;
		}
	}
	return j;
}
void quadratzahl(float array[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%f\n",array[i]*array[i]);
	}
}
main()
{
	char wort[3][30]={{"Corona"},{"ist"},{"doof"}};
	int anzahl;
	int i;
	float array[5]={3,4,-2.25,5,-12.5};
	float quad;

	for(i=0;i<3;i++)
	{
		anzahl=nurbuchstaben(wort[i]);
		printf("%s = %i Buchstaben\n",wort[i],anzahl);
	}
	quadratzahl(array);
}
