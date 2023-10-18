#include <stdio.h>
main()
{
	int array []={2,17,10,9,16,3,9,16,5,1,17,14};
	int array2 [12];
	int array3 [12]={0};
	int summe=0;
	int i;
	int il=0;

	for(i=0;i<12;i++)
	{
		if(array[i]>10)
		{
			array3[il]=array[i];
			il++;
		}
	}
	
	for(il=0;il<12;il++)
	{
		printf("%i\n",array3[il]);
	}

}
