#include <stdio.h>
#include <string.h>
struct buch{
	char name[50];
	int check;
};
main(){
	int eing;
	struct buch buecher[10];
	char titel[50];
	int i=0;
	int j;
	int z;
	do{
		printf("1. Bücher aufnehmen\n");
		printf("2. Bücher anzeigen\n");
		printf("3. Buch ausleihen\n");
		printf("4. Buch zurückgeben\n");
		printf("5. Beenden\n");
		printf("Geben Sie eine Option ein: ");
		scanf("%i",&eing);
		if(eing==1){
			if(i<10){
				printf("Namen eingeben: ");
				scanf("%s",buecher[i].name);
				buecher[i].check=1;
				i++;
				printf("\n");
			}
			else{
				printf("Maximale Anzahl an Büchern erreicht!\n\n");
			}
		}
		if(eing==2){
			if(i>0){
				for(j=0;j<i;j++){
					printf("%i: %s Stand: ",j+1,buecher[j].name);
					if(buecher[j].check==1){
						printf("Vorhanden\n");
					}
					else{
						printf("Nicht Verfügbar!\n");
					}
				}
				printf("\n");
			}
			else{
				printf("Keine Bücher vorhanden!\n\n");
			}
		}
		if(eing==3){
			printf("Titel des Buches den Sie ausleihen möchten eingeben: ");
			scanf("%s",titel);
			for(z=0;z<i;z++){
				if(strcmp(buecher[z].name,titel)==0){
					if(buecher[z].check==1){
						printf("Buch %s wird ausgeliehen.\n\n",titel);
						buecher[z].check=0;
					}
					else{
						printf("Buch %s ist derzeit nicht vorhanden!\n\n");
					}
				}
			}
		}
		if(eing==4){
			printf("Titel des Buches den Sie zurückgeben möchten eingeben: ");
			scanf("%s",titel);
			for(z=0;z<i;z++){
				if(strcmp(buecher[z].name,titel)==0){
					printf("Buch %s wird zurückgegeben.\n\n",titel);
					buecher[z].check=1;
				}
			}
		}
	}while(eing!=5);
}
