														#include <stdio.h>
main()
{
	char wort1[30];
	char wort2[30];
	int i;
	int j;

	printf("Bitte geben Sie das erste Wort ein:");
	scanf("%s",wort1);
	printf("Bitte geben Sie das zweite Wort ein:");
	scanf("%s",wort2);

	for(i=0;wort1[i]!='\0';i++)
	{
		printf("%c",wort1[i]);
	}
	printf(" ");
	for(j=0;wort2[j]!='\0';j++)
	{
		printf("%c",wort2[j]);
	}
}
