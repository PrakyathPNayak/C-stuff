#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int m,n,i,j,k,l1,l2;
	printf("Enter the values of m and n\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
													//	int temp1=n;
													//	int temp2=i;
		l2=log10(i);								
		l1=log10(n);
															//or you can use 					
                                                        	//	for(l1=1;temp1!=0;l1++)
															//		temp1=temp1/10;
															//	for(l2=1;temp2!=0;l2++)
															//		temp2=temp2/10;
		
		
		for(j=0;j<(l1-l2);j++)
			printf("0");
			
		printf("%d ",i);
	}
	return 0;
}
