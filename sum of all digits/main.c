#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n,d,sum=0,count=0,x,r;
	printf("\n Enter the number:\n");
	scanf("%d",&n);
	printf("\n Enter the digit for checking the occurence\n");
	scanf("%d",&d);
	x=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		if(d==r)
		{
			count=count+1;
		}
		n=n/10;
		
	}
	printf("\n Entered number=%d\n",x);
	printf("sum of digits is=%d\n",sum);
	if(count>0)
	printf("%d occurs %d times",d,count);
    else
	printf("\n Digit  %d does not exist",d);
	return 0;
}
