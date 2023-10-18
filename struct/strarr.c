#include <stdio.h>

struct schueler
{
	char vorname[30];
	char nachname[30];
	int alter;
	int klasse;
};

main()
{
	int i=0;
	struct schueler eing[3];
	
	for(i=0;i<3;i++)
	{
		printf("Vorname: ");
		scanf("%s",eing[i].vorname);
		printf("Nachname: "),
		scanf("%s",eing[i].nachname);
		printf("Alter: "),
		scanf("%i",&eing[i].alter);
		printf("Klasse: ");
		scanf("%i",&eing[i].klasse);
		printf("-----------------------\n");
	}
	for(i=0;i<3;i++)
	{
		printf("%s %s ist %i Jahre alt und geht in die %i. Klasse\n",eing[i].vorname,eing[i].nachname,eing[i].alter,eing[i].klasse);
	}
}
