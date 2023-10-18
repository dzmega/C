#include <stdio.h>
main()
{
	char vname[30];
	char nname[30];
	int t;
	int m;
	int j;
	int jahr=2021;
	int alter;

	printf("Bitte geben Sie Ihren Vornamen ein:");
	scanf("%s",vname);
	printf("Bitte geben Sie Ihren Nachnamen ein:");
	scanf("%s",nname);
	printf("Bitte geben Sie den Tag Ihres Geburtsdatums ein:");
	scanf("%i",&t);
	printf("Bitte geben Sie den Monat Ihres Geburtsdarums als zahl ein:");
	scanf("%i",&m);
	printf("Bitte geben Sie Ihr Geburtsjahr ein:");
	scanf("%i",&j);

	alter=jahr-j;
	
	switch(m)
	{
		case 1: printf("\n%s %s ist am %i.Januar.%i geboren",vname,nname,t,j); break;
		case 2: printf("\n%s %s ist am %i.Februar.%i geboren",vname,nname,t,j); break;
		case 3: printf("\n%s %s ist am %i.März.%i geboren",vname,nname,t,j); break;
		case 4: printf("\n%s %s ist am %i.April.%i geboren",vname,nname,t,j); break;
		case 5: printf("\n%s %s ist am %i.Mai.%i geboren",vname,nname,t,j); break;
		case 6: printf("\n%s %s ist am %i.Juni.%i geboren",vname,nname,t,j); break;
		case 7: printf("\n%s %s ist am %i.Juli.%i geboren",vname,nname,t,j); break;
		case 8: printf("\n%s %s ist am %i.August.%i geboren",vname,nname,t,j); break;
		case 9: printf("\n%s %s ist am %i.September.%i geboren",vname,nname,t,j); break;
		case 10: printf("\n%s %s ist am %i.Oktober.%i geboren",vname,nname,t,j); break;
		case 11: printf("\n%s %s ist am %i.November.%i geboren",vname,nname,t,j); break;
		case 12: printf("\n%s %s ist am %i.Dezember.%i geboren",vname,nname,t,j); break;
		default: printf("Monat nicht vorhanden!");
	}

	if(alter<18)
	{
		printf(" und ist minderjährig.\n");
	}
	else
	{
		printf(" und ist volljährig.\n");
	}
}
