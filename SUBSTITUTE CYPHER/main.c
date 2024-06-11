#include <stdio.h>
#include <stdlib.h>
int main() {	int i,j,slen,sn;
	char word[1000];
	printf("Enter the word & number\n");
	scanf("%s",word);
	scanf("%d",&sn);
	slen=strlen(word);
	for(i=0;i<slen;i++){
		for(j=65;j<=90;j++){
			if(word[i]==j)
			printf("	%c",(word[i]+sn));
	}}}
