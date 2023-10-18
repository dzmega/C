#include <stdio.h>
#include <string.h>
void giessen(char name[],float *hoehe){
	float wasser;
	float diff;
	printf("Wie viel Liter Wasser möchten Sie giessen: ");
	scanf("%f",&wasser);
	if(wasser>5){
		diff=wasser-5;
		*hoehe=*hoehe+wasser-diff;
		printf("Bitte den Baum nicht übergießen!!!\n")
		printf("Super %s ist jetzt %.2f Meter groß!\n",name,*hoehe);
	}
	else{
		if(wasser<0){
			printf("Fehler!\n");
		}
		else{
			*hoehe=*hoehe+wasser;
			printf("Super %s ist jetzt %.2f Meter groß!\n",name,*hoehe);
		}
	}
}
struct baum{
	char name[50];
	float hoehe;
	void (*giessenpointer)(char[],float*);
};
main(){
	char dummy_name[50];
	float dummy_hoehe;
	struct baum user={"",0,&giessen};
	int check=1;
	printf("Geben Sie einen Namen ein: ");
	scanf("%s",dummy_name);
	strcpy(user.name,dummy_name);
	printf("Geben Sie die Höhe ein: ");
	scanf("%f",&user.hoehe);
	do{
		printf("Möchten Sie den Baum giessen? Ja(1) Nein(2): ");
		scanf("%i",&check);
		if(check==1){
			user.giessenpointer(user.name,&user.hoehe);
		}
	}while(check==1);
}
