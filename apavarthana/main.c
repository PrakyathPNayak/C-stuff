#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a,b,c,r=9,s=0;
 	printf("enter the number\n");
 	scanf("%d",&a);
 	for(b=1;b<a;b++)
 	{
 		c=b%a;
 		if(c==0)
 		{
 			printf("%d",b);
 			r=s;
		 }
	 }
	 if(r!=s)
	 {
	 	printf("this number doesnot ");
	 }
	return 0;
}
