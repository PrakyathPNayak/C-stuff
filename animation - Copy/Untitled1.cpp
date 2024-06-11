#include <stdio.h>
#include <conio.h>

int main()
 {
 	int x,y,i,j;
 	scanf("%d",&x);
	for(y=1;y<=x;y++)
{
	if(y==1)
	{
		for(i=1;i<=x-y;i++)
	{
		printf(" ");
	
		
		
	}
		printf("*");
	printf("\n");
	
		
	}
	else

{
	
		for(i=1;i<=x-y;i++)
	{
		printf(" ");
	
		
		
	}
	printf("*");
	
	for(j=1;j<=y*2-3;j++)
	{
		printf(" ");
			
	}

		printf("*");
	printf("\n");
}
		
}




	for(y=x-1;y>=1;y--)
{
	if(y==1)
	{
	for(i=1;i<=x-y;i++)
	{
		printf(" ");
	
		
	}
		printf("*");
			printf("\n");	
	}
	else
	{
	
	for(i=1;i<=x-y;i++)
	{
		printf(" ");
	
		
	}
		printf("*");
	
	for(j=1;j<=y*2-3;j++)
	{
		printf(" ");
		
	}
		printf("*");

	printf("\n");
}
	
}


}
