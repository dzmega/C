#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[200];
	char wohnort[100];
	char street[30];

	printf("Bitte geben Sie den Vor- und Nachnamen ein:");
	gets(name);
	printf("Bitte geben Sie die Postleitzahl und den Wohnort ein:");
	gets(wohnort);
	printf("Bitte geben Sie die Straße und Hausnummer");
	gets(street);

	strcat(name,wohnort);
	strcat(name,street);

	printf("%s\n",name);
}
