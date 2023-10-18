#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stadt{
	char name[30];
	struct stadt *next;
};
struct stadt* erstellen(char name[30]){
	struct stadt *neu;
	neu=malloc(sizeof(struct stadt));
	strcpy(neu->name,name);
	neu->next=NULL;
	return neu;
}
void anzeigen(struct stadt* aktuell){
	int i=1;
	while(aktuell!=NULL){
		printf("%i. Station: %s\n",i,aktuell->name);
		aktuell=aktuell->next;
		i++;
	}
}
void freigeben(struct stadt* aktuell){
	struct stadt *dummy;
	while(aktuell!=NULL){
		dummy=aktuell;
		aktuell=dummy->next;
		printf("%s wird gelöscht...\n",dummy->name);
		free(dummy);
	}
}
void einfugen(struct stadt* aktuell){
	char newname[30];
	char nach[30];
	struct stadt * neuestadt;
	printf("Geben Sie den Namen der neuen Stadt ein: ");
	scanf("%s",newname);
	printf("Nach welcher Stadt soll die neue Stadt eingefügt werden: ");
	scanf("%s",nach);
	neuestadt=malloc(sizeof(struct stadt));
	strcpy(neuestadt->name,newname);
	neuestadt->next=NULL;
	while(strcmp(aktuell->name,nach)!=0){
		aktuell=aktuell->next;
	}
	if(strcmp(aktuell->name,nach)==0){
		neuestadt->next=aktuell->next;
		aktuell->next=neuestadt;
		printf("Stadt wurde hinzugefügt\n");
	}
}
void loschen(struct stadt* aktuell){
	char stadtloschen[30];
	struct stadt* dummy;
	printf("Welche Stadt soll gelöscht werden: ");
	scanf("%s",stadtloschen);
	while(strcmp(aktuell->name,stadtloschen)!=0){
		dummy=aktuell;
		aktuell=aktuell->next;
	}
	if(strcmp(aktuell->name,stadtloschen)==0){
		printf("%s wird gelöscht...\n",aktuell->name);
		dummy->next=aktuell->next;
		free(aktuell);
	}
}
main(){
	struct stadt *start=NULL;
	struct stadt *aktuell=NULL;
	struct stadt *next=NULL;
	FILE *datei;
	char name[30];
	int check;

	datei=fopen("stadt.txt","r");
	if(datei==NULL){
		printf("Fehler!\n");
	}
	else{
		while(fscanf(datei,"%s",name)!=EOF){
			next=erstellen(name);
			if(start==NULL){
				start=next;
			}
			if(aktuell!=NULL){
				aktuell->next=next;
			}
			aktuell=next;
		}
		aktuell=start;
		anzeigen(aktuell);
		aktuell=start;
		einfugen(aktuell);
		aktuell=start;
		loschen(aktuell);
		aktuell=start;
		anzeigen(aktuell);
		aktuell=start;
		freigeben(aktuell);
	}
	fclose(datei);
}
