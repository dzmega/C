#include <stdio.h>
int ungerade(int);

int main (void)
{
	int eing;
	int erg;

	printf("Bitte geben Sie eine positive Zahl ein.");
	scanf("%i" ,&eing);

	erg=ungerade(eing);

	if(erg==1)
	{
		printf("Die Zahl ist gerade!");
	}
	else if(erg==2)
	{
		printf("Die Zahl ist ungerade!");
	}
	if(erg==3)
	{
		printf("Ungültiger Wert!");
	}

}
int ungerade(z1)
{
	if(z1>=0)
	{
		if(z1%2==0)
		{
			return(1);
		}
		else if(z1%2>=0)
		{
			return(2);
		}
	}	
	else
	{
		return(3);
	}
}
