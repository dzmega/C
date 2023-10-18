#include <stdio.h>
main()
{
	FILE *datei;
	float fnr[7]={0,0,0,0,0,0,0};
	int z=1;
	float umsatz;
	int nr;

	datei=fopen("umsaetze.csv","r");
	if(datei==NULL)
	{
		printf("fehler\n");
	}
	else
	{
		while(fscanf(datei,"%i;%f",&nr,&umsatz)==2)
		{
			fnr[nr]=fnr[nr]+umsatz;
		}
		printf("FNR\tUmsatz\n");
		for(z;z<=6;z++)
		{
			printf("  %i\t%.2f\n",z,fnr[z]);
		}
	}
	fclose(datei);
}
