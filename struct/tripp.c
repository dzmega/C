#include <stdio.h>
#include "aufteilen.h"
#include "aufteilen3.h"
struct reisende{
	char vorname[50];
	char nachname[50];
	int kategorie;
};
struct stadt{
	char ort[50];
	char hotel[50];
	int dauer;
	char fuhrer[50];
};
struct reise{
	char datum[50];
	int reisedauer;
	char leiter[50];
	struct reisende r[50];
	struct stadt s[50];

};
main(){
	FILE *staedte;
	FILE *reisende;
	struct reise tabelle={"20.06.2022",10,"Zygmunt"}
	staedte=fopen("Stadt.txt","r");
	reisende=fopen("Reisende.txt","r");
	if(staedte==NULL||reisende==NULL){
		printf("Fehler!\n");
	}
	else{
		
	}
}
