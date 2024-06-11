#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	float x,y,a,b,j,i,sin,z,n;
 	printf("Enter the value of x in degrees\n");
 	scanf("%f",&z);
 	
 	for(z=z;z>=360;i++)
 	{
 	   z=z-360;	
	}
	 x=z;
 	x=(x*3.14159265358)/180;
 	printf("x in rad=%15.12f\n",x);
 	a=-1;
 	sin=0;
 	n=0;
 	b=1;
 	
 	
 	for(n=0;n<200;i++)
 	{
 		a=a*(-1);
 		y=((pow(x,(2*n)+1))/(b))*(a);
 		sin=sin+y;
 		n=n+1;
 		b=1;
 		for(j=1;j<=((2*n)+1);j++)
 		{
 			b=b*j;
		}
 		
 		
 	 
	}
	 printf(" sin(%fdegree)=sin(%frad)=%10.6f",(x*180)/3.14159265358,x,sin);
 	
	return 0;
}
