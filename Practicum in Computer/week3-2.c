#include<stdio.h>
main()
{
  int n,i,a,b,ave,max,min,sum;
  printf("Please input the number of integers:");
  scanf("%d",&n);
  printf("Integer#1.....");
  scanf("%d",&b);
  max=b;
  min=b;
  sum=b;
  
  for(i=2;i<=n;i++)
  {
    printf("Integer#%d.....",i);
    scanf("%d",&b);
    sum=sum+b;
    if(b>max)
    max=b;
    if(b<min)
    min=b;
  }
  
  printf("The average is %.2f\n",(float)sum/n);
  printf("The maximun is %d\n",max);
  printf("The minimun is %d\n",min);
}
