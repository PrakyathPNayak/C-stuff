#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,b,c=1;
	printf("Enter a number\n");
	scanf("%d",&a);
	while(c<a)
	{s:c++;    	
	 if(c>a)
    	 {break;}	
		 	 for(b=2;b<=c;b++)
	   {if(b>c||c%b==0&&b!=c)	
     {goto s;} } 
	 	   printf("%d\n",c);
    }
	return 0;
}
