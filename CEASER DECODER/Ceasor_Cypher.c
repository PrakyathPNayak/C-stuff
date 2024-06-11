#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
 {
 	int i,con,j=1,x,a,b,lo,ho=1,mul,key,n,temp,cno=0,cko=0,II=0;
 	char w[30][30],r[300],kw[300],crp[300];
 	char clr[900];
 		printf("press the key no value\n");
scanf("%d",&key);
 	
 	w[0][0]='+';
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
	

	j=1;
for(i=1;i<=26;i++)
{
	w[i][0]=w[0][j];
	j=j+1;
}


temp=key;

for(i=1;i<=26;i++)
{
	for(j=1;j<=26;j++)
	{
		if(((j+temp)%26)!=0)
		{
	w[i][(j+temp)%26]=w[0][j];
        } 
        else if((j+(temp%26))==26)
        {
        	w[i][j+(temp%26)]=w[0][j];
		}
		       
	}
	temp=temp+1;
	
}
for(i=0;i<=26;i++)
{
	for(j=0;j<=26;j++)
	{
		printf("%c ",w[i][j]);
		
	}
	printf("\n");
}

printf("Enter your ENCRYPTED text in capitals\n");
scanf("%s",r);
printf("enter your keyword\n");
scanf("%s",kw);
cno=strnlen(r);
/*
for(i=0;r[i]!='\0';i++)
{
   cno=cno+1;

}*/

cko=0;
for(i=0;kw[i]!='\0';i++)
{
   cko=cko+1;

}
//printf("----%d\n%d",cno,cko);

for(i=0;i<cno;i++)
{
  x=(i%cko);
  n=0;	
 
  lo=1;
	  
    if(x==0)
	{
		
     
	  
		while(r[i]!=w[lo][0])
  	{
  		lo=lo+1;
	}
	//printf("----%d\n%d",lo,lo);  
	  ho=1;
	  while(kw[(cko-1)*n]!=w[lo][ho])
	  {
	  	ho=ho+1;
      }
	 	//printf("----%d\n%d",ho,ho);  
	  crp[i]=w[0][ho];
	  //	printf("----%c\n%c",crp[i],crp[i]);  
	  n=n+1;
//	   printf("Your Decrypted text is:-%s\n",crp);
}


 else
	{
		

		while(r[i]!=w[lo][0])
  	{
  		lo=lo+1;
	}
	  
	  ho=1;
	  while(kw[x]!=w[lo][ho])
	  {
	  	ho=ho+1;
      }
	 
	  crp[i]=w[0][ho];
}
}
   printf("Your Decrypted text is:-%s\n",crp);
   printf("%d",strnlen(crp));
   scanf("%d",&con);
	return 0;
	
}
