#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 float a,b,c,d,e,f,g=0,h=0;
 char r;
 while(g==0&&h==0)
 {
 
 	printf("enter the value of the loan\n");
 	scanf("%f",&a);
 	printf("enter the rate of intrest\n");
 	scanf("%f",&b);
 	printf("enter the time\n");
 	scanf("%f",&c);
 	d=a*b/100;
 	printf("intrest per year=%f",d);
    e=(a/100)*b*c;
 		printf("simple intrest=%f",e);
 		f=e+a;
 		printf("amount=%f",f);
 		while(g==0)
 		{
		 
 		printf("do you want to keep going?(say yes or no)\n");
 		scanf("%c",&r);
 		if(r=='yes'||r=='YES'||r=='Yes')
 		{
 			g=0;
 			h=0;
		 }
		 else if(r=='no'||r=='NO'||r=='No')
		 {
		 	g=1;
		 	h=0;
		 }
		 
		 else
		 {
		 	printf("command %c is ignoring\n",r);
		 	h=1;
		 }
 	}
 }
 		
	return 0;
}
