#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	int i;
	int eing;
	char wort[30];

	datei=fopen("datei1.txt","w");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		printf("Wie oft: ");
		scanf("%i",&eing);
		for(i=0;i<eing;i++)
		{
			printf("Wort eingeben: ");
			scanf("%s",wort);
			fprintf(datei,"%s\n",wort);
		}
		
	}
	fclose(datei);

	datei=fopen("datei1.txt","r");
	if(datei==NULL)
	{
		printf("Fehler\n");
	}
	else
	{
		while(fscanf(datei,"%s",wort)!=EOF)
		{
			printf("%s;",wort);
		}
		printf("\n");
	}
}
