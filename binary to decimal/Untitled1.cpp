#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
	int a,b=0,c=0,d=0;
	printf("write any numbes\n(IN SECONDS)");
	scanf("%d",&a);
	if(a==60)
	{
		b++;
		if(b==60)
		{
			c++;
		}
	}
	while(a>0||b>0||c>0)
	{
		a=a-1;
		sleep(1);
		if(a==0)
		{
			b=b-1;
			if(b==0)
			{
				c=c-1;
			}
		}
	}
	printf("wanna try again?\nyes=1,no=2\n");
	
	return(0);
}
