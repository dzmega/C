#include <stdio.h>
main()
{
	char wort[]={"katze"};
	char stern[]={"*****"};
	char eing;
	int fz=0;
	int rz=0;
	int max=8;
	int fehler=0;
	int i;
	char dummy;

	printf("Gesuchtes Wort: %s",stern);
	printf("\nFehler (%i / %i)",fehler ,max);

	do
	{
		printf("%s",stern);
		printf("Fehler (%i / %i)\n",fehler ,max);
		printf("\nBitte Buchstabe eingeben:");
		scanf("%c%c",&eing,&dummy);
		
		for(i=0;wort[i]!='\0';i++)
		{
			if(wort[i]==eing)
			{
				stern[i]=wort[i];
				rz++;
			}
			else
			{
				fz++;
			}
		}
		if(fz==5)
		{
			fehler++;
		}
		fz=0;
	}while((fehler!=8)&&(rz!=5));

	if(fehler>=8)
	{
		printf("Du hast verkackt!");
	}
	else
	{
		printf("%s ... Herzlichen Glückwunsch! Gewonnen!",stern);
	}
}
