    #include <stdio.h>
    #include <stdlib.h>
    #include<string.h>
    int main()
	{
        int n;
        int i,j,k,count,w;
        int len;
        char in[100][100],res[100][100];
        printf("Enter the number of words\n");
    	scanf("%d",&n);
    	printf("Enter the words one by one\n");
        for(i=0;i<=n;i++)
		{
			
            fgets(in[i],100,stdin);
        
		}
        printf("You have entered : \n");
        for(i=1;i<=n;i++)
		{
			
            printf("%s",in[i]);
        
		}
       
		
		for(i=1;i<=n;i++)
		{
			len=strlen(in[i]);
		    res[i][0]=in[i][0];
		    res[i][1]=in[i][len-2];
		}
	for(i=1;i<=n;i++)
	{
		count=0;
		w=1;
		for(k=1;k<=n;k++)
		{
			if(k!=i)
			{   
		    	if(res[w][1]==res[k][0])
				{
				 w=k;
				count=count+1;
				}	
			}
		}
		printf("===%d==\n",count);
		
	}
        
    
        
        return 0;
    }
