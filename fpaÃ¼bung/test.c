#include <stdio.h>
struct mensch{
	char name[50];
	char nachname[50];
	int alter;
};
void funktion(struct mensch typ){
	printf("Sein Name lautet: %s\n",typ.name);
//	printf("Sein Nachname lautet: %s\n",typ.nachname);
//	printf("Sein alter ist: %i\n",alter);
}
main(){
	struct mensch typ={"David","Zygmunt",16};
	funktion(typ);
}
