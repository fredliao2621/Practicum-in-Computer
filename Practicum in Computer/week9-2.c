#include<stdio.h>
void towers(int n,char from,char aux,char to);
int pow(int a,int b);
main()
{
	int n;
	printf("�п�JA�W�������Ӽ�:");
	scanf("%d",&n);
	towers(n,'A','B','C');
	printf("�@�ݭn%d�ӨB�J",pow(2,n));
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

