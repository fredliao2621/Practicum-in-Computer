#include<stdio.h>
main()
{
	int n,i,j,count=0;
	printf("Please input a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		for(j=2;j*j<i;j++)
		{ 
		  if(i!=j&&i%j==0)
		  break;
		}
		
		if(j*j>i)
		{ 
		printf("%d, ",i); 
		count++;

		} 
	}
	printf("\nTotal is %d",count);
}
