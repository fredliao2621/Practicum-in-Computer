#include<stdio.h>
int main()
{
	int input,n,a,b,c,d,peo,price,min=999999999,car1,car2,car3,car4;
	printf("請輸入乘客總人數:");
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
	printf("最少需要 %d 元\n",min);
	printf("四門房車 %d 台\n",car1);
	printf("商務休旅車 %d 台\n",car2);
	printf("小型巴士 %d 台\n",car3);
	printf("中型巴士 %d 台\n",car4);
}
