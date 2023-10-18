#include <stdio.h>
main()
{
	char wort[30];
	int ausgeben;
	int schneiden;
	int i;

	printf("Bitte geben ein Wort ein:");
	scanf("%s",wort);
	printf("Ab dem wievielten Zeichen soll ausgegeben werden?");
	scanf("%i",&ausgeben);
	printf("Wie viele Zeichen möchten Sie abschneiden?");
	scanf("%i",&schneiden);
	
	printf("Der Textteil ist:");

	for(i=0;i<ausgeben;i++)
	{
		printf("%c",wort[schneiden]);
		schneiden++;
	}

	printf("\n");
}
