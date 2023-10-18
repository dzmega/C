#include <stdio.h>
#include <stdbool.h>
void place(char kasten1[5][5], char kasten2[5][5]){
	int i=0;
	int j=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j+){
			kasten1[i][j]=' ';
			kasten2[i][j]=' ';
		}
	}
}
void eingabe(char kasten1[5][5],char kasten2[5][5]){
	
}
main(){
	int current=1;
	bool win=false;
	char kasten1[5][5];
	char kasten2[5][5];

	place(kasten1,kasten2);
	eingabe(kasten1,kasten2);
	while(win!=true){
		
	}
}
