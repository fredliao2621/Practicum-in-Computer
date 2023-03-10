#include<stdio.h>
main()
{
	int num,i,str[30],j=0,k;
	printf("Please input a number:");
	scanf("%d",&num);
	k=num;
	
	for(i=2;i<1000000000;i++)
	{
		while(num%i==0)
		{ 
		num=num/i;
		str[j]=i;
		j++;
		} 
		if(num==1)
		break;
	}
	
	printf("%d=",k);
	for(i=0;i<10;i++)
	printf("%d*",str[i]);
}
