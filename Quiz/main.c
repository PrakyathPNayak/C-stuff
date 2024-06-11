#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,i,score=0;
	printf("1.wh0 is present ceo of the Microsoft?\n1)Sunder pichay\n2)Satya Nadella\n3)steve jobs\n4)Bill Gates\n");
	p:scanf("%d",&a);
	if(a>4)
	{
	printf("Please enter valid option\n");
	goto p;
}
	 else if(a==2)
	{
	printf("Your answer is correct\n");
	score=score+1;
    }
	else
	printf("Your answer is wrong\n");
	printf("2.Watt is unit of\n1)energy\n2)power\n3)Force\n4)current\n");
	q:scanf("%d",&a);
		if(a>4)
	{
	printf("Please enter valid option\n");
	goto q;
}
	else if(a==2)
	{
	printf("Your answer is correct\n");
	score=score+1;
    }
	else
	printf("Your answer is wrong\n");
	printf("3.Who is the captain of RCB?\n1)Shane Watson\n2)Virat cohli\n3)Daniel Vetory\n4)M.S.Dhoni\n");
	r:scanf("%d",&a);
		if(a>4)
	{
	printf("Please enter valid option\n");
	goto r;
}
	 else if(a==2)
	{
	printf("Your answer is correct\n");
	score=score+1;
    }
	else
	printf("Your answer is wrong\n");
	printf("4.Who is first Precident of America?\n1)barack Oebama\n2)Donald Trump\n3)George Washington\n4)Abraham Lincone\n");
	s:scanf("%d",&a);
		if(a>4)
	{
	printf("Please enter valid option\n");
	goto s;
}
	else if(a==3)
	{
	printf("Your answer is correct\n");
	score=score+1;
    }
	else
	printf("Your answer is wrong\n");
	printf("5.currency of UAE\n1)doller\n2)Dirham\n3)Rubel\n4)Yen\n");
	t:scanf("%d",&a);
		if(a>4)
	{
	printf("Please enter valid option\n");
	goto t;
}
	else if(a==2)
	{
	printf("Your answer is correct\n");
	score=score+1;
    }
	else
	printf("Your answer is wrong\n");
	printf("Your score is %d/5",score);
	
	return 0;
}
