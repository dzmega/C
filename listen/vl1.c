#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stadt
{
	char name[30];
	struct stadt *naechste;
};
struct stadt* erstellen(char stadtname[50])
{
	struct stadt *neu;
	neu=malloc(sizeof(struct stadt));
	strcpy(neu->name,stadtname);
	neu->naechste=NULL;
	return neu;
}
void anzeigen(struct stadt *cur,struct stadt *startstadt)
{
	int i=0;

	cur=startstadt;
	while(cur!=NULL){
		printf("%i. Station: %s\n",i+1,cur->name);
		i++;
		cur=cur->naechste;
	}
}
void freigeben(struct stadt *startstadt)
{
	struct stadt *dummy;

	while(startstadt!=NULL)
	{
		dummy=startstadt;
		startstadt=startstadt->naechste;
		printf("%s wird gelöscht\n",dummy->name);
		free(dummy);
	}
}
void einfugen(struct stadt *startstadt)
{
	char ort[50];
	char new[50];
	struct stadt *dummy=NULL;
	struct stadt *newstadt=NULL;
	dummy = startstadt;

	printf("Hinter welcher Stadt wollen Sie eine weitere einfügen? ");
	scanf("%s",ort);
	printf("Welche Stadt möchten Sie einfügen? ");
	scanf("%s",new);
	newstadt=malloc(sizeof(struct stadt));
	strcpy(newstadt->name,new);
	newstadt->naechste=NULL;

	while(strcmp(dummy->name,ort)!=0)
	{
		dummy=dummy->naechste;
	}
	if(strcmp(dummy->name,ort)==0)
	{
		newstadt->naechste=dummy->naechste;
		dummy->naechste=newstadt;
	}
}
main()
{
	struct stadt* startstadt=NULL;
	struct stadt* kettenende=NULL;
	struct stadt* endeneu=NULL;
	int z;
	int i;
	char dummy[50];
	char new[50];

	printf("Wie viele Städte wollen Sie aufnehmen: ");
	scanf("%i",&z);

	for(i=0;i<z;i++)
	{
		printf("Was ist die %i. Stadt: ",i+1);
		scanf("%s",dummy);
		endeneu=erstellen(dummy);
		if(startstadt==NULL)
		{
			startstadt=endeneu;
		}
		if(kettenende!=NULL)
		{	
			kettenende->naechste=endeneu;
		}
		kettenende=endeneu;
	}
	anzeigen(endeneu,startstadt);
	einfugen(startstadt);
	anzeigen(endeneu,startstadt);
	
	freigeben(startstadt);
}
