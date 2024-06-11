#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(){
	g:printf("\n");
	int i,j,count=0,num=0,k,m,val;
	char rom[50];
		printf("Enter Roman number\n");
		scanf("%s",rom);
		int len=strlen(rom);
		for(i=0;i<len;i++){
			switch(rom[i]){
				case 'I':count =count+1;
					break;
				case 'V': count=count+5;
					break;
				case 'X':count=count+10;
					break;
				case 'L': count=count+50;
					break;
				case 'C': count=count+100;
					break;
				case 'D': count=count+500;
					break;
				case 'M': count=count+1000;
					break;
			}
		}
		char list[50]={"IVXLCDM"};
		for(i=0;i<len;i++){
			num=0;
			val=0;
			for(j=0;j<7;j++){
				
				if(list[j]==rom[i]){
					for(k=i+1;k<len;k++){
						for(m=0;m<7;m++){
							if(list[m]==rom[k])
							break;
						}
						if(val<m) val=m;
						
					}
				}
			}
			if(i<val) num=1;	
			if(num==1){
					switch(rom[i]){
					case 'I':count =count-2*1;
					break;
					case 'V': count=count-2*5;
					break;
					case 'X':count=count-2*10;
					break;
					case 'L': count=count-2*50;
					break;
					case 'C': count=count-2*100;
					break;
					case 'D': count=count-2*500;
					break;
					case 'M': count=count-2*1000;
					break;
				}
			}	
		}
	
		printf("%d",count);
			goto g;
	return 0;
}
