#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int i,num;
	printf("Enter the range\n");
	scanf("%d",&num);
num=10000000;
	for(i=3;i<=num;i++){
				if(prime(i))  if(i%10==3);
			
				//printf("%d\n",i);
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
