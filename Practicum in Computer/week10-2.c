#include<stdio.h>
#include<string.h>

main()
{
	char a[12],num[123];
	int n1,n2=1,sum=1,sum2=1,i=0;
	printf("Please input a string:");
	scanf("%s",a);
	n1=strlen(a);
	
	for(int b=0;b<123;b++)
	 num[b]=0;
	
	while(a[i])
	{
		num[a[i]]++;
		i++;
	}
	
	for(n2;n2<=n1;n2++)
	{
		sum=sum*n2;
	}
	
	for(i=0;i<123;i++)
	{
		if(num[i]!=1)
		{
			for(n2=1;n2<=num[i];n2++)
			sum2=sum2*n2;
		}
	}
	sum=sum/sum2;
	printf("The number of permutations is %d",sum);
}
