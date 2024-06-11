#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Enter the range");
	scanf("%d",&num);
	prime(num);
	return 0;
}


int prime(int range) {
	long i,j,n,m,p[500000],num=0,k=1;
	p[0]=2;
	printf("2\t");
	for(i=3;i<=range;i++){
		j=0;
		while(p[j]<=i/2){
				
			if(i%p[j]==0){
				num=1;
				break;
			}
				else num=0;	
				j++;
		}
		
		if(num==0)
				printf("%d\t",p[k++]);		
 }
	
	return 0;
}
