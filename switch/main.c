#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b;
	printf("enter the marks \n");
	scanf("%d",&a);
	b=a/10;
	switch(b)
	{
		case 3:
		printf("fail\n");
		break;
		case 6:
		printf("grade b\n");
		break;
		case 8:
		printf("grade a\n");
		break;
		case 10:
		printf("distinction\n");
		break;
	
		
	}
	return 0;
}
