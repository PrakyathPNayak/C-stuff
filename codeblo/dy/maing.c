#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int b=0,c,d,e,f=0,g,i=1,h=0,m=0;
 	char a[3][3],c1,c2;
 	a[1][1]=a[1][2]=a[1][3]=a[2][1]=a[2][2]=a[2][3]=a[3][1]=a[3][2]=a[3][3]='-';
 	while(h==0)
 	{
	 
 	printf("p1,enter your choice\n");
 	scanf("%c",&c1);
 	if(c1=='X'||c1=='x')
 	{
 		c2='O';
 		printf("p2's choice is %c\n",c2);
 		h=1;
	 }
	 	else if(c1=='O'||c1=='o')
 	{
 		c2='X';
 		printf("p2's choice is %c\n",c2);
 		h=1;
	 }
	 else
	 {
	 	printf("please ");
	 }
}
printf("positions are like this-\n");
printf("1|2|3|\n_ _ _\n4|5|6|\n_ _ _\n7|8|9|\n_ _ _\n");
while(m==0)
{
	
	m:printf("p1,enter your position\n");
	scanf("%d",&b);
	while(b>9)
	{
		printf("please ");
		goto m;
	}
	while(b>3)
	{
		b=b-3;
		i++;
	}
	if(a[i][b]==c1||a[i][b]==c2)
	{
		printf("please ");
		goto m;
		
	}
	a[i][b]=c1;
	if(a[1][1]==a[1][2]==a[1][3]==c1||a[2][1]==a[2][2]==a[2][3]==c1||a[3][1]==a[3][2]==a[3][3]==c1||a[1][1]==a[2][1]==a[3][1]==c1||a[1][2]==a[2][2]==a[3][2]==c1||a[1][3]==a[2][3]==a[3][3]==c1||a[1][1]==a[2][2]==a[3][3]==c1||a[1][3]==a[2][2]==a[3][1]==c1)
	{
		printf("p1 won\n");
		m=1;
		exit(0);
	}
	system("cls");
	printf("%c|%c|%c|\n_ _ _\n",a[1][1],a[1][2],a[1][3]);
		printf("%c|%c|%c|\n_ _ _\n",a[2][1],a[2][2],a[2][3]);
			printf("%c|%c|%c|\n_ _ _\n",a[3][1],a[3][2],a[3][3]);
			printf("p2,enter your position\n");
			scanf("%c",&b);
				while(b>9)
	{
		printf("please ");
		goto m;
	}
	while(b>3)
	{
		b=b-3;
		i++;
	}
	if(a[i][b]==c1||a[i][b]==c2)
	{
		printf("please ");
		goto m;
		
	}
	a[i][b]=c2;
	if(a[1][1]==a[1][2]==a[1][3]==c2||a[2][1]==a[2][2]==a[2][3]==c2||a[3][1]==a[3][2]==a[3][3]==c2||a[1][1]==a[2][1]==a[3][1]==c2||a[1][2]==a[2][2]==a[3][2]==c2||a[1][3]==a[2][3]==a[3][3]==c2||a[1][1]==a[2][2]==a[3][3]==c2||a[1][3]==a[2][2]==a[3][1]==c2)
	{
		printf("p2 won\n");
		m=1;
		exit(0);
	}
    system("cls");
	printf("%c|%c|%c|\n_ _ _\n",a[1][1],a[1][2],a[1][3]);
		printf("%c|%c|%c|\n_ _ _\n",a[2][1],a[2][2],a[2][3]);
			printf("%c|%c|%c|\n_ _ _\n",a[3][1],a[3][2],a[3][3]);
	
}


	return 0;
}
