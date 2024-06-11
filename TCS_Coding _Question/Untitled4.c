#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	int m,n,i;
	printf("Enter the values of m and n\n");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(n>=10){
			
			if(n>=100){
				if(i>=10){
					if(i>=100)
						printf("%d ",i); //i is 3 digit while n is also 3 digit number
					else
						printf("0%d ",i);
			}
			else
			printf("00%d ",i);
		}
		else{
			if(i>=10)
				printf("%d ",i);
			else
				printf("0%d ",i);
		}
	}
	else
		printf("%d ",i);

	}
	return 0;
}
