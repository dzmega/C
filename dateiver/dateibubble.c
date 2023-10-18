#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	int z;
	int eing;
	int i;
	int j;
	float speicher;
	char new[30];

	printf("New Name: ");
	scanf("%s",new);
	datei=fopen(strcat(new,".txt"),"w");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		printf("Wie oft: ");
		scanf("%i",&eing);
		float array[eing];
		for(z=0;z<eing;z++)
		{
			printf("Geben Sie die %i. Zahl ein: ",z+1);
			scanf("%f",&array[z]);
		}
		printf("\n");
		for(i=0;i<eing;i++)
		{
			for(j=0;j<(eing-1);j++)
			{
				if(array[i]<array[j])
				{
					speicher=array[j];
					array[j]=array[i];
					array[i]=speicher;
				}
			}
		}
		for(z=0;z<eing;z++)
		{
			printf("%.2f\n",array[z]);
			fprintf(datei,"%.2f;",array[z]);
		}
	}
	fclose(datei);
}
