#include <stdio.h>
#include <math.h>
int main()
{	int a,b,x,y,r,gcd,lcm;
	printf("\a\n Enter two numbers\a\n");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	gcd=a;
	lcm=(x*y)/gcd;
	printf("gcd(%d,%d)=%d\n\a",x,y,gcd);
	printf("lcm(%d,%d)=%d\n\a",x,y,lcm);
	return 0;
}
