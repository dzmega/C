#include <stdio.h>
main()
{
	char wort[30];
	int i;
	int j;

	printf("Bitte geben Sie ein Wort ein:");
	scanf("%s",wort);

	for(i=0;wort[i]!='\0';i++);

	j=i;
	
	for(j;j>=0;j--)
	{
		printf("%c",wort[j]);
	}
}
