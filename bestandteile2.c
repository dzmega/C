#include <stdio.h>
main()
{
	char wort[100];
	char buchstabe;
	int a=97;
	int matrix[2][26]={0};
	int i,j;
	int z,s;

	printf("Bitte geben Sie ein Wort in Kleinbuchstaben ein: ");
	scanf("%s",wort);

	for(i=0;i<26;i++)
	{
		matrix[0][i]=a;
		a++;
	}

	for(i=0;wort[i]!='\0';i++)
	{
		buchstabe=wort[i];
		for(j=0;j<26;j++)
		{
			if((buchstabe==matrix[0][j])||(buchstabe+32==matrix[0][j]))
			{
				matrix[1][j]++;
			}
		}
	}

	for(z=0;z<2;z++)
	{
		for(s=0;s<26;s++)
		{
			if(z==0)
			{
				printf("%c   ",matrix[z][s]);
			}
			else
			{
				printf("%i   ",matrix[z][s]);
			}
		}
		printf("\n");
	}
	
	for(i=0;i<26;i++)
	{
		if(matrix[1][i]!=0)
		{
			printf("Der Buchstabe %c kommt ",matrix[0][i]);
			printf("%i mal vor.\n",matrix[1][i]);
		}
	}
}
