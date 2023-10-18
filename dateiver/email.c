#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	char at=64;
	char wort[30];
	int i;
	char array[10][100];
	int z=0;

	datei=fopen("email.csv","r");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%s",wort)!=EOF)
		{
			for(i=0;wort[i]!='\0';i++)
			{
				if(wort[i]==at)
				{
					strcpy(array[z],wort);
					z++;
				}
			}
		}
		for(i=0;i<z;i++)
		{
			printf("%s\n",array[i]);
		}
	}
	fclose(datei);
}
