#include <stdio.h>
#include <stdlib.h>

int main()
{
	int key,i,cno=0,rem,dev,k,mul,j;
	char r[340],op[390];
        printf("Enter the key value\n");
        scanf("%d",&key);
      printf("enter your root phrase\n");
      scanf("%s",r);
      for(i=0;r[i]!='\0';i++)
{
   cno=cno+1;

}
printf("%d\n",cno);
k=0;
rem=cno%key;
dev=cno/key;
for(i=0;i<key;i++)
{

  if(rem!=0)
  {
  	mul=0;
  	for(j=0;j<dev+1;j++)
  	{
  	op[k]=r[i+mul*key];
	  mul=mul+1;
	  k=k+1;	
	  }
  }	
  
  else
  {
  	mul=0;
  	for(j=0;j<dev;j++)
  	{
  	op[k]=r[i+mul*key];
	  mul=mul+1;
	  k=k+1;	
	  }
  }	
}

  printf("Your encrypted key=%s",op);    
	return 0;
}
