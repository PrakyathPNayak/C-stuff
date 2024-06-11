#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	if(a==0)
	printf("0");
	else
    {
	while(a!=1)
	{   
		if(a%2==0)
		a=a/2;
		else
		a=(3*a)+1;
		printf(" %d\t",a);
	}
}
	return 0;
}
