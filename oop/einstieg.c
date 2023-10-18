#include <stdio.h>
struct mensch{
	char name[50];
	int alter;
	int stand;
	void (*geburtstag)(int *);
	void (*heiraten)(int *,char[]);
};
void geburtstag(int *alter){
	*alter=*alter+1;
	printf("Ich habe Geburtstag!\n");
}
void heiraten(int *stand,char name[]){
	int check=0;
	*stand=*stand+1;
	printf("Glückwunsch! Sie sind jetzt verheiratet\n");
	printf("Möchten sie einen neuen Namen eingeben? Ja (1) Nein (0): ");
	scanf("%i",&check);
	if(check==1){
		printf("Geben Sie den neuen Namen ein: ");
		scanf("%s",name);
		printf("Glückwunsch Sie heißen jetzt %s\n",name);
	}
}
main(){
	struct mensch typ={"Plonka",18,0,&geburtstag,&heiraten};
	printf("Ich bin %i\n",typ.alter);
	typ.geburtstag(&typ.alter);
	printf("Jetzt bin ich %i\n",typ.alter);
	typ.heiraten(&typ.stand,typ.name);
}
