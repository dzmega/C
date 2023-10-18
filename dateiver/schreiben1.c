#include <stdio.h>
main()
{
	FILE *datei;
	int i;
	int z;
	char wort[30];
	
	datei=fopen("datei.txt","w");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		printf("Wie viele Wörter möchten Sie eingeben: ");
		scanf("%i",&z);
		for(i=0;i<z;i++)
		{
			printf("Wort eingeben: ");
			scanf("%s",wort);
			fprintf(datei,"%s\n",wort);;
		}
	}
	fclose(datei);
}
