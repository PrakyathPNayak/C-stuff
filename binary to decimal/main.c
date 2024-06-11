 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a[30],i,m,n,r,sum=0,b;
 	printf("Enter the binary number\n");
 	t:scanf("%d",&n);
 	m=0;
 	while(n!=0)
 	{
 	r=n%10;
 	if(r>1)
 	{
 		printf("%d is not binary number\n",r);
 		goto t;
	 }
	else
	{
	b=r*(pow(2,m));
	sum=sum+b;
	m=m+1;
	n=n/10;	
 		
	 }
}
	 printf("dec=%d",sum);
	return 0;
}
