#include <stdio.h>
main()
{
	int array[]={1,2,3,4};
	int i;
	int eing[]={0};
	int z=1;
	int punkte=0;

	for(i=0;i<4;i++)
	{
		printf("Bitte geben Sie die %i. Ziffer an:",z);
		scanf("%i" ,&eing[i]);
		z++;
		if(eing[i]==array[i])
		{
			punkte++;
		}
	}
	if(punkte==4)
	{
		printf("Zugriff");
	}
	else
	{
		printf("Zugriff verweigert");
	}
}
