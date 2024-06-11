#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
 int a,b,c,s;
printf("Enter the number\n");
scanf("%d",&a);
for(b=1;b<=20;b++)
{
	s=a*b;
	printf("%d*%d=%d\n",a,b,s);
}

	return 0;
}
