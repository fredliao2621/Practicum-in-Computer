#include<stdio.h>
#include<stdlib.h>
main()
{
	int input,week,f=0;
	int A[12]={31,28,31,30,31,30,31,31,30,31,30};
	printf("Please input the century:");
	scanf("%d",&input);
	for(int i=input*100-99;i<=input*100;i++)
	{
		week=(i+(int)((i-1)/4)-(int)((i-1)/100)+(int)((i-1)/400))%7;
		if(i%4==0&&i%100!=0||i%400==0)
		A[1]=29;
		else 
		A[1]=28;
		for(int j=0;j<=11;j++)
		{
			if(week==0)
			f++;
			week=(week+A[j]%7)%7;
		}
	}
	printf("%d times!!\n",f);
 } 
