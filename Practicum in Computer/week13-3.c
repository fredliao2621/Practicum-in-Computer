#include<stdio.h>
main()
{
	int n,i,j,a[200],k,m=0,total=0;
	printf("Please input a number:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{ 
	 for(j=2;j*j<=i;j++)
	 {
	 	if(i%j==0)
	 	{ 
	 	a[m]=i;
	 	m++;
	 	break;
	 	} 
	 }
	if(j*j>i)
	continue;
	} 
	
	for(k=0;k<=m;k++)
	 { 
	if(a[k]+1==a[k+1]&&a[k]+2==a[k+2]&&a[k]+3==a[k+3])
	{ 
	printf("(%d,%d,%d,%d)\n",a[k],a[k]+1,a[k]+2,a[k]+3);
	total++;
	} 
	 } 
	printf("Total is %d",total);
}
