#include <stdio.h>
main()
{
	int matrix[8][8]={0};
	int figur=1;
	char eing;
	char dummy;
	int z,s,i,j;

	printf("Bitte geben Sie an wie Sie die Figur bewegen möchten,\n");
	printf("s - down, w - up, a - left, d - right, x - beenden: ");
	
	z=0;
	s=0;

	do
	{
		scanf("%c%c",&eing,&dummy);
		
		matrix[z][s]=0;

		if(eing=='s')
		{
			if(z==7)
			{
				z=0;
			}
			else
			{
				z++;
			}
		}
		if(eing=='w')
		{
			if(z==0)
			{
				z=7;
			}
			else
			{
				z--;
			}
		}
		if(eing=='a')
		{
			if(s==0)
			{
				s=7;
			}
			else
			{
				s--;
			}
		}
		if(eing=='d')
		{
			if(s==7)
			{
				s=0;
			}
			else
			{
				s++;
			}
		}
		matrix[z][s]=figur;

		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				printf("%i ",matrix[i][j]);
			}
			printf("\n");
		}
	

	}while(eing!='x');
}
