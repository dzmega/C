#include <stdio.h>
struct gattung{
	char gattungsname[50];
	char gefahr[50];
};
struct frosch{
	char name[50];
	int alter;
	struct gattung *fg;
};
main(){
	struct gattung laubfrosch={"laubfrosch","niedrig"};
	struct frosch frosche[2]={{"Fridolin",2,&laubfrosch},{"Max",3,&laubfrosch}};

	printf("%s ist %i Jahre alt und ist ein %s. Seine Gefährdungsstufe ist %s\n",frosche[0].name,frosche[0].alter,frosche[0].fg->gattungsname,frosche[0].fg->gefahr);
	printf("%s ist %i Jahre alt und ist ein %s. Seine Gefährdungsstufe ist %s\n",frosche[1].name,frosche[1].alter,frosche[1].fg->gattungsname,frosche[1].fg->gefahr);
}
