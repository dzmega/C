#include <stdio.h>
main()
{
	int tag=1;
	int monat=1;

	while(monat==12)
	{
		if(tag<=30)
		{
			printf("%i.%i\t",tag ,monat);
			tag=tag+1;
		}
		if(tag==31)
		{
			printf("\n");
			tag=1;
			monat=monat+1;
			printf("%i.%i\t",tag ,monat);
		}
	
	}
}
