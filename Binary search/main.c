#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int i,a[20],n,mid,key,l,trace=0,h;
 	scanf("%d",&n);
 	scanf("%d",&key);
 	printf("Enter the elements\n");
 	for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
	l=0;
	h=n-1;
	for(i=0;l<=h;i++)
	{
	    mid=(l+h)/2;
		if(key==a[mid])
		
		{
		
		printf("The key is found at %d position\n",mid+1);
		trace=1;
		exit(0);
	}
		else if(key>a[mid])
		l=mid+1;
		else 
		h=mid-1;
		
	}
	if(trace==0)
	printf("key not found\n");
	
 	
	return 0;
}
