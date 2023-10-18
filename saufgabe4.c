#include <stdio.h>
#include <string.h>

int test(char wort[30])
{
	int i;
	int big=0;
	int small=0;
	int sonder=0;
	int zahl=0;

	for(i=0;wort[i]!='\0';i++)
	{
		if((wort[i]>=60)&&(wort[i]<=90))
		{	
			big++;
		}
		if((wort[i]>=97)&&(wort[i]<=122))
		{
			small++;
		}
		if(((wort[i]>=33)&&(wort[i]<=47))||((wort[i]>=58)&&(wort[i]<=64))||((wort[i]>=91)&&(wort[i]<=96))||((wort[i]>=123)&&(wort[i]<=126)))
		{
			sonder++;
		}
		if((wort[i]>=48)&&(wort[i]<=57))
		{
			zahl++;
		}
	}
	printf("i:%i b:%i s:%i so:%i z:%i",i,big,small,sonder,zahl);
	if((i>=8)&&(big>0)&&(small>0)&&(sonder>0)&&(zahl>0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	char passwort[30];
	int end;

	printf("Bitte geben Sie ein Passwort ein:");
	scanf("%s",passwort);
	
	end=test(passwort);

	if(end==0)
	{
		printf("Passwort ist sicher.\n");
	}
	else
	{
		printf("Passwort ist unsicher.\n");
	}
}
