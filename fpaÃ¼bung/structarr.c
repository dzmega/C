#include <stdio.h>
struct mensch{
	char name[50];
	char nachname[50];
	int alter;
};
main(){
	int z;
	printf("Wie viele Schuler: ");
	scanf("%i",&z);
	struct mensch schuler[z];

	int i;
	for(i=0;i<z;i++)
	{
		printf("Name: ");
		scanf("%s",schuler[i].name);
		printf("Nachname: ");
		scanf("%s",schuler[i].nachname);
		printf("Alter: ");
		scanf("%i",&schuler[i].alter);
	}
	printf("---------------------\n");
	for(i=0;i<z;i++)
	{
		printf("%s %s %i\n",schuler[i].name,schuler[i].nachname,schuler[i].alter);
	}
}
