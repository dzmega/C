void aufteilen(char gesamtstring[100],char wort1[50],char wort2[50])
{
	int i;
	int j=0;

	for(i=0;gesamtstring[i]!=';';i++)
	{
		wort1[i]=gesamtstring[i];
	}
	wort1[i]='\0';
	i++;
	for(i;gesamtstring[i]!='\0';i++)
	{
		wort2[j]=gesamtstring[i];
		j++;
	}
	wort2[j]='\0';
}
