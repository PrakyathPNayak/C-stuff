#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{   int a,b,c,d,e,f,g,h=100,i=35,z,j,k,l;
printf("I'm always be there'\n");
   m:  printf("enter the maks of kannada\n");
     scanf("%d",&a);
     if(a>h)
     {
     	printf("the test is only had 100 marks\n");
     	goto m;
    	 }
	 else if(a<i)
	 {
	 	printf("you failed in kannada\n");
	 	exit(0);
	 }
	 else
	 {
	 	printf("you are pass in kannada\n" );
 	
	 }
     e:printf("enter the marks of english\n");
     scanf("%d",&b);
     if(b>h)
     {
     	printf("the test only had 100 marks\n");
     	goto e;
	 }
	 else if(a<i)
	 {
	 	printf("you are failed \n");
	 	exit(0);
	 }
	 else 
	 {
	 	printf("you are passed in english\n");
	 }
   r:  printf("enter the marks of hindi\n");
     scanf("%d",&c);
     if(c>h)
     {
     	printf("the test only had 100 marks\n");
     	goto r;
     	
	 }
	 else if(c<i)
	 {
	 	printf("you are failed in hindi\n");
	 	exit(0);
	 }
	 else
	 {
	 	printf("you are passed in hindi\n");
}
   
   x:  printf("enter the marks of social\n");
     scanf("%d",&j);
     if(j>h)
     {
     	printf("the test only had 100 marks\n");
     	goto x;	 }
	 else if(j<i)
	 {
	 	printf("you are failed in social\n");
	 	exit(0);
	 }
	 else
	 {
	 	printf("you are passed in social\n");
	 }
   v:  printf("enter the marks of science\n");
     scanf("%d",&k);
     if(k>h)
     {
     	printf("the test only had 100 marks\n");
     	goto v;	 }
	 else if(k<i)
	 {
	 	printf("you are failed in science\n");
	 	exit(0);
	 }
	 else
	 {	printf("you are passed in science\n");
	 }  w:  printf("enter the marks of maths\n");
     scanf("%d",&l);
     if(l>h)
     {
     	printf("the test only had 100 marks\n");
     	goto w;	 }
	 else if(l<i)
	 {
	 	printf("you are failed in maths\n");
	 	exit(0);
	 }
	 else	 {	printf("you are passed in maths\n");
	 }
	 
	
	 
	 	
		   d=a+b+c+j+k+l;
     z=d/3;
     printf("the toal mark is %d.you have got %d percent marks\n",d,z);
     	 
	return 0;
}
