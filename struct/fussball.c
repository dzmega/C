#include <stdio.h>
struct spieler
{
	char vorname[30];
	char nachname[30];
	int nummer;
	int position;
};
void ausgabe(struct spieler team[11])
{
	int i=0;
	int j=0;

	for(i=1;i<=4;i++)
	{
		if(i==1)
		{
			printf("Torwart:\n");
		}
		if(i==2)
		{
			printf("Abwehr:\n");
		}
		if(i==3)
		{
			printf("Mittelfeld:\n");
		}
		if(i==4)
		{
			printf("Sturm:\n");
		}
		printf("================\n");
		for(j=0;j<4;j++)
		{
			if(team[j].position==i)
			{
				printf("%s %s\n",team[j].vorname,team[j].nachname);
				printf("Rückennummer %i\n\n",team[j].position);
			}
		}
	}
}
main()
{
	int i;
	struct spieler team[11];

	for(i=0;i<4;i++)
	{
		printf("Spieler %i:\n",i+1);
		printf("Bitte den Spielervornamen eintragen: ");
		scanf("%s",team[i].vorname);
		printf("Bitte den Spielernachnamen eintragen: "); 
		scanf("%s",team[i].nachname);
		printf("Bitte die Rückennummer eintragen: ");
		scanf("%i",&team[i].nummer);
		printf("Bitte die Position eintragen: ");
		scanf("%i",&team[i].position);
	}
	ausgabe(team);
}
