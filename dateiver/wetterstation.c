#include <stdio.h>
#include <string.h>
main()
{
	FILE *wetter;
	float summe=0;
	int z=0;
	float hocht=0;
	float tieft=0;
	char hochm[30];
	char tiefm[30];
	float temp=0;
	char month[30];
	float durch=0;

	wetter=fopen("wetter.csv","r");
	if(wetter==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(wetter,"%f;%s",&temp,month)==2)
		{
			summe=summe+temp;
			z++;
			if(hocht==0)
			{
				hocht=temp;
				strcpy(hochm,month);
				tieft=temp;
				strcpy(tiefm,month);
			}
			if(temp>hocht)
			{
				hocht=temp;
				strcpy(hochm,month);
			}
			if(temp<tieft)
			{
				tieft=temp;
				strcpy(tiefm,month);
			}
		}
		durch=summe/z;
		printf("Die Jahresdurchschnitttemperatur beträgt %2.f Grad.\n",durch);
		printf("Der Monat %s war mit %.2f Grad am heißesten.\n",hochm,hocht);
		printf("Der Monat %s war mit %.2f Grad am kältesten.\n",tiefm,tieft);
		fclose(wetter);
	}
}
