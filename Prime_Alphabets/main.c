#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,prime[10],num=0,k,j,count,len;
	char string[1000];
	
	printf("Enter the string\n");
	scanf("%s",string);
	
	prime[0]=2;
	k=1;
	
	for(i=3;i<=26;i++){
		for(j=2;j<=i/2;j++){
			
			if(i%j==0){
				num=1;
				break;
			}
			
		}
		if(num==0)		prime[k++]=i;
		num=0;
	}
	
	
	len=strlen(string);
	int	mul=1;
	int	sum=0;
	
//	for(i=0;i<k;i++){ printf("%d\t",prime[i]);}
	
	for(i=0;i<k;i++){
		count=0;
		j=0;
		while(j<len){
			if(string[j]==96+prime[i])
			count++;
			j++;
		}
						sum=sum+count;
		if(count!=0)	mul=mul*count;
	}
	
	printf("sum: %d\t mul: %d\t",sum,mul);
		return 0;
}
