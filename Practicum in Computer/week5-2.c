#include<stdio.h>
main()
{
	int n,i,j,pre1=1,pre2=2,count=0;
	printf("Please input a number:");
	scanf("%d",&n);
	
	
	for(i=2;i<=n;i++)
	{
	  for(j=2;j*j<=i;j++)
	  {
	 	if(i!=j&&i%j==0)
	 	break;
	  }
	  
	  if(j*j>i)
	  { 
	  pre1=pre2;
	  pre2=i;
	  
	  if((pre2-2)==pre1)
	   {
	  	printf("(%d,%d) ",pre1,pre2);
	  	count++;
	   }
	   
	  } 
	   
    }
	
	printf("\nTotal is %d",count);
}
