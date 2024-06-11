#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	long i,j,n,m,p[500000],num=0,k=1;
	p[0]=2;
	printf("Enter m and n\n");
//	scanf("%d%d",&m,&n);
n=4000000;
	printf("2\t");
	for(i=3;i<=n;i++){
		j=0;
		while(p[j]<=sqrt(i)){
				
			if(i%p[j]==0){
				num=1;
				break;
			}
				else num=0;	
				j++;
		}
		
		if(num==0){
				p[k]=i;
				k++;
				//printf("%d\t",i);
			
		}
	}
		printf("%d\t",k);
	
	return 0;
}
