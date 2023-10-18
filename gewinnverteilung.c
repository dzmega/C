#include <stdio.h>

main()
{
	int sport;
	int platzierung;
	float belohnung;
	float schwimmen = 15000;
	float tanzen = 5000;
	float radfahren = 70000;
	float golf = 100000;

	printf("Siegerprämien für...");
	printf("Schwimmen		(1)");
	printf("Tanzen 			(2)");
	printf("Radfahren 		(3)");
	printf("Golf			(4)");
	scanf("%i" ,&sport);
	printf("Ihre Platzierung");
	scanf("%i" ,platzierung);

	if(sport==1)
	{	
		if(platzierung==1)
		{
			belohnung=schwimmen*0.6;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		if(platzierung==2)
		{
			belohnung=schwimmen*0.3;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		else
		{
			if(platzierung==3)
			{
				belohnung=schwimmen*0.1;
				printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
			}
			else
			{
				belohnung=0;
			}
		}
	}
			
	if(sport==2)
	{	
		if(platzierung==1)
		{
			belohnung=tanzen*0.6;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		if(platzierung==2)
		{
			belohnung=tanzen*0.3;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		else
		{
			if(platzierung==3)
			{
				belohnung=tanzen*0.1;
				printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
			}
			else
			{
				belohnung=0;
			}
		}
	}
			
	if(sport==3)
	{	
		if(platzierung==1)
		{
			belohnung=radfahren*0.6;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		if(platzierung==2)
		{
			belohnung=radfahren*0.3;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		else
		{
			if(platzierung==3)
			{
				belohnung=radfahren*0.1;
				printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
			}
			else
			{
				belohnung=0;
			}
		}
	}
	if(sport==4)
	{	
		if(platzierung==1)
		{
			belohnung=golf*0.6;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		if(platzierung==2)
		{
			belohnung=golf*0.3;
			printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
		}
		else
		{
			if(platzierung==3)
			{
				belohnung=golf*0.1;
				printf("Ihre Prämie beträgt %.2f Euro" ,belohnung);
			}
			else
			{
				belohnung=0;
			}
		}
	}
	if(sport<1 || sport>4)
	{
		printf("FEHLER, Sportart nicht vorhanden!");
	}
}
