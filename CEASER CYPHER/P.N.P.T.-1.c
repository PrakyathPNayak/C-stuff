#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a,b=0,c,d;
 	printf("enter a nuber\n");
 	scanf("%d",&d);
 	for(a=1;a!=d;a++)
 	{
 		while(b!=a+1)
 		{
 		
 			printf("%d",b);
 				b++;
		 }
		 c=b;
		 while(c!=0)
		 {
		 
		 	printf("%d",c);
		 	c--;
		 }
		 printf("\n");
	 }
	return 0;
}
