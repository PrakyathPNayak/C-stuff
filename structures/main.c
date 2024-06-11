#include <stdio.h>
#include <stdlib.h> 
struct Point 
{ 
   int cn;
   char name;
}; 
  
int main() 
{ 
int n,i;
   struct Point st[10];
    printf ("enter the number of contacts\n");
	scanf("%d",&n);
	printf ("enter the them one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&st[i].name);	
			scanf("%d",&st[i].cn);
		 } 
		 for(i=0;i<n;i++)
	{
		printf("%c	",st[i].name);	
		printf("%d\n",st[i].cn);
		 }

  
   return 0; 
}


