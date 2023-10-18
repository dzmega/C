#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[]={"Fi10"};
	char password[]={"topsecret"};
	char en[30];
	char ep[30];

	printf("Bitte geben Sie den Benutzernamen ein:");
	scanf("%s",en);
	printf("Bitte geben Sie das Passwort ein:");
	scanf("%s",ep);

	if((strcmp(name,en)==0)&&(strcmp(password,ep)==0))
	{
		printf("Anmeldung erfolgreich\n");
	}
	else
	{
		printf("Anmeludng fehlgeschlagen\n");
	}
}
