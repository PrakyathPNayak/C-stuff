#include <stdio.h>

int main()
 {
 	int a[20][20],b[20][20],i,j,m,n;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements\n");
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
		
	}
}
printf("\n\nyour enterd matrix is\n\n");
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d ",a[i][j]);
		
	}
	printf("\n");
}
printf("Ulta mtrix is\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		b[i][j]=a[j][i];
	}
}
	for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
	printf("%d ",b[i][j]);
		
	}
	printf("\n");
}

	return 0;
}
