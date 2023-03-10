#include<stdio.h>
main()
{
	int a,b,c,d,GCD;
	printf("請輸入長方形的長(公分)為...");
	scanf("%d",&a);
	printf("請輸入長方形的寬(公分)為...");
	scanf("%d",&b);
	c=a;
	d=b;
	while(a!=0&&b!=0)
	{
		if(a>b)
		 a=a%b;
		else
		  b=b%a;
	}
	
	GCD=a+b;
	printf("最少需要%d個相同的長方形,排成邊長為%d公分的正方形",d/GCD*c/GCD,c*d/GCD); 
}
