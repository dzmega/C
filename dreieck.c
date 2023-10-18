#include <stdio.h>
float rechner(float grund, float hoch)
{
	float ergebnis;

	ergebnis=0.5*grund*hoch;
	
	return ergebnis;
}
main()
{
	float grund;
	float hoch;
	float ergebnis;

	printf("Bitte geben Sie die Grundseite ein:");
	scanf("%f" ,&grund);
	printf("Bitte geben Sie die Höhe ein:");
	scanf("%f" ,&hoch);
	ergebnis=rechner(grund,hoch);
	printf("Die Fläche beträgt %.2f",ergebnis);
}
