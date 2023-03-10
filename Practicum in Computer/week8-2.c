#include<stdio.h>
main()
{
	int dec,i,j[50],a=0,bin,m=1,n;
	printf("Please input a decimal number:");
	scanf("%d",&dec);
	
	while(dec!=1)
	{ 
	i=dec/2;
	j[a]=dec%2;
	dec=i;
	a++;
	} 
	j[a]=1;
	
	for(i=a;i>=0;i--)
	{
		printf("%d",j[i]);
	}
	
	
	printf("\nPlease input a binary number:");
	scanf("%d",&bin);
	while(bin>0)
	{
	n+=(bin%10)*m;
	m=m*2;
	bin/=10;	
	}
	
	printf("%d",n);
	
	
	
	
}
