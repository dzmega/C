#include <stdio.h>
#include <stdbool.h>
void red(){
	printf("\033[1;31m");
}
void yellow(){
	printf("\033[1;33m");
}
void color_reset(){
	printf("\033[0m");
}
void print(char kasten[6][7]){
	int i,j;

	printf("\033[H\033[J"); //Muss nicht verwendet werden. Eingabe sieht dann schöner aus
	printf("   1  2  3  4  5  6  7\n");
	for(i=0;i<6;i++){
		printf("%i  ", i+1); 
		for(j=0;j<7;j++){
			if(kasten[i][j]=='x'){
				red();
				printf("%c  ", kasten[i][j]);
				color_reset();
			}
			if(kasten[i][j]=='o'){
				yellow();
				printf("%c  ", kasten[i][j]);
				color_reset();
			}
		}
		printf("\n");
	}
}
void game(int *cur,char kasten[6][7],int arr[7],int *z,bool *win){

	int col;
	printf("\nSpieler %i\n",*cur);
	printf("==========\n");
	printf("Auswahl: ");
	scanf("%i",&col);
	if(*z<41){
		while(arr[col]==0){
			printf("Slot voll! Neue Eingabe: ");
			scanf("%i",&col);
		}	
		while(col>7||col<1){
			printf("Erneute Eingabe: ");
			scanf("%i",&col);
		}
		if(*cur==1){
			kasten[arr[col]-1][col-1]='x';
			arr[col]=arr[col]-1;
			*cur=2;
		}
		else{
			kasten[arr[col]-1][col-1]='o';
			arr[col]=arr[col]-1;
			*cur=1;
		}
		*z=*z+1;
	}
	else{
		//falls das Spielfeld voll ist
		*cur=3;
		*win=true;
	}
}
void check_game(char kasten[6][7],bool *win,int arr[7]){
	int i,j,x;
	//check horizontal
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if((kasten[i][j]=='x')&&(kasten[i][j+1]=='x')&&(kasten[i][j+2]=='x')&&(kasten[i][j+3]=='x')){
				*win=true;
			}
			if((kasten[i][j]=='o')&&(kasten[i][j+1]=='o')&&(kasten[i][j+2]=='o')&&(kasten[i][j+3]=='o')){
				*win=true;
			}
		}
	}
	//check vertical
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if((kasten[i][j]=='x')&&(kasten[i+1][j]=='x')&&(kasten[i+2][j]=='x')&&(kasten[i+3][j]=='x')){
				*win=true;
			}
			if((kasten[i][j]=='o')&&(kasten[i+1][j]=='o')&&(kasten[i+2][j]=='o')&&(kasten[i+3][j]=='o')){
				*win=true;
			}
		}
	}
	//check diagonal
	for(i=5;i>=3;i--){
		for(j=0;j<4;j++){
			if(kasten[i][j] == 'x'){
				for(x=0;x<4;x++) if(kasten[i-x][j+x] != 'x') break;
				if(x == 4) *win=true;
			}
			if(kasten[i][j] == 'o'){
				for(x=0;x<4;x++) if(kasten[i-x][j+x] != 'o') break;
				if(x == 4) *win=true;
			}

		}
		for(j=3;j<7;j++){
			if(kasten[i][j] == 'x'){
				for(x=0;x<4;x++) if(kasten[i-x][j-x] != 'x') break;
				if(x == 4) *win=true;
			}
			if(kasten[i][j] == 'o'){
				for(x=0;x<4;x++) if(kasten[i-x][j-x] != 'o') break;
				if(x == 4) *win=true;
			}

		}

	}
}
main(){
	int check;
	char check2;
	char p1;
	char p2;
	char dummy;
	bool win=false;
	char kasten[6][7];
	int cur=1;
	int i,j;
	int z=0;

	printf("Willkommen zu 4 Gewinnt!\n");
	printf("========================\n");
	do{
		printf("Möchten Sie eine Runde spielen? Ja(1) Nein(2): ");
		scanf("%i",&check);
		check2=(char)check;
		if(check>2||check<1){
			printf("Fehler! Falsche Eingabe!\n\n");
		}
		else if(check==1){
			//Platzt für die Eingabe erstellen
			for(i=0;i<6;i++){
				for(j=0;j<7;j++){
					kasten[i][j]=' ';
				}
			}
			z=0;
			cur=1; //Falls eine neue Runde gestartet wird, wird der Spieler auf 1 zurückgesetzt
			int arr[8]={6,6,6,6,6,6,6,6}; //Dadurch wird geschaut wie viele Sachen noch in ein Slot passen
			print(kasten);
			win=false;
			while(win==false){
				game(&cur,kasten,arr,&z,&win);
				check_game(kasten,&win,arr);
				print(kasten);
				if(win==true){
					printf("\n===============================\n");
					if(cur==2){	
						printf("Spieler 1 hat gewonnen!\n");
					}
					if(cur==1){
						printf("Spieler 2 hat gewonnen!\n");
					}
					if(cur==3){
						printf("Unentschieden!\n");
					}
					printf("===============================\n");
				}
			}
		}
		else{
			printf("Auf Wiedersehen!\n");
		}
	}while(check!=2); //Diese Schleife ist nicht nötig. Schaut nur ob user spielen will
}
