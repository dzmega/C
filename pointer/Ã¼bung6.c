#include <stdio.h>
void maximum(float *werte,float *max,int *index)
{
	int i=0;
	*max=werte[0];
	*index=i;

	for(i=0;i<4;i++)
	{
		if(*max<werte[i])
		{
			*max=werte[i];
			*index=i;
		}
	}
}
main()
{
	float werte[]={3.15,400,-3,399};
	float max;
	int index;
	maximum(werte,&max,&index);
	printf("Maximum: %.2f bei Index %d\n",max,index);
}
