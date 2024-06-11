#include <stdio.h>
#include <stdlib.h>
int main()
{
    char infix[50],postfix[50];
    printf("Enter Infix Expression ");
    scanf("%s",infix);
    inpo(infix,postfix);
    int F(char g);
    int G(char g);
    printf("Postfix Expression is %s",postfix);
    return 0;
}

int F(char g)
{
    switch(g)
    {
        case '+':
        case '-':return 2;
        case '*':
        case '/':return 4;
        case '$':
        case '^':return 5;
        case '(':return 0;
        case '#':return -1;
        default :return 8;
    }
}

int G(char g)
{
    switch(g)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 3;
        case '$':
        case '^':return 6;
        case '(':return 9;
        case ')':return 0;
        default :return 7;
    }
}

int inpo(char infix[],char postfix[])
{
    char s[50],g;
    int i,j=0,top=-1;
    s[++top]='#';
    for(i=0;i<strlen(infix);i++)
    {
        g=infix[i];
        while(F(s[top])>G(g))
        {
            postfix[j++]=s[top--];
        }
        if(F(s[top])!=G(g))
        s[++top]=g;
        else
        top--;
    }
    while(s[top]!='#')
    {
        postfix[j++]=s[top--];
    }
    postfix[j]='\0';
}

