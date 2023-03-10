#include<stdio.h>
main()
{
	int n,i,j,k,m;
	printf("Please input a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		 printf(" ");
		for(k=1;k<=i;k++)
		 printf("%d",k%10);
		for(m=k-2;m>0;m--)
		 printf("%d",m%10);
		 printf("\n");
	}
 } 
