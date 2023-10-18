#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[30];
	char fansp[]={"Frau "};
	char hansp[]={"Herr "};
	int eing;

	printf("Bitte geben Sie Ihren namen ein:");
	scanf("%s",name);
	printf("Bitte geben Sie 1 für weiblich oder 2 für männlich ein:");
	scanf("%i",&eing);

	if(eing==1)
	{
		strcat(fansp, name);
		printf("%s\n",fansp);
	}
	else if(eing==2)
	{
		strcat(hansp, name);
		printf("Guten Tag %s\n",hansp);
	}
	else
	{
		printf("FEHLER\n");
	}
}
