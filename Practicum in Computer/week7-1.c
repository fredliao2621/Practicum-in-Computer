#include<stdio.h>
#include<string.h> 
main()
{
	int i,a[17],n,sum;
	char input[17];
	
	while(1)
	{ 
	printf("請輸入卡號:");
	scanf("%s",input);
	for(i=0;i<16;i++)
	a[i]=(int)input[i]-48;
	n=strlen(input);
	
	if(n==15)
	 sum=a[0]+a[1]/5+a[1]*2%10+a[2]+a[3]/5+a[3]*2%10+a[4]+a[5]/5+a[5]*2%10+a[6]+a[7]/5+a[7]*2%10+a[8]+a[9]/5+a[9]*2%10+a[10]+a[11]/5+a[11]*2%10+a[12]+a[13]/5+a[13]*2%10;
	else if(n==16)
	 sum=a[0]/5+a[0]*2%10+a[1]+a[2]/5+a[2]*2%10+a[3]+a[4]/5+a[4]*2%10+a[5]+a[6]/5+a[6]*2%10+a[7]+a[8]/5+a[8]*2%10+a[9]+a[10]/5+a[10]*2%10+a[11]+a[12]/5+a[12]*2%10+a[13]+a[14]/5+a[14]*2%10;
	else
	 { 
	 printf("Error! 非15或16個卡號數字!");
	 break;
	 } 
	if((10-(sum%10))%10==a[n-1])
	 printf("卡號正確!!\n");
	else
	 {
	 	printf("卡號錯誤!!");
	 	break;
	 }
	} 
 } 
