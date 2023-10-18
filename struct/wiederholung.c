#include <stdio.h>
#include <string.h>
struct mensch
{
	char vorname[50];
	char nachname[50];
	int alter;
};
int alterzaehler(int alter)
{
	alter++;
	return alter;
}
void alterzaehler2(int *alter)
{
	*alter=*alter+1;
}
void print(struct mensch *david)
{
	printf("Mein Vorname: %s\n",david->vorname);
	printf("Mein Nachname: %s\n",david->nachname);
	printf("Mein Alter: %i\n\n",david->alter);
}
void save(struct mensch andere[3])
{
	FILE *new;
	new=fopen("dieanderen.txt","w");
	int i;

	for(i=0;i<3;i++)
	{
		fprintf(new,"%s;%s;%i\n",andere[i].vorname,andere[i].nachname,andere[i].alter);
	}
}
main()
{
	struct mensch david={"David","Zygmunt",16};
	struct mensch andere[3]={{"Rena","Rudolf",25},{"Nils","Zahn",23},{"Daniel","Maier",22}};
	int i;
	char eing[50];
	int check=0;

	david.alter=alterzaehler(david.alter);
	printf("%i\n",david.alter);
	alterzaehler2(&david.alter);
	printf("%i\n\n",david.alter);
	print(&david);
	andere[0].alter=alterzaehler(andere[0].alter);
	printf("%i\n",andere[0].alter);
	alterzaehler2(&andere[0].alter);
	printf("%i\n\n",andere[0].alter);

	/*for(i=0;i<3;i++)
	{
		print(&andere[i]);
		printf("\n");
	}*/

	save(andere);
	printf("Namen eingeben: ");
	scanf("%s",eing);
	if(strcmp(eing,david.nachname)==0)
	{
		printf("%s %s %i\n",david.vorname,david.nachname,david.alter);
		check=1;
	}
	for(i=0;i<3;i++)
	{
		if(strcmp(eing,andere[i].nachname)==0)
		{
			printf("%s %s %i\n",andere[i].vorname,andere[i].nachname,andere[i].alter);
			check=1;
		}
	}
	if(check==0)
	{
		printf("Keine Person mit diesem Namen vorhanden!\n");
	}
}
