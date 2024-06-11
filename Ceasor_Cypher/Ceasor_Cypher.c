#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	char Feed[150], Mat[150][150] , Root[100] , Key[100];
	float f;
	int Displace,i,j=1,Temp=0;
	
/*	Feed[1] = 'A',Feed[2] = 'B',Feed[3] = 'C',Feed[4] = 'D',Feed[5] = 'E',Feed[6] = 'F',Feed[7] = 'G',Feed[8] = 'H',Feed[9] = 'I',Feed[10] = 'J',Feed[11] = 'K',
	Feed[12] = 'L',Feed[13] = 'M',Feed[14] = 'N',Feed[15] = 'O',Feed[16] = 'P',Feed[17] = 'Q',Feed[18] = 'R',Feed[19] = 'S',Feed[20] = 'T',Feed[21] = 'U',Feed[22] = 'V',
	Feed[23] = 'W',Feed[24] = 'X',Feed[25] = 'Y',Feed[26] = 'Z',Feed[27] = 'a',Feed[28] = 'b',Feed[29] = 'c',Feed[30] = 'd',Feed[31] = 'e',Feed[32] = 'f',Feed[33] = 'g',
	Feed[34] = 'h',Feed[35] = 'i',Feed[36] = 'j',Feed[37] = 'k',Feed[38] = 'l',Feed[39] = 'm',Feed[40] = 'n',Feed[41] = 'o',Feed[42] = 'p',Feed[43] = 'q',Feed[44] = 'r',
	Feed[45] = 's',Feed[46] = 't',Feed[47] = 'u',Feed[48] = 'v',Feed[49] = 'w',Feed[50] = 'x',Feed[51] = 'y',Feed[52] = 'z',Feed[53] = '0',Feed[54] = '1',Feed[55] = '2',
	Feed[56] = '3',Feed[57] = '4',Feed[58] = '5',Feed[59] = '6',Feed[60] = '7',Feed[61] = '8',Feed[62] = '9',Feed[63] = ' ',Feed[64] = '?',Feed[65] = '.',Feed[66] = ',',
	Feed[67] = '$',Feed[68] = '/',Feed[69] = '!',Feed[70] = ':',Feed[71] = '-',Feed[72] = '+',Feed[73] = '&',Feed[74] = '@',Feed[75] = '/',Feed[76] = '\\',Feed[77] = '<',
	Feed[78] = '>',Feed[79] = '(',Feed[80] = ')',Feed[81] = '{',Feed[82] = '}',Feed[83] = ';',Feed[84] = 'A',Feed[85] = 'A',Feed[86] = 'A',Feed[87] = 'A',Feed[88] = 'A';
*/
/*
	for(i=1;i<=26;i++){
		Feed[i]=i+64;
	}
*/	
/*	for(i=0; i<=83; i++) {
		for ( j=0; j<=83 ;j++ ) {
			Mat[i][j]='0'
			;
		}
	}
	
	printf("Enter the Difference number\n");
	scanf("%d",&Displace);
	
	for(i=1;i<=83;i++){
		
	  //   Mat[0][i]=Feed[i];
	  //   Mat[i][0]=Feed[i];
	}
	for(i=1;i<=83;i++){
		for(j=1;j<=83;j++){
		//	Mat[i][j]=Feed[(j+Displace)%83];
			Displace=Displace+1;
		}
	}
	
	for(i=0;i<=83;i++){
		for(j=0;j<=83;j++){
				printf("%c",Mat[i][j]);
		}
		printf("\n");
	}
	*/
	printf("Enter the Difference number\n");
	scanf("%d",&Displace);
	for(i=32;i<=126;i++){
		Feed[j]=i;
		j=j+1;
	}
	Feed[1]=' ';
		
	for(i=0; i<=95; i++) {
		for ( j=0; j<=95 ;j++ ) {
			Mat[i][j]='0';
		}
	}
	
	for(i=1;i<=95;i++){
		
	   Mat[0][i]=Feed[i];
	   Mat[i][0]=Feed[i];
	}
	for(i=1;i<=95;i++){
		for(j=1;j<=95;j++){
			if((j+Displace)==95)
			
				Mat[i][(j+Displace)]=Feed[j];
				
			else  if((j+Displace)%95==0)
			
				Mat[i][95]=Feed[j];
				
			else
			
				Mat[i][(j+Displace)%95]=Feed[j];
				
		}
		Displace=Displace+1;
	}

	for(i=0; i<=95; i++) {
		for ( j=0; j<=95 ;j++ ) {
			printf("%c",Mat[i][j]);
		}
		printf("\n");
	}
	printf("Enter your Root text in capitals\n");
	scanf("%s",Root);
	printf("Enter your Password\n");
	scanf("%s",Key);
	
	int CRN=0, CKN=0;					//CRN & CKN-No of characters in Root text and Password
	
	for(i=0;Root[i]!='\0';i++){
  		 CRN=CRN+1;

	}
	for(i=0;Key[i]!='\0';i++){
  		 CKN=CKN+1;

	}
     printf("\n%d\t%d",CRN,CKN);
    
	char Cypher[100];
	int k;
    
	for(i=1;i<=CRN;i++){
		for(j=1; Root[i]!=Mat[0][j] ;j++){
			printf("\n%d\t%d",i,j);
		}
		for(k=1; Mat[k][j]!=Key[i]; k++){
			;
		}
		Cypher[i]=Mat[k][0];
		printf("%c",Cypher[i]);
		}

	return 0;
}
