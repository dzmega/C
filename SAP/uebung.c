#include <stdio.h>
#include <string.h>
main()
{
	FILE *alles;
	char ort[20];
	int menge;
	float preis=0;
	float umsatz=0;
	float summehd=0;
	float summehh=0;

	alles=fopen("EXPORTNEW.csv","r");
	if(alles==NULL)
	{
		printf("Dateiöffnungsfehler!!\n");
	}
	else
	{
		while(fscanf(alles,"%i;%f;%s",&menge,&preis,ort)!=EOF)
		{
			if(strcmp(ort,"HD00")==0)
			{
				summehd=summehd+(preis*(float)menge);
			}
			if(strcmp(ort,"HH00")==0)
			{
				summehh=summehh+(preis*(float)menge);
			}
		}

		printf("Umsatz im Werk Heidelberg: %.2f\n",summehd);
		printf("Umsatz im Werk Hamburg: %.2f\n",summehh);
		fclose(alles);
	}
}
