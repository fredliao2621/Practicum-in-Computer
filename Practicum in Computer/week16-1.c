#include<stdio.h>
main()
{
   int i,j,A,B,t,string[10]={0};
   printf("�п�JA:B.....");
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
    
    printf("0~9�Ʀr�X�{���Ƭ�....." );
   	for(j=0;j<10;j++)
   	printf("%d,",string[j]);
} 
