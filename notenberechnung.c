#include <stdio.h>

main()
{
	int note;

	scanf("%i" ,&note);

	switch(note)
	{
		case 1: printf("Sehr gut\n"); break;
		case 2: printf("Gut\n"); break;
		case 3: printf("Befriedigend\n"); break;
		case 4: printf("Ausreichend\n"); break;
		case 5: printf("Mangelhaft\n"); break;
		case 6: printf("Ungenügend\n"); break;
		default: printf("Note nicht vorhanden\n");
	}
}
