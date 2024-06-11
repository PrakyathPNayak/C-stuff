#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
    int a,b,c=1,d=1,f=0,e=0,s,r,t;
    printf("enter a number\n");
    scanf("%d",&a);
    v:if(d==f)
    {
    	
    	m:	if(e==c)
    		{
    			printf("\n");
    			e=0;
			}
			else if(c==0)
			{
				exit(0);
			}
			else
			{
				printf("*");
				e=e+1;
				goto m;
			}
			
		
	}
	else
	{
		s:	if(e==c)
    		{
    			printf("\n");
    			c=c+1;
    			e=0;
    			goto s;
			}
		
				else if(c==a)
			{
					d=f;
				goto v;
			}
			else
			{
				printf("*");
				e=e+1;
				goto s;
			}
		
	}
	return 0;
}
