#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 { 
  int a,b,c=5;
m:  if(c==0)
{
	printf("you don't know the password\n");
	exit(0);
}
printf("enter the password ****\n");
  scanf("%d",&a);
  if(a==3557)
  {
  	printf("correct pssword! welcom mr.prakyath\n");
  	exit(0);
  }
  else
  {
  
  c=c-1;
  printf("you have %d more options\n",c);
  goto m;
}
  
  
	return 0;
}
