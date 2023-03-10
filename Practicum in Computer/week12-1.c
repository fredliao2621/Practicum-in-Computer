#include<stdio.h>
#include<stdlib.h>
int gcd(int n1,int n2);/*為質數*/ 
void sort(int(*ptr)[2],int n);/*泡泡排列*/ 
int main()
{
	int num,j=1;
	int arr[100][2];
	printf("Please input a number:");
	scanf("%d",&num);
	arr[0][0]=0;
	arr[0][1]=1;
	for(int a=2;a<=num;a++)
	  for(int b=1;b<num;b++)
	  { int i;
	    if(b/a!=1&&b/a<1)
	  	i=gcd(a,b);
	  	else continue;
	  	if(i==1)
	  	{
	  	arr[j][0]=b;
	    arr[j][1]=a;
	    j++;
	  	}
	   }
	arr[j][0]=1;
	arr[j][1]=1;
	sort(arr,j+1);
	
	
	
}


int gcd(int n1,int n2)
{
	int a=n1,b=n2;

   while(a!=0&&b!=0)
    { if(a>b)
	{a=a%b;}
	 else
	{ b=b%a;}
	}
	 if(a==0)
	 return b;
     if(b==0)
	 return a;
}



void sort(int(*ptr)[2],int n)
{
	int i;
	for(int g=1;g<n;g++)
	for(i=1;i<n-g;i++)
	{
		if((float)**(ptr+i)/(*(*(ptr+i)+1))>(float)**(ptr+i+1)/(*(*(ptr+i+1)+1)))
		{
		int temp,temp2;
		temp=**(ptr+i);
		**(ptr+i)=**(ptr+i+1);
		**(ptr+i+1)=temp;
		temp2=(*(*(ptr+i)+1));
		(*(*(ptr+i)+1))=(*(*(ptr+i+1)+1));
		(*(*(ptr+i+1)+1))=temp2;	
		}
		else continue;
		
	}
	printf("0,");
	for(int k=1;k<n-1;k++)
	printf("%d/%d,",**(ptr+k),(*(*(ptr+k)+1)));
	printf("1\n");
	printf("total number:%d",n);
	
}
