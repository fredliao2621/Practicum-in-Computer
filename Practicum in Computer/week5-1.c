#include<stdio.h>
main()
{
	int a,b,c,d,GCD;
	printf("�п�J����Ϊ���(����)��...");
	scanf("%d",&a);
	printf("�п�J����Ϊ��e(����)��...");
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
	printf("�ֻ̤ݭn%d�ӬۦP�������,�Ʀ������%d�����������",d/GCD*c/GCD,c*d/GCD); 
}
