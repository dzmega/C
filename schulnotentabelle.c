#include <stdio.h>
main()
{
	int jn;
	char fach;
	char dummy;
	char shift;
	int note;
	int matrix[10][4]={0};
	int i,j,k,l=0;
	int z1,zz,zs;

	matrix[0][0]=68;
	matrix[0][1]=77;
	matrix[0][2]=69;
	matrix[0][3]=67;
	
	do
	{
		printf("Fach: ");
		scanf("%c%c%c",&shift,&fach,&dummy);
		printf("Note: ");
		scanf("%i",&note);

		if(fach==matrix[0][0])
		{
			matrix[i][0]=note;
			i++;
		}
		printf("Möchten Sie eine weitere Note einspeichern?");
		scanf("%i",&jn);
	}while(jn!=2);

	for(z1=0;z1<4;z1++)
	{
		printf("%c  ",matrix[0][z1]);
	}
	for(zz=0;zz<10;zz++)
	{
		for(zs=0;zs<4;zs++)
		{
			if(matrix[zz][zs]>0)
			{
				printf("%i  ",matrix[zz][zs]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
