#include <stdio.h>
#include <string.h>
main()
{
	FILE *datei;
	datei=fopen("Klasse.csv","r");
	int anzahl;
	int fach;
	int fach2;
	int note;
	char name[50];
	char name2[50];
	float schnitt;
	int i=0;
	FILE *new;
	char newname[50];

	if(datei==NULL)
	{
		printf("Fehler!\n");
	}
	else
	{
		anzahl=fscanf(datei,"%i;%i;%s",&fach,&note,name);
		while(anzahl==3)
		{
			strcpy(name2,name);
			strcpy(newname,name);
			strcat(newname,".csv");
			new=fopen(newname,"w");
			fprintf(new,"Die Noten von: %s\n\n",name);
			while(anzahl==3 && strcmp(name2,name)==0)
			{
				if(fach==1)
				{
					fprintf(new,"Im Fach C:\n");
				}
				if(fach==2)
				{
					fprintf(new,"Im Fach Mathe:\n");
				}
				if(fach==3)
				{
					fprintf(new,"Im Fach Religion\n");
				}
				schnitt=0;
				i=0;
				fach2=fach;
				while(anzahl==3 && strcmp(name2,name)==0 && fach2==fach)
				{
					fprintf(new,"%i\n",note);
					schnitt=schnitt+note;
					i++;
					anzahl=fscanf(datei,"%i;%i;%s",&fach,&note,name);
				}
				schnitt=schnitt/i;
				fprintf(new,"------------------\n");
				fprintf(new,"Fächerschnitt: %.2f\n\n",schnitt);
			}
			fprintf(new,"\n\n");
		}
		printf("Die Ergebnisse befinden sich in den verschiedenen Dateien!\n");
	}
	fclose(datei);
}
