#include <stdio.h>
#include <string.h>
main()
{
	char array[5][100];
	int i;
	char eing[100];
	int gleich;
	int nz=0;

	for(i=0;i<5;i++)
	{
		printf("Bitte Name %i eingeben: ",i+1);
		scanf("%s",array[i]);
	}
	printf("\n");

	printf("Wurde folgender Name eingegeben: ");
	scanf("%s",eing);
	
	for(i=0;i<5;i++)
	{
		gleich=strcmp(array[i],eing);
		if(gleich==0)
		{
			printf("ja\n");
		}
		else
		{
			nz++;
		}
	}
	if(nz==5)
	{
		printf("nein\n");
	}
}
