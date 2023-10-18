void begruessung()
{
	int eing;

	printf("Hallo David, schön das du heute wieder programmierst!\n");
	printf("Wie ist dein Wohlbefinden am heutigen Tag?\n");
	printf("1 = super\n");
	printf("2 = geht so\n");
	printf("3 = heute ist kein guter Tag\n");
	scanf("%i",&eing);

	if(eing==1)
	{
		printf("Schön zu hören!\n");
	}
	if(eing==2)
	{
		printf("Geh nach Hause :D\n");
	}
	if(eing==3)
	{
		printf("Du Memme!\n");
	}
}
