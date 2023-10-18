#include <stdio.h>

main()
{
	int note;

	printf("Bitte Note eingeben:");
	scanf("%i" ,&note);

	if(note == 1)
	{
		printf("sehr gut\n");
	}
	if(note == 2)
	{
		printf("gut\n");
	}
	if(note == 3)
	{
		printf("befriedigend\n");
	}
	if(note == 4)
	{
		printf("ausreichend\n");
	}
	if(note == 5)
	{
		printf("mangelhaft\n");
	}
	if(note == 6)
	{
		printf("ungenügened\n");
	}
}
