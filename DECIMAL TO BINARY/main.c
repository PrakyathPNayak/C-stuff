#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()

{
	long num,decimal_num,remainder,base=1,binary=0;
	printf("Enter the decimal number:\n");
	scanf("%d",&num);
	decimal_num=num;
	while(num>0)
	{
		remainder=num%2;
		binary=binary+remainder*base;
		num=num/2;
		base=base*10;
	}
	printf("Input number is=%d\n",decimal_num);
	printf("Its binary equivalent is=%d\n",binary);

}
