#include <stdio.h>
main()
{
	int arbeitzw;
	int arbeitzt;
	
	printf("Bitte wöchentliche Arbeitszeit eingeben:");
	scanf("%i" ,&arbeitzw);
	arbeitzt=arbeitzw/5;
	printf("Durchschn. tägliche Arbeitszeit: %i\n" ,arbeitzt);
	
	if(arbeitzt==0)
	{
		printf("Mitarbeiter fehlt\n");
	}
	else if((arbeitzt>=1)&&(arbeitzt<=4))
	{
		printf("Zeitrahmen unterschritten\n");
	}
	else if((arbeitzt<=10)&&(arbeitzt>=4))
	{
		printf("Zeitrahmen erfüllt\n");
	}
	else if(arbeitzt>10)
	{
		printf("Zeitrahmen überschritten");
	}
}
