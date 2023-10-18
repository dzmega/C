#include <stdio.h>

void midlifecrisis(char vorname[50],char nachname[50],int *alter)
{
	*alter=*alter+1;
	printf("Neuer Nachname: ");
	scanf("%s",nachname);
	printf("Vorname: %s\nNachname: %s\nAlter:%i\n\n",vorname,nachname,*alter);
}
void tinderphase(char vorname[50],char nachname[50],int *alter,char nickname[50])
{
	*alter=*alter-9;
	printf("Nickname eingeben: ");
	scanf("%s",nickname);
	printf("Nickname: %s\n",nickname);
	printf("Alter: %i\n\n",*alter);
}
void alterscheck(int *talter,int *oalter)
{
	int copy;
	copy=*talter;
	copy=copy-4;
	if(*talter>*oalter)
	{
		printf("Weiter wischen\n");
	}
	else if(*talter<copy)
	{
		printf("Jackpot!!!\n");
	}
	else
	{
		printf("Gutes Match!\n");
	}
}
main()
{
	char vorname[50];
	char nachname[50];
	int alter;
	int oalter;
	char nickname[50];
	int talter;
	
	printf("Vorname eingeben: ");
	scanf("%s",vorname);
	printf("Nachname eingeben: ");
	scanf("%s",nachname);
	printf("Alter eingeben: ");
	scanf("%i",&alter);
	oalter=alter;
	printf("\n");
	midlifecrisis(vorname,nachname,&alter);
	tinderphase(vorname,nachname,&alter,nickname);
	printf("Alter des Tindermatches eingeben: ");
	scanf("%i",&talter);
	alterscheck(&talter,&oalter);
}
