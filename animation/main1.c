#include <stdio.h>
#include <math.h>
int main() {
	long a,b[500000],c,d=1,i=1,e=1;
	printf("Enter a number\n");
	scanf("%d",&a);
	b[1]=2;
	int temp=1;
	
	for(c=3;c<=a;c++){
		e=1;
	 	for(i=1;b[i]<=sqrt(c);i++)  {	
			if(c%b[i]==0){
	    		e=0;
	    		break;
	    	}
		}
		if(e==1)
			b[++temp]=c;
	}
	
	for(i=1;i<=temp;i++)
	printf("%d\t",b[i]);
	return 0;
}
