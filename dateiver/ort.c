#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	char eing[30];
	char ort[30];
	int temp;
	int regenw;
	char zeichen;
	char plus='+';
	char minus='-';

	datei=fopen("ort.csv","r");
	printf("Bitte geben Sie den gewünschten Ort ein: ");
	scanf("%s",eing);
	printf("\n");
	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(datei,"%i;%i;%c;%s",&temp,&regenw,&zeichen,ort)==4)
		{
			if(strcmp(ort,eing)==0)
			{
				printf("In %s hat es %i Grad.\n",eing,temp);
				if(regenw<30)
				{
					printf("Es bleibt trocken\n");
				}
				if((regenw>=30)&&(regenw<=75))
				{
					printf("Es ist wechselhaft\n");
				}
				if(regenw>75)
				{
					printf("Es wird regnen\n");
				}
				if(zeichen==plus)
				{
					printf("und wird in den nächsten Tegen wärmer.\n");
				}
				if(zeichen==minus)
				{
					printf("und wird wieder kälter.\n");
				}
			}
		}
	}
	fclose(datei);
}
