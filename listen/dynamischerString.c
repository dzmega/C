#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
	char puffer[100];
	int length;
	char *p;

	printf("Gib einen String ein: ");
	gets(puffer);
	printf("%s\n",puffer);
	length=strlen(puffer);
	p=malloc(length*sizeof(char));
	strcpy(p,puffer);
	printf("Der dynamische String lautet:\n%s\n",p);
	printf("Der dynamische String hat %i Stellen.\n",length);

	free (p);
}
