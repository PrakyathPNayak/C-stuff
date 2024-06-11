#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	long i,j,n,m,p[500000],num=0,k=1;
	printf("Enter m and n\n");
//	scanf("%d%d",&m,&n);
n=40000;
	printf("2\t");
	for(i=3;i<=n;i++){
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				num=1;
				break;
			}
				else num=0;	
		}
		
		if(num==0){
				k++;
			
		}		
}
		printf("%d\t",k);
	
	return 0;
}
