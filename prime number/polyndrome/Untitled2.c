#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a,b=0,c=0;
	printf("enter a number\n");
  	scanf("%f",&a);
  	n:c=c+1;
     b=b+c;

	if (c==a)
	{
		printf("your answer is %f\n",b);
        exit(0);
	}

	 goto n;
	 return 0;
}
