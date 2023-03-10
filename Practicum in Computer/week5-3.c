#include<stdio.h>
main()
{
	int n,i,count,b;
	printf("Please input a number:");
	scanf("%d",&n);
	
	for(i=1;count<=n;i++)
	{
		b=i;
		while(b%2==0)
		 b=b/2;
		while(b%3==0)
		 b=b/3;
		while(b%5==0)
		 b=b/5;
		
		if(b==1)
		{
		count++;
		printf("%d,",i);
		}
	}
}
