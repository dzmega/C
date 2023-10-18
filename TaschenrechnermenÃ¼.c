#include <stdio.h>
main()
{
	int modus;

	do
	{
		printf("1: Einfacher Taschenrechner\n");
		printf("2: Wissenschaftlicher Taschenrechner\n");
		printf("3: Informatischer Taschenrechner\n");
		printf("4: Exit\n");
		scanf("%i" ,&modus);
		printf("Programmauswahl: %i\n" ,modus);

		if(modus==1)
		{
			printf("**********************************\n");
			printf("Einfacher Taschenrechner\n");
			printf("**********************************\n");
		}

		if(modus==2)
		{
			printf("**********************************\n");
			printf("Wissenschaftlicher Taschenrechner\n");
			printf("**********************************\n");
		}

		if(modus==3)
		{
			printf("**********************************\n");
			printf("Informatischer Taschenrechner\n");
			printf("**********************************\n");
		}
	}while(modus!=4);
}
