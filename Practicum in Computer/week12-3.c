#include<stdio.h>
int main()
{
	int a,b,i,j,sum,max,k;
	printf("Please input the LowerBound and the UpperBound:");
	scanf("%d %d",&a,&b);
    max=0; 
	for(i=a;i<=b;i++)
	{
		j=i;
		sum=i;
		while(j!=1)
		{
			
			if(j%2==0)
			{
			j=j/2;
			sum=sum+j;
		    }
			else
			{
			j=3*j+1;
			sum=sum+j;
		    }
		}
		if(sum>max)
		{
		max=sum;
		k=i;
		}
	}
	printf("N=%d   ",k);
	printf("Sum=%d",max);
}
