#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int *p,a[20],n,sum=0,i;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);

 		p=&a;
}
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+*p;
	 	p++;
	 }
	 printf("sum=%d",sum);
	return 0;
}
