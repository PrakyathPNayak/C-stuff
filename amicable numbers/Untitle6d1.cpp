#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() 
{
    int num,x,i,sl,asc=0;
    char str1[200],op[30];
    scanf("%s", str1);	
	sl=strlen(str1);
	
	 for(i=1;i<=25;i++){
		op[i]='0';
    }
	for(i=0;i<sl;i++){
		asc=str1[i];
		op[asc-97]=str1[i];
    }
   
    for(i=25;i>=1;i--){
		if(op[i]!='0')
		{	printf("%c",op[i]); }
    }
    return 0;
}

