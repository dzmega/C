#include <stdio.h>
main()
{
	char array[4][4]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int z,s;
	int eingz;
	int eings;
	int player=1;
	int win=0;
	int i,j;

	for(z=0;z<=3;z++)
	{
		for(s=0;s<=3;s++)
		{
			if(z==0)
			{
				printf("%i  ",s);
			}
			else if(s==0)
			{
				printf("%i  ",z);
			}
		}
		printf("\n");
	}

	do
	{
	printf("Spieler %i: Bitte geben Sie den Zeilenindex an: ",player);
	scanf("%i",&eingz);
	printf("Bitte geben Sie den Spaltenindex an:");
	scanf("%i",&eings);
	if(player==1)
	{
		array[eingz][eings]='x';
		player++;
	}
	else
	{
		array[eingz][eings]='o';
		player--;
	}
	for(z=0;z<=3;z++)
	{
		for(s=0;s<=3;s++)
		{
			if(z==0)
			{
				printf("%i  ",s);
			}
			else if(s==0)
			{
				printf("%i  ",z);
			}
			else if(array[z][s]>5)
			{
				printf("%c  ",array[z][s]);
			}
		}
		printf("\n");
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if
			(((array[1][1]=='x')&&(array[1][2]=='x')&&(array[1][3]=='x'))||((array[1][1]=='o')&&(array[1][2]=='o')&&(array[1][3]=='o'))||
			((array[2][1]=='x')&&(array[2][2]=='x')&&(array[2][3]=='x'))||((array[2][1]=='o')&&(array[2][2]=='o')&&(array[2][3]=='o'))||
			((array[3][1]=='x')&&(array[3][2]=='x')&&(array[3][3]=='x'))||((array[3][1]=='o')&&(array[3][2]=='o')&&(array[3][3]=='o'))||
			((array[1][1]=='x')&&(array[2][1]=='x')&&(array[3][1]=='x'))||((array[1][1]=='o')&&(array[2][1]=='o')&&(array[3][1]=='o'))||
			((array[1][2]=='x')&&(array[2][2]=='x')&&(array[3][2]=='x'))||((array[1][2]=='o')&&(array[2][2]=='o')&&(array[3][2]=='o'))||
			((array[1][3]=='x')&&(array[2][3]=='x')&&(array[3][3]=='x'))||((array[1][3]=='o')&&(array[2][3]=='o')&&(array[3][3]=='o')))
			{
				win++;
			}
			
			
		}
	}
	}while(win!=1);
}
