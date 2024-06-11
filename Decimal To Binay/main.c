#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i,j,num,ans,bin[100];
	printf("Enter the number");
	scanf("%d",&num);
	for(i=0;num!=0;i++){
		ans=num%2;
		bin[i]=ans;
		num=num%2;
	}
	for(j=i;j>=0;j--)
	printf("%d",bin[j]);
	
	return 0;
}
