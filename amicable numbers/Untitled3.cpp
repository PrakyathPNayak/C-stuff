#include <stdio.h>
#include <stdlib.h>

int amicable(int n){
	int m,next=0;
	
	for(m=1;m<=n/2;m++)
		if(n%m==0)
			next=next+m;
				
	return next;
}

int main(){
	int ami,i;
	printf("Enter the number\n");
	scanf("%d",&ami);
	
	for(i=1;i<=ami;i++) 
		if(i==amicable(amicable(i)))		printf("%d\t%d\n",i,amicable(i));
		
	return 0;
}



