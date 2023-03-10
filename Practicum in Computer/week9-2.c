#include<stdio.h>
void towers(int n,char from,char aux,char to);
int pow(int a,int b);
main()
{
	int n;
	printf("請輸入A柱中的環個數:");
	scanf("%d",&n);
	towers(n,'A','B','C');
	printf("共需要%d個步驟",pow(2,n));
}

void towers(int n,char from,char aux,char to)
{
	if(n==1)
	 printf("Ring%d:%c==>%c\n",n,from,to);
	else
	 {
	 	towers(n-1,from,to,aux);
	 	printf("Ring%d:%c==>%c\n",n,from,to);
	 	towers(n-1,aux,from,to);
	 }
}	 
int pow(int a,int b)
{
	int j;
	for(int i=a,j=1;j<b;j++)
	a=a*i;
	return a-1;
}

