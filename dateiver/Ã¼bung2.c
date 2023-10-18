#include <stdio.h>
#include <string.h>
main()
{
	FILE *namen;
	int i=0;
	char wort[30];
	char array[7][30];
	
	namen=fopen("namen.csv","r");
	if(namen==NULL)
	{
		printf("Dateiöffnungsfehler!!\n");
	}
	else
	{
		while(fscanf(namen,"%s",wort)==1)
		{
			strcpy(array[i],wort);
			i++;
		}
		for(i=0;i<7;i++)
		{
			printf("%s\n",array[i]);
		}
		fclose(namen);
	}
}
