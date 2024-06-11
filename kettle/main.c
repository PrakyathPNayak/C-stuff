#include <stdio.h>
#include <stdlib.h>
int main()
 {
 int a,b;
 printf("enter a year\n");
 scanf("%d",&a);
 b=a%4;
 if(b==0)
 {
 	printf("%d is a leap year\n ",a);
 }
 else
 {
 	printf("%d is not a leap year\n",a);
 }
	return 0;
}
