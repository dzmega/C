#include <stdio.h>
struct gattung
{
	char name[30];
	char gefaehrdung[30];
};
struct frosch
{
	char name[30];
	int alter;
	struct gattung *fg;
};
main()
{
	struct gattung fg={"Laubfrosch","niedrig"};
	struct frosch fridolin={"Fridolin",2,&fg};
	printf("Neue Gefährdungsstufe: ");
	scanf("%s",fg.gefaehrdung);
	printf("%s ist %i Jahre alt und ist ein %s. Seine Gefährdungsstufe ist %s.\n",fridolin.name,fridolin.alter,fridolin.fg->name,fridolin.fg->gefaehrdung);
}
