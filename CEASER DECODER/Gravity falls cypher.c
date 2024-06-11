#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
int main()
 {
 	 int x=1,a,b,k,i[100],z,l=0;
 	 float n;
 	 char w[35];
 		 printf("Press the numbers to get a cypher\nPress enter after each number and a space=0\nBut first,how many numbers are there?\n");
         scanf("%d",&k);
          system("cls");
         printf("Okay, %d numbers then. please enter all the numbers\n",k);
         for(x=1;x<=k;x++)
             {
	             scanf("%d",&i[x]);
	             }	
 	     w[0]=' ';
 	     w[1]='A';
	     w[2]='B';
	     w[3]='C';
	     w[4]='D';
	     w[5]='E';
	     w[6]='F';
         w[7]='G';
	     w[8]='H';
	     w[9]='I';
	     w[10]='J';
	     w[11]='K';
	     w[12]='L';
		 w[13]='M';
		 w[14]='N';
		 w[15]='O';
		 w[16]='P';
		 w[17]='Q';
		 w[18]='R';
	 	 w[19]='S';
	 	 w[20]='T';
		 w[21]='U';
	 	 w[22]='V';
		 w[23]='W';
		 w[24]='X';
		 w[25]='Y';
		 w[26]='Z';
		 w[27]='?';
		 w[28]='.';
		 w[29]=',';
		 w[30]=';';
		 w[31]=':';
		 w[32]='"';
		 
		 for(b=1;b<=10;b++)
		 {
		 	system ("cls");
		 	z=b*10;
		 	printf("%d percent compleated",z);
		 	sleep(1);	
		 }
		  system("cls");
		 printf("So your cypher is-");
	 	 for(x=1;x<=k;x++)
	     	{
	     		a=i[x];
	     	 printf("%c",w[a]);
		  	}
	 return (0);
}
