#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
 {
 	int x,y,i,j,n;
 	printf("Enter your NO\n");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 
 	char e[50]="";
 		
 	if(i%3==0) 			strcat(e,"FIZZ");
 	if(i%5==0)			strcat(e,"BUZZ");
 	if(i%7==0)			strcat(e,"LIZZ");
 	
 	if(e[1]=='\0')		printf("%d\n",i);
 	else			    printf("%s\n",e);
 	}
}
