#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	char s[20],rev[20];
 	int i,count=0;
 	scanf("%s",s);
 	for(i=0;s[i]!='\0';i++)
 	count=count+1;
 	for(i=0;i<count;i++)
 	{
 		rev[i]=s[count-i-1];
 		
	 }
	 rev[i]='\0';
	 printf("reversed string is\n %s",rev);
	 for(i=0;i<count;i++)
	 {
	 	if(rev[i]!=s[i])
	 {
		 	printf("\n%s is not a polyndome\n",s);
		 exit(0);	
	}
	 }
	 printf("\n%s is a polyndrome\n",s);
	 
 	
	return 0;
}
