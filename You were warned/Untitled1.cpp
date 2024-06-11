#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	
int a[99999],b=10,c,d,e=0,f,g,h,i,j=0,k,l=1,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
p:	printf("enter the max number(more than 50)\n");
	scanf("%d",&c);
	c=u;
		if(c<50)
	{
		printf("please ");
		goto p;
		}
	
	g:printf("enter the max value(less than %d)\n",b);
	scanf("%d",&d);
	if(d>10)
	{
		printf("please ");
		goto g;
		}
		while (e==0)
		{
				j++;
		a[j]=c-(d+1);
	
		if(a[j]<d)
		{
			printf("please ");
			e=1;
				system("cls");
			}	
		
		}
		k=1;
		printf("if some one writes max num, he wins or he loses?(win=1,lose=2 or any numbes)\n");
		scanf("%d",&h);
		while(l==1)
		{
				if(h==1)
			{
		printf("%d\n",a[j]);
	
			if(u==a[j])
		{
			printf("you lost\n");
			l=2;
		}
			j=j-1;
	}
	else
	{
		
		a[j]=j-1;
		printf("%d",a[j]);
		j=j-1;
	}
z:	printf("write yours\n");
	scanf("%d",&m);
	n=a[j]-m;
	if(n<=0)
	{
		printf("please corectly ");
		goto z;
	}
	if(h==1&&m==c)
	{
		printf("you won\n");
		l=2;
	}
		else if(h==2&&m>=c)
	
		printf("you lost\n");
		l=2;
	}
		return 0;
	}
	
 
