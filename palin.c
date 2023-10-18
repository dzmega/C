#include <stdio.h>
main()
{
	char wort[30];
	int i;
	int j;
	int z;
	int punkte=0;

	printf("Bitte geben Sie ein Wort ein:");
	scanf("%s",wort);

	for(i=0;wort[i]!='\0';i++);
	
	z=i/2;
	j=i-1;

	for(i=0;i<z;i++)
	{
		if(wort[i]==wort[j])
		{
			punkte++;
		}
		j--;
	}
	if(punkte==z)
	{
		printf("Bei %s handelt es sich um ein Palindrom.\n",wort);
	}
	else
	{
		printf("Bei %s handelt es sich nicht um ein Palindrom.\n",wort);
	}
}
