#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a[10000],b=0,c,d,h,i,j,e,k[10000];
 	float f;
printf("welcome to the never winning game\n");
sleep(1);
system("cls");
printf("rules are like this:\n");
printf("1:First you have to choose the max number\n");
printf("2:Then you have to choose the max value(that means what is the value you have to addition to the previous number )\n");
printf("3:who says the max number they will lose\n");
	printf("enter the max number\n");
	scanf("%d",&c);
	g:printf("enter the max value(less than ten)\n");
	scanf("%d",&d);
	if(d>9)
	{
		printf("please ");
		goto g;
	}
	f=(c/d)+1;
	k[e]=c;
	a[e]=k[e]-d;
	for(e=f;e<1;e-1)
	{
			k[e]=a[e];
		a[e]=k[e]-d;
	
	}
	b=0;
	
	m:printf("enter the value\n");
	scanf("%d",&h);
	if(h>d)
	{
		printf("please ");
		goto m;
	}
	if(b>=c)
	{
		printf("you lost!");
		exit(0);
	}
	i=b;
	b=b+h;
	printf("%d+%d=%d\n",i,h,b);
	b=b+a[e];
	j=b-a[e];
	printf("%d+%d=%d\n",j,a[e],b);
	e++;
	if(b>=c)
	{
		printf("you won!!!!");
		exit(0);
	}
	goto m;
	return 0;	
 }
