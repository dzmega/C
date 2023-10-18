#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void upgrade(int *level){
	*level+=1;
}
struct pokemon{
	char name[50];
	int hp;
	int schaden;
	int level;
	void (*upgradepointer)(int*);
};
void auswahl(int *a1,int *a2,struct pokemon wesen[5]){
	int i;
	int check=0;
	
	printf("Wählen Sie ein Pokemon aus:\n");
	printf("-----------------------------------------\n");
	for(i=0;i<5;i++){
		printf("(%i) %s\n",i+1,wesen[i].name);
	}
	printf("-----------------------------------------\n");
	printf("1. Eingabe: ");
	scanf("%i",a1);
	while(*a1>5||*a1<1){
		printf("Fehler! Neue Eingabe: ");
		scanf("%i",a1);
	}

	printf("2. Eingabe: ");
	scanf("%i",a2);
	while(*a2>5||*a2<1){
		printf("Fehler! Neue Eingabe: ");
		scanf("%i",a2);
	}
}
void kampf(struct pokemon poke1,struct pokemon poke2,int *level1, int *level2,int *c1,int *c2){
	int random;
	bool check1=false;
	bool check2=false;

	printf("%s VS %s\n",poke1.name,poke2.name);
	printf("----------------------------------\n");
	while(poke1.hp>0&&poke2.hp>0){
		random=rand()%3;
		if(check1==false){
			if(random<2){
				poke2.hp=poke2.hp-poke1.schaden;
				printf("%s hat nur noch %i hp!\n",poke2.name,poke2.hp);
			}
			else{
				printf("%s hat den Angriff blockiert!\n",poke2.name);
			}
		}
		random=rand()%3;
		if(check2==false){
			if(random<2){
				poke1.hp=poke1.hp-poke2.schaden;
				printf("%s hat nur noch %i hp!\n",poke1.name,poke1.hp);
			}
			else{
				printf("%s hat den Angriff blockiert!\n",poke1.name);
			}
		}	
	}
	printf("-----------------------------------------\n");
	if(poke1.hp<=0){
		printf("%s hat gewonnen!\n",poke2.name);
		*c2+=1;
	}
	if(poke2.hp<=0){
		printf("%s hat gewonnen!\n",poke1.name);
		*c1+=1;
	}
}
main(){
	struct pokemon wesen[5]={{"Amoonguss",7000,500,1,&upgrade},{"Charizard",5000,500,1,&upgrade},{"Raichu",4000,600,1,&upgrade},{"Blastoise",5000,500,1,&upgrade},{"Baumus",5000,700,1,&upgrade}};
	int i;
	int check=1;
	int a1=0;
	int a2=0;
	int c1=0;
	int c2=0;
	
	do{
		printf("Möchten Sie kämpfe? Ja(1) Nein(2): ");
		scanf("%i",&check);
		if(check>2||check<1){
			printf("Fehler! Falsche Eingabe!\n\n");
		}
		else if(check==1){
			auswahl(&a1,&a2,wesen);
			printf("Die ausgewählten Pokemons sind: %s & %s\n\n",wesen[a1-1].name,wesen[a2-1].name);
			kampf(wesen[a1-1],wesen[a2-1],&wesen[a1-1].level,&wesen[a2-1].level,&c1,&c2);
			if(c1==1){
				wesen[a1-1].upgradepointer(&wesen[a1-1].level);
				printf("Neues Level beträgt %i!\n",wesen[a1-1].level);
			}
			if(c2==1){
				wesen[a2-1].upgradepointer(&wesen[a2-1].level);
				printf("Neues Level beträgt %i!\n",wesen[a2-1].level);
			}
			printf("-----------------------------------------\n");
			c1=0;
			c2=0;
		}
		else{
			printf("Auf Wiedersehen!\n");
		}
	}while(check!=2);
}
