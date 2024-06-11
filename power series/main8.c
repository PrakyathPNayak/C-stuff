#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a,b,c=1,d,e,f,g;
 	printf("enter a number\n");
 	scanf("%d",&a);
 	printf("enter an other number\n");
 	scanf("%d",&b);
 	e=a;
 	        if(b==1)
 	 {
 	 		printf("%d^1=%d\n",a,a);
 	 		exit(0);
	  }
	     printf("%d^1=%d\n",a,a);
	     d=a;
 		m:  if(b==c)
 			{
 				exit(0);
			 }
    else
 	{
 		
 		c=c+1;
 	    d=a*d;
 	    
 	
 		printf("%d^%d=%d\n",e,c,d);
 			
			 	goto m;
			 
	 }
	return 0;
}
