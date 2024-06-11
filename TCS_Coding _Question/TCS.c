#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	int m,n,i;
	printf("Enter the values of m and n\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		
		if(n>=100 && i>=100) 		printf("%d ",i);
		else if(n>=100 && i>=10) 	printf("0%d ",i);
		else if(n>=100) 			printf("00%d ",i);
		else if(n>=10 && i>=10)		printf("%d ",i);
		else if(n>=10)				printf("0%d ",i);
		else						printf("%d ",i);
	
	}
	return 0;
}

