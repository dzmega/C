#include <stdio.h>
#include <string.h>
int main(void)
{
	char wort[30];
	char ziel[30];

	printf("Bitte geben Sie ein Wort ein:");
	scanf("%s",wort);

	strcpy(ziel,wort);

	printf("%s\n",ziel);
}
