 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int a,b,sum=0,i;
	printf("Enter the number\n");
	scanf("%d",&a);
	sum=0;
	for(i=1;i<=a;i++)
	{
		b=(i*i);
		sum=sum+b;
	
}
	printf("%d\n",sum);
	
	
	return 0;
}
