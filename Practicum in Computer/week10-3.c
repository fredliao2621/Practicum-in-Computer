#include<stdio.h>

main()
{
	int y,m,d,Y,M,D,i,count=0;
	printf("請輸入西元開始日期(yyyy/mm/dd)為...");
	scanf("%d/%d/%d",&y,&m,&d);
	printf("請輸入西元結束日期(yyyy/mm/dd)為...");
	scanf("%d/%d/%d",&Y,&M,&D);
	
	for(i=y;i<=Y;i++)
	{ 
	 if(((i%4==0&&i%100!=0)||i%400==0)) 
	 count++;
	} 
	
	if(((i%4==0&&i%100!=0)||i%400==0)&&m>=3)
	 count--;
	 
    
	if(((i%4==0&&i%100!=0)||i%400==0)&&M<3)
	 count--;
	
	
	printf("此期間的2月29日共有%d次",count);
	
}
