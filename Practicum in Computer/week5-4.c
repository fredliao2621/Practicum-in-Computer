#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n,a,b,c,d,A=0,B=0,count=0;
	srand(time(NULL));
	while(1)
	{
		a=rand()%10;
		b=rand()%10;
		c=rand()%10;
		d=rand()%10;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
		break;
	}
	printf("%d%d%d%d",a,b,c,d);
	
	while(1)
	{
	  
	  printf("\nPlease input four digits(0~9):");
	  scanf("%d",&n);	
	  
	  if(n/1000==a)
	  A++;
	  if(n/100%10==b)
	  A++;
	  if(n/10%10==c)
	  A++;
	  if(n%10==d)
	  A++;
	  
	  if(n/1000==b||n/1000==c||n/1000==d)
	  B++;
	  if(n/100%10==a||n/100%10==c||n/100%10==d)
	  B++;
	  if(n/10%10==a||n/10%10==b||n/10%10==d)
	  B++;
	  if(n%10==a||n%10==b||n%10==c)
	  B++; 
	  count++;
	  
	    
	 if(A==4)
	  {
	  	printf("You got it!!%dtimes!!",count);
	  	break;
	  }
	  
	 else
	 {
	  printf("The result is %dA %dB",A,B);
	  A=0;
	  B=0;
	 } 
	    
	}
	
}
