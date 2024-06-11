#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	int a,b,c,d,e,f,g,s;
	printf("enter a number \n");
	scanf("%d",&a);
m:	printf("enter that number again\n");
	scanf("%d",&g);
	if(a!=g)
	{
		printf("you wrote wrong\n");
		goto m;
	}
	else
	{
	
	printf("enter another number\n");
	scanf("%d",&b);
	d=1;
	for(c=1;c<=b;c++)
	{
		d=d*g;
		printf("%d^%d=%d\n",a,c,d);
	}
 }
	return 0;
}
