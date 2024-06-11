#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
int main()
 {
 	 int i[100],x,a,b,key,n,z;
 	 char w[30][30];
 		 printf("Press the numbers to get a cypher\nPress enter after each number and a space=0\nBut first,how many numbers are there?\n");
         scanf("%d",&key);
          system("cls");
         printf("Okay, %d numbers then. please enter all the numbers\n",key);
         for(x=1;x<=key;x++)
             {
	             scanf("%d",&i[x]);
             }
 	
 	     w[0][0]=' ';
 	     w[0][1]='A',
	     w[0][2]='B',
	     w[0][3]='C',
	     w[0][4]='D',
	     w[0][5]='E',
	     w[0][6]='F',
         w[0][7]='G',
	     w[0][8]='H',
	     w[0][9]='I',
	     w[0][10]='J',
	     w[0][11]='K',
	     w[0][12]='L',
		 w[0][13]='M',
		 w[0][14]='N',
		 w[0][15]='O',
		 w[0][16]='P',
		 w[0][17]='Q',
		 w[0][18]='R',
	 	 w[0][19]='S',
	 	 w[0][20]='T',
		 w[0][21]='U',
	 	 w[0][22]='V',
		 w[0][23]='W',
		 w[0][24]='X',
		 w[0][25]='Y',
		 w[0][26]='Z';
		 for(b=1;b<=key/2;b++)
		 {
		 	n=(b/key)*100;
		 	if(b>key)
		 	{
		 		system("cls");
				 printf("100% compleated");
			}
		 	else{
		 		n=20;
		 		system("cls");
		 	printf("%d percent compleated",n);
		        }
		 	 for(z=1;z<99999999*10;z++)
		 	 {
			  }
			  system("cls");
		 }
		 printf("So your cypher is-");
	 	 for(x=1;x<=key;x++)
	     	{
		     	a=i[x];
		     	printf("%c",w[0][a]);
	      	}
	 return (0);
}
