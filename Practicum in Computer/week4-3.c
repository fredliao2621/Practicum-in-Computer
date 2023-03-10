#include<stdio.h>
main()
{
	int a,b,i;
	printf("Please input two integers:");
	scanf("%d %d",&a,&b);
	
	for(i=0;a!=0&&b!=0;i++)
	{
	if(a>b)
	
	 a=a%b;
	
	else
	
	 b=b%a;
	 
    }
	
	if(a==0)
	 printf("GCD is %d",b);
	if(b==0)
	printf("GCD is %d",a);
	
}
