 
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30],t[30];
    printf("\nEnter The String (S1) : ");
    gets(s1);
    printf("\nEnter The String (S2) : ");
    gets(s2);
    strcpy(t,s1);
    strcat(s1,s2);
    strcpy(s2,t);
    printf("\n******************");
    printf("\nAfter Swapping :");
    printf("\nS1 :%s \nS2 :%s",s1,s2);
 
}
 
 

 

 
