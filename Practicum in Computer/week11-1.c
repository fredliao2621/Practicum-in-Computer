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
	printf("�п�J��ƪ��Ӽ�:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("�п�J��%d�Ӽ�:",i+1);
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
	
	printf("�Ƨǵ��G:");
	for(j=0;j<n;j++)
	printf("%d ",num[j]);
	
}
