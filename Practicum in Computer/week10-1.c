#include<stdio.h>
#include<stdlib.h>
static int count=0;
void DoubleHanoi(int n,char from,char aux, char to);

void towers(int n,char from,char aux,char to)
{
	if(n==1)
	{
	 printf("Ring%d:%c==>%c\n",n,from,to);
	 count++;
	 return;
    }
 
	towers(n-1,from,to,aux);
	printf("Ring%d:%c==>%c\n",n,from,to);
	towers(n-1,aux,from,to);
	count++;
}	 

int main(void)
{
	int n;
	printf("請輸入A柱中的環個數:");
	scanf("%d",&n);
	DoubleHanoi(n,'A','B','C');
	printf("\n共需%d個步驟\n",count);
	return 0;
 } 
 
 void DoubleHanoi(int n,char from,char aux, char to)
 {
 	if(n==2)
 	{
 		printf("ring1:%c=>%c\n",from,aux);
 		printf("ring2:%c=>%c\n",from,to);
 		count=count+2;
 		return;
	 }
	 if(n==4)
	 {
	 	towers(3,from,to,aux);
	 	printf("ring4:%c=>%c\n",from,to);
	 	printf("ring1:%c=>%c\n",aux,from);
	 	printf("ring2:%c=>%c\n",aux,to);
	 	printf("ring1:%c=>%c\n",from,aux);
	 	count=count+4;
	 	return;
	 }
	 
	 towers(n-1,from,to,aux);
	 printf("ring%d:%c=>%c\n",n,from,to);
	 towers(n-3,aux,to,from);
	 printf("ring%d:%c=>%c\n",n-2,aux,to);
	 towers(n-4,from,aux,to);
	 printf("ring%d:%c=>%c\n",n-3,from,aux);
	 if(n>6)towers(n-6,to,aux,from);
	 printf("ring%d:%c=>%c\n",n-5,to,aux);
	 if(n>6)DoubleHanoi(n-6,from,aux,to);
	 count=count+4;
	 
 }
