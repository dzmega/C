#include <stdio.h>
main()
{
	char array[5][100];
	int i;
	int eing;

	for(i=0;i<5;i++)
	{
		printf("Bitte Name %i eingeben: ",i+1);
		scanf("%s",array[i]);
	}
	printf("\n");
	
	printf("Alle Namen anzeigen lassen (ja=1) (nein=2): ");
	scanf("%i",&eing);

	if(eing==1)
	{
		for(i=0;i<5;i++)
		{
			printf("%s\n",array[i]);
		}
	}
}
