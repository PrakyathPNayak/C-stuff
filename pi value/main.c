#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double x,y,a,b,c;
	a=sqrt(0.5);
	y=8;
	while(y<500448769876789)
	{
		x=y*sqrt((1-sqrt(1-(a*a)))/2);
		a=x/y;
		y=y*2;	
	printf(" pi value is=%f\t\tn=%f \n",x,y);
	}
	return 0;
}
