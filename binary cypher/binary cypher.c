#include <stdio.h>

int main()
 
 {
 	int ent[30],i,j,x,y;
 	char root[300],cy[50];
 	ent[1]=100001;
 	ent[2]=100010;
 	ent[3]=100011;
 	ent[4]=100100;
 	ent[5]=100101;
 	ent[6]=100110;
 	ent[7]=100111;
 	ent[8]=101000;
 	ent[9]=101001;
 	ent[10]=101010;
 	ent[11]=101011;
 	ent[12]=101100;
 	ent[13]=101101;
 	ent[14]=101110;
 	ent[15]=101111;
 	ent[16]=110000;
 	ent[17]=110001;
 	ent[18]=110010;
 	ent[19]=110011;
 	ent[20]=110100;
 	ent[21]=110101;
 	ent[22]=110110;
 	ent[23]=110111;
 	ent[24]=111000;
 	ent[25]=111001;
 	ent[26]=111010;
 cy[1]='A';
 cy[2]='B';
 cy[3]='C';
 cy[4]='D';
 cy[5]='E';
 cy[6]='F';
 cy[7]='G';
 cy[8]='H';
 cy[9]='I';
 cy[10]='J';
 cy[11]='K';
 cy[12]='L';
 cy[13]='M';
 cy[14]='N';
 cy[15]='O';
 cy[16]='P';
 cy[17]='Q';
 cy[18]='R';
 cy[19]='S';
 cy[20]='T';
 cy[21]='U';
 cy[22]='V';
 cy[23]='W';
 cy[24]='X';
 cy[25]='Y';
 cy[26]='Z';
 
 	
 	
 
 	printf("Enter your root text here\n");
 	scanf("%s",root);
 	for(i=0;root[i]!='\0';i++)
 	{
 		
	 }
	 for(j=0;j<i;j++)
	 {
	 	for(x=1;x<=26;x++)
	 	{
	 		if(root[j]==cy[x])
	 		{
	 			printf("%d",ent[x]);
			 }
		 }
	 }
	return 0;
}
