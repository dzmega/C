#include <stdio.h>
#include <string.h>
int main(void)
{
	char wort1[30];
	char wort2[30];
	int gleich;

	printf("Bitte geben Sie das erste Wort ein:");
	scanf("%s",wort1);
	printf("Bitte geben Sie das zweite Wort ein:");
	scanf("%s",wort2);

	gleich=strcmp(wort1,wort2);
	
	if(gleich==0)
	{
		printf("Die beiden Wörter sind identisch\n");
	}
	else
	{
		printf("Die beiden Wörter sind nicht identisch\n");
	}
}
