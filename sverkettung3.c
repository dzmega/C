#include <stdio.h>
#include <string.h>
int main(void)
{
	char wort1[20];
	char wort2[20];
	int lang;
	int frei;

	printf("Bitte geben Sie das erste Wort ein:");
	scanf("%s",wort1);
	printf("Bitte geben Sie das zweite Wort ein:");
	scanf("%s",wort2);

	lang=strlen(wort1);
	frei=20-lang-1;

	strncat(wort1,wort2,frei);
	printf("%s",wort1);
}
