#include <stdio.h>
struct wasser{
	float stand;
	char ort[50];
};
void funktion(struct wasser wasserstand[]){
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%.2f cm in %s\n",wasserstand[i].stand,wasserstand[i].ort);
	}
}
main(){
	FILE *datei;
	datei=fopen("pegel.txt","r");

	if(datei==NULL){
		printf("Fehler!\n");
	}
	else{
		struct wasser wasserstand[5];
		int i=0;
		while(fscanf(datei,"%f;%s",&wasserstand[i].stand,wasserstand[i].ort)!=EOF){
			i++;
		}
		funktion(wasserstand);
	}
}
