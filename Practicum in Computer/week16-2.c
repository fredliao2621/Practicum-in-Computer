#include<stdio.h>
int main()
{
	int input,n,a,b,c,d,peo,price,min=999999999,car1,car2,car3,car4;
	printf("�п�J�����`�H��:");
	scanf("%d",&input);
	n=input/4+1;
	for(a=0;a<=n;a++)
	{
		for(b=0;b<=n;b++)
		 {
		 	for(c=0;c<=n;c++)
		 	 {
		 	 	for(d=0;d<=n;d++)
		 	 	 {
		 	 	 	peo=a*4+b*7+c*13+d*16;
					if(peo>=input)
					 {
					 	price=a*2500+b*3800+c*6400+d*7500;
					 	if(price<min)
					 	 {
					 	 	min=price;
					 	 	car1=a;
					 	 	car2=b;
					 	 	car3=c;
					 	 	car4=d;
						  }
					  } 
				   }
			  }
		 }
	}
	printf("�ֻ̤ݭn %d ��\n",min);
	printf("�|���Ш� %d �x\n",car1);
	printf("�Ӱȥ�Ȩ� %d �x\n",car2);
	printf("�p���ڤh %d �x\n",car3);
	printf("�����ڤh %d �x\n",car4);
}
