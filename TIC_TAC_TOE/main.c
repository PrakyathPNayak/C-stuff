#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main()
{
	int a,b,c,d,e,f,g=1,h,i,m;
	char z[10],x,y;
	
   	for(i=0;i<10;i++)
		{
		 z[i]='-';
		 }
	     printf("Hello there! Nice to meet you.Welcome to the game called Tic-Tac-Toe.\nSo here are the rules:-\nRule no.1:-\n\tFirst you will be asked to choose your symbol. So it's your choise to choose X or O(please write x or o in capital letters)\nRule no.2:-\n\tDO NOT INVAILD COMMAND. PROGRAM COULD MISBEHAVE.\nRule no.3\n\tThis game is played by two players.So, grab someone quickly.First player gets to choose his symbol.\nRule no.4\n\tThe game is about who fills a row with their symbol quickly in 3X3 box using the positioning numbers like:-\n\t\t||1||2||3||\n\t\t||4||5||6||\n\t\t||7||8||9||\n\n\tSo, good luck to both of you!\n");
         printf("press any numer to begin the game\n");
         scanf("%d",&m);
		 system("cls");
		 sleep(1);
		 s:printf("Choose your symbol, player 1\n");
		 scanf("%c",&x);
		 if(x=='X'||x=='O')
		 {
		 	if(x=='X')
		 	     {
			        y='O';
		           }
			else
			    {
			    	y='X';
				  }  
			 
		  }
		  else
		  {
		  	printf("It is an invalid command\n");
		  	goto s;
		  }
         m:printf("\t\t||1||2||3||\n\t\t||4||5||6||\n\t\t||7||8||9||\n");
         printf("Enter your symbol positioning number player 1\n");
         scanf("%d",&i);
         z[i]=x;
         printf("\t\t||%c||%c||%c||\n\t\t||%c||%c||%c||\n\t\t||%c||%c||%c||\n",z[1],z[2],z[3],z[4],z[5],z[6],z[7],z[8],z[9]);
  printf("Enter your symbol positioning number player 2\n");
         scanf("%d",&i);
         z[i]=y;
         printf("\t\t||%c||%c||%c||\n\t\t||%c||%c||%c||\n\t\t||%c||%c||%c||\n",z[1],z[2],z[3],z[4],z[5],z[6],z[7],z[8],z[9]);    
	return 0;
}
