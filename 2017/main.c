#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int s,k,a[100],m,r=0,t=0,y,u,i=1,j=5;
 	printf("enter the number \n");
 	scanf("%d",&s);
 		m:printf("enter the key smller than 10\n");
 	scanf("%d",&k);
 	if(k>=10)
 	{
 		printf("I said to ");
 		goto m;
	 }
 	m=s;
 	while(m!=0)
 	{
 		a[i]=m%10;
 		m=m-a[i];
 		m=m/10;
 		i++;
 		t++;
	 }
	 y=t;
	for(j=5;j>0;j--)
	 {
	 	system("cls");
	 printf("wait for %d seconds\n",j);
	 sleep(1);}
	 printf("search compleated and");
	 for(i=1;i<=t;i++)
	 {
	 	if(a[i]==k)
	 	{
	 		printf(" yor key found at %d position in the number %d\n",y,s);
	 		r=1;
		 }
		 y=y-1;
	 }
	 if(r==0)
	 {
	 	printf(" sorry,because your key was not found\n");
	 }
 	
 	
	return 0;
}
