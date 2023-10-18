#include <stdio.h>
void schwarz(int *z,int *i,char array[8][8])
{
	array[*z][*i]='#';
	printf("%c ",array[*z][*i]);
}
void weis(int *z,int *i,char array[8][8])
{
	array[*z][*i]=' ';
	printf("%c ",array[*z][*i]);
}
void farben(char array[8][8])
{
	int i;
	int z;

	for(z=0;z<8;z++)
	{
		for(i=0;i<8;i++)
		{
			if(i%2==0 && z%2==0)
			{
				schwarz(&z,&i,array);
			}
			else if(i%2!=0 && z%2==0)
			{
				weis(&z,&i,array);
			}
			else if(i%2==0 && z%2!=0)
			{
				weis(&z,&i,array);
			}
			else
			{
				schwarz(&z,&i,array);
			}
		}
		printf("\n");
	}
}
main()
{
	char array[8][8];

	farben(array);
}
