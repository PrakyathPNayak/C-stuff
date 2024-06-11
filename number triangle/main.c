#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a,b,c;
 	printf("enter the number\n");
 	scanf("%d",&a);
 	for(b=1;b<=a;b++)
 	{
 		for(c=1;c<=b;c++)
 		{
 			printf("%d",c);
		 }
		 for(c=b-1;c!=0;c=c-1)
		 {
		 	printf("%d\a",c);
		 	
		 }
		 printf("\n\a");
	 }
	return 0;
}
