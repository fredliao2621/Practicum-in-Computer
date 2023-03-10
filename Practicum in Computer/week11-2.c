#include <stdio.h>
#include <stdlib.h>

void hanoi(int,char,char,char);
void triple_color_hanoi(int,char,char,char);

int t=0,x;

int main()
{
	int a;
	printf("請輸入A柱中的環個數:");
	scanf("%d",&a);	
	
	if(a>0&&a%3==0)
		triple_color_hanoi(a,'A','B','C');
	else
	{
		printf("error!!!\n");
		system("pause");
		return 0;
	}
	
	printf("共需%d個步驟\n",t);
	
	system("pause");
	return 0;
} 



void hanoi(int n,char from,char aux,char to)
{
	if(n==1)
	{
		printf("ring %d: %c => %c\n",n,from,to);
		t++;
	}

	else
	{
		hanoi(n-1,from,to,aux);
		
		printf("ring %d: %c => %c\n",n,from,to);
		t++;
		
		if(x!=n)
			hanoi(n-1,aux,from,to);
	}
}

void triple_color_hanoi(int n,char from,char aux,char to)
{
	if (n==3)
	{
		x=n;
		hanoi(n,from,aux,to);
		x=n-2;
		hanoi(n-2,aux,to,from);
	}
	
	else if (n==6)
	{
		x=n;
		hanoi(n,from,aux,to);
		x=n-2;
		hanoi(n-2,aux,to,from);
		x=n-4;
		hanoi(n-4,to,from,aux);
	}
	
	else
	{
		x=n;
		hanoi(n,from,aux,to);
		x=n-2;
		hanoi(n-2,aux,to,from);
		x=n-4;
		hanoi(n-4,to,from,aux);
		
		triple_color_hanoi(n-6,from,aux,to);
	}
}
