#include <stdio.h>
main()
{
	char wort[100];
	int i;
	int eing;

	printf("Bitte geben Sie ein Wort ein:");
	gets(wort);
	printf("Bitte geben Sie den Verschlüsselungscode von 1-10 an:");
	scanf("%i",&eing);

	for(i=0;wort[i]!='\0';i++)
	{
		if(wort[i]!=' ')
		{
			wort[i]=wort[i]-eing;
			if((wort[i]>=91)&&(wort[i]<=96))
			{
				wort[i]=wort[i]+26;
			}
			if((wort[i]>=123)&&(wort[i]<=127))
			{
				wort[i]=wort[i]+26;
			}
			printf("%c",(int)wort[i]);
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
