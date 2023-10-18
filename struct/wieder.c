#include <stdio.h>
#include <string.h>
struct ich{
	char vorname[50];
	char nachname[50];
	int alter;
};
int counter1(int alter){
	alter++;
	return alter;
}
void counter2(int *alter){
	*alter=*alter+1;
}
void fausgabe(struct ich *david){
	printf("%s %s %i\n",david->vorname,david->nachname,david->alter);
}
void nausgabe(struct ich david){
	printf("%s %s %i\n",david.vorname,david.nachname,david.alter);
}
void speichern(struct ich andere[3]){
	int i=0;
	for(i;i<3;i++){
		printf("%s %s %i\n",andere[i].vorname,andere[i].nachname,andere[i].alter);
	}
	FILE *new;
	new=fopen("dieanderen2.txt","w");
	if(new==NULL){
		printf("Fehler!\n");
	}
	else{
		i=0;
		for(i;i<3;i++){
			fprintf(new,"%s %s %i\n",andere[i].vorname,andere[i].nachname,andere[i].alter);
		}
	}
}
main(){
	struct ich david={"David","Zygmunt",16};
	struct ich andere[3]={{"Alex","Magel",18},{"Calvin","Quest",23},{"Daniel","Maier",22}};
	char name[50];
	
	david.alter=counter1(david.alter);
	printf("%i\n",david.alter);
	counter2(&david.alter);
	printf("%i\n",david.alter);
	fausgabe(&david);
	nausgabe(david);
	andere[0].alter=counter1(andere[0].alter);
	printf("%i\n",andere[0].alter);
	counter2(&andere[0].alter);
	printf("%i\n",andere[0].alter);
	speichern(andere);
	printf("\n\nNamen eingeben: ");
	scanf("%s",name);
	int check=0;
	if(strcmp(david.nachname,name)==0){
		printf("%s %s %i\n",david.vorname,david.nachname,david.alter);
		check=1;
	}
	else{
		int i=0;
		if(check==0){
			for(i;i<3;i++){
				if(strcmp(andere[i].nachname,name)==0){
					printf("%s %s %i\n",andere[i].vorname,andere[i].nachname,andere[i].alter);
					check=1;
				}
			}
		}
	}
	if(check!=1){
		printf("Schüler existiert nicht!\n");
	}
}
