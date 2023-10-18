#include <stdio.h>

struct tabelle
{
	char mannschaft[50];
	int punkte;
	int tordifferenz;
};
void eintragen()
{
	printf("eintragen\n");
}
void anzeigen()
{
	printf("anzeigen\n");
}
main()
{
	struct tabelle mannschaften[4]={{"Mexico",0,0},{"Schweden",0,0},{"Deutschland",0,0},{"Südkorea",0,0}};
	int eing=1;

	while(eing!=0)
	{
		printf("Spielerergebnis eintragen\t(1)\n");
		printf("Tabelle anzeigen\t(2)\n");
		printf("Beenden\t\t(0)\n");
		scanf("%i",&eing);
		if(eing==1)
		{
			eintragen;
		}
		if(eing==2)
		{
			anzeigen;
		}
	}
}
