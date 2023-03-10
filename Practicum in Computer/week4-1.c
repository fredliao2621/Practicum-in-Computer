#include<stdio.h>
main()
{
	int n,a=0,b=1,c,i;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=0;i<n-3;i++)
     {
     	c=a+b;
     	printf("%d ",c);
		a=b;
		b=c;
	 }
}
