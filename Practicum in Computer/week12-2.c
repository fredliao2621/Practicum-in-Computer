#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int N=1,Sum=0,com,y,b;
	srand(unsigned(time(NULL)));
	while(N<10||N>40)
	N=rand();
	b=N;
	
	
	switch((N-1)%4)
	{
		case 1:com=1;
		break;
		case 2:com=2;
		break;
		case 3:com=3;
		break;
		case 0:com=rand();
		break;
	}
	
	
	printf("N=%d\n",N);
	while(Sum!=N)
	{ 
	
	switch((b-Sum)%4)
	{
		case 0:com=3;
		break;
		case 1:com=(rand()%3)+1;
		break;
		case 2:com=1;
		break;
		case 3:com=2;
		break;
	}
	
	
	printf("Sum=%d,computer add %d\n",Sum,com);
	Sum=Sum+com;
	printf("Sum=%d,you add :",Sum);
	scanf("%d",&y);
	Sum=Sum+y;
	
	
	if(Sum==N)
	 {
	 	printf("Sum=%d, You lose!!",Sum);
	 	break;
	 }
	 
	if(Sum>N)
	 {
	 	printf("Error!!");
	 	break;
	 }
	 
	 }
}	 
