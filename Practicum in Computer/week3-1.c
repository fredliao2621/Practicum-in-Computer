#include<stdio.h>
main()
{
	int n1,n2,i,sum;
	char choice='Y';
		
	while(choice=='Y'||choice=='y')
	{
	 printf("Number 1:");
	 scanf("%d",&n1);
	 printf("Number 2:");
	 scanf("%d",&n2);
	 for(i=n1,sum=0;i<=n2;i++)
	 sum=sum+i;
     if(n1<=n2)
      {
      printf("Sum=%d\n",sum);
      printf("Again(Y/N)??");
      scanf("%*c%c",&choice);
      }
     else
      {
       printf("Error!! Number 1>Number 2!!\n");
	  }
	}	 
} 
