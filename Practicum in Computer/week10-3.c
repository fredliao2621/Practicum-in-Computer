#include<stdio.h>

main()
{
	int y,m,d,Y,M,D,i,count=0;
	printf("�п�J�褸�}�l���(yyyy/mm/dd)��...");
	scanf("%d/%d/%d",&y,&m,&d);
	printf("�п�J�褸�������(yyyy/mm/dd)��...");
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
	
	
	printf("��������2��29��@��%d��",count);
	
}
