#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("Please input a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n-i;j++)
	 printf(" ");
	 for(k=1;k<=2*i-1;k++)
	 printf("%d",i%10);
	 printf("\n");
    }
}
