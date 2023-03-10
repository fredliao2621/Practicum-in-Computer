#include<stdio.h>


void sort(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


main()
{
	int n,i,num[100],j,m;
	printf("請輸入整數的個數:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("請輸入第%d個數:",i+1);
		scanf("%d",&num[i]);
	}
	
	m=n;
	
	while(m-1)
	{
		for(i=0;i<n-1;i++)
		{
		 if(num[i]>num[i+1])
		 sort(&num[i],&num[i+1]);
	    }
	    m--;
	}
	
	printf("排序結果:");
	for(j=0;j<n;j++)
	printf("%d ",num[j]);
	
}
