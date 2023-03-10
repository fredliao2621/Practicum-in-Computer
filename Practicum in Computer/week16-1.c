#include<stdio.h>
main()
{
   int i,j,A,B,t,string[10]={0};
   printf("請輸入A:B.....");
   scanf("%d:%d",&A,&B);
 
   for(t=A;t<=B;t++)
   {
   	i=t;
   while(i>=10)
   {
   	string[i%10]++;
   	i=i/10;
   }
   string[i%10]++;
   }
    
    printf("0~9數字出現次數為....." );
   	for(j=0;j<10;j++)
   	printf("%d,",string[j]);
} 
