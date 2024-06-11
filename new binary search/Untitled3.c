#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int a[1000],i=0,k,s,b,m=0;
 	printf("enter the space element\n");
 	scanf("%d",&s);
 	printf("enter the key\n");
 	scanf("%d",&k);
 	printf("enter the %d numbers\n",s);
 	for(b=1;b<=s;b++)
 	{
 		
 		scanf("%d",&a[i]);
 		i++;
	 }
	b=0;
	i=0;
     while(b<s)
	 {
	 	b++;
	 	system("clr");
	 	
	    if(a[i]==k)
	    {
	    	printf("your key found at  position %d \n",b);
	    	m=109;
	    	i++;
		}
		else
		{
			i++;
		}
	
	 }
	 if(m==0)
	 {
	 	printf("the key is not found\n");
	 }
	return 0;
}
