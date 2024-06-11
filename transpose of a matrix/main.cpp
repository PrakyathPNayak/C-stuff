#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char a[20][20],i,j,b[20][20],n,m;
	printf("Enter the row and column no");
	scanf("%d%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%s",&a[i][j]);
	}
	printf("The Entered matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%c\t",a[i][j]);
	
	printf("\n");
}
printf("transposed matrix is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	b[j][i]=a[i][j];
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%c\t",b[i][j]);
		
	}
	printf("\n");
}
	
	return 0;
}
