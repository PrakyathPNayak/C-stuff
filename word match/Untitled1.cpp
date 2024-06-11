    #include <stdio.h>
    #include <stdlib.h>
    int main()
	{
        int n;
        int i;
        char in[n][10];
    printf("Enter the numbe of words\n");
    scanf("%d",n);
    printf("Enter the words one by one\n");
        for(i=0;i<n;i++)
		{
            printf("Enter string %d : ",i);
            fgets(in[i],100,stdin);
        }
        printf("You have entered : \n");
        for(i=0;i<n;i++)
		{
            printf("%s",in[i]);
        }
        printf("%c",in[2][0]);
        return 0;
    }
