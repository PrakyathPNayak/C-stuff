#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i,j,num;
	printf("Enter the range\n");
	scanf("%d",&num);
	for(i=3;i<=num;i++){
		if(prime(i))
			for(j=i+1;j<=num;j++)
				if(prime(j))
						if(prime(i+(j-i)/2))
							printf("%d , %d , %d ---- %d\n", i , i+(j-i)/2 , j ,(j-i)/2) ;
	}
	return 0;
}


int prime(int in){

	int num=0,k;
	for(k=2;k<=sqrt(in);k++){
		if(in%k==0){
			num=1;
			break;
		}
	}
	if(num==0)
	return 1;
	else return 0;
}
