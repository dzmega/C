#include <stdio.h>
main()
{
	int array[100]={3,1,12,55,71,22,1,4,8};
	int array2[100]={0};
	char ceing;
	char c1 = '<';
	char c2 = '>';
	int ieing;
	int i;
	int z=0;

	printf("Wonach soll gefiltert werden?\n");
	printf("Eingabe Zeichen (%c/%c):",c1,c2);
	scanf("%c" ,&ceing);
	printf("Eingabe Zahl:");
	scanf("%i" ,&ieing);
	
	if(ceing==c1)
	{
		for(i=0;i<ieing;i++)
		{
			if(array[i]<ieing)
			{
				array2[z]=array[i];
				printf("%i\n" ,array2[z]);
				z++;
			}
		}
	}
	if(ceing==c2)
	{
		for(i=0;i>ieing;i++)
		{
			if(array[i]>ieing)
			{
				array2[z]=array[i];
				printf("%i" ,array2[z]);
				z++;
			}
		}
	}
}
