#include <stdio.h>
#include <string.h>
int main(void)
{
	char wort1[30];
	char wort2[20];

	printf("Bitte geben sie das erste Wort ein:");
	scanf("%s",wort1);
	printf("Bitte geben sie das zweite Wort ein:");
	scanf("%s",wort2);

	strcat(wort1,wort2);
	printf("%s\n",wort1);
}
