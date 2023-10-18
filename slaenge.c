#include <stdio.h>
main()
{
	char wort[30];
	int i;

	printf("Bitte geben sie ein Wort ein:");
	scanf("%s",wort);

	for(i=0;wort[i]!='\0';i++);

	printf("Das Wort %s hat %i Buchstaben",wort,i);
}
