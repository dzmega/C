#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	datei=fopen("kreditkarten.txt","r");
	FILE *new;
	new=fopen("sperre.txt","w");
	char name[30];
	float kontostand=0;
	float kontostand2=0;
	int sperre=0;
	int sperre2=0;
	int geheimzahl;
	char benutzername[30];
	int pin;
	int modus;
	float abheben=0;
	int versuche=0;
	int zuruck=0;

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		printf("Bitte geben Sie den Benutzernamen ein: ");
		scanf("%s",name);
		if(zuruck==0)
		{
			while(fscanf(datei,"%f;%i;%i;%s",&kontostand,&sperre,&geheimzahl,benutzername)==4)
			{
				if(strcmp(name,benutzername)==0)
				{
					if(sperre==0)
					{
						printf("Bitte geben Sie die Geheimzahl ein: ");
						scanf("%i",&pin);
						versuche++;
						while(pin!=geheimzahl)
						{
							if(versuche<3)
							{
								printf("Bitte geben Sie die Geheimzahl ein: ");
								scanf("%i",&pin);
								if(pin!=geheimzahl)
								{
									versuche++;
								}
							}
							if(versuche==3)
							{
								printf("Ihr Konto wurde gesperrt!\n");
								sperre=1;
								fprintf(new,"%.2f;%i;%i;%s\n",kontostand,sperre,geheimzahl,benutzername);
								break;
							}
						}
						if(pin==geheimzahl)
						{
							while(modus!=3)
							{
								printf("\nMenu:\n");
								printf("Kontostand (1):\n");
								printf("Geld auszahlen (2):\n");
								printf("Beenden (3):\n");
								scanf("%i",&modus);
								if(modus==1)
								{
									printf("Ihr Kontostand beträgt %.2f Euro.\n",kontostand2);
								}
								if(modus==2)
								{
									printf("Wie viel Euro möchten Sie abheben? ");
									scanf("%f",&abheben);
									if((kontostand>=abheben) && ((int)abheben%5==0))
									{
										kontostand=kontostand-abheben;
										fprintf(new,"%f;%i;%i;%s\n",kontostand,sperre,geheimzahl,benutzername);
										printf("Abhebung erfolgreich\n");
									}
									else
									{
										printf("Ungültiger Betrag!\n");
									}
								}
							}
						}
					}
					else
					{
						printf("Ihr Konto ist gesperrt!\n");
					}
				}
			}
		}
		else
		{
			printf("Ihr Konto ist gesperrt!\n");
		}
	}
}
int check(char name[30])
{
	FILE *read;
	read=fopen("sperre.txt","r");
	float geld;
	int sperre;
	int pin;
	char benutzername[30];
	if(read==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		while(fscanf(read,"%f;%i;%i;%s",&geld,&sperre,&pin,benutzername)==4)
		{
			if(sperre==1 && strcmp(name,benutzername)==0)
			{
				return 1;
			}
		}
	}
}
