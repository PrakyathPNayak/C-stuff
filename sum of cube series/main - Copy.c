 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float a,b,sum=0,i;
	printf("Enter the number\n");
	scanf("%f",&a);
	sum=0;
	for(i=1;i<=a;i++)
	{
		b=(i*i*i);
		sum=sum+b;
	
	}
	printf("%f\n",sum);
	
	
	return 0;
}
