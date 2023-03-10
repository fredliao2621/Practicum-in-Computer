#include<stdio.h>
#include<string.h>
void check_ISBN10(char arr[]);
void check_ISBN13(char arr[]);
static int sum=0;
int main()
{
	char input[14];
	printf("Please input an ISBN code:");
	scanf("%s",input);
	if(strlen(input)==10)
	 check_ISBN10(input);
	if(strlen(input)==13)
	 check_ISBN13(input);
	return 0;
}

void check_ISBN10(char arr[])
{
	if(arr[9]=='X')
	 arr[9]=10+'0';
	for(int i=0;i<10;i++)
	 arr[i]=(int)arr[i]-'0';

	 sum=arr[0]*10+arr[1]*9+arr[2]*8+arr[3]*7+arr[4]*6+arr[5]*5+arr[6]*4+arr[7]*3+arr[8]*2+arr[9]*1;
	if(sum%11==0)
	 printf("The ISBN code is correct!!");
	else
	 printf("The ISBN code is wrong!!");
}

void check_ISBN13(char arr[])
{
	for(int j=0;j<10;j++)
	 arr[j]=(int)arr[j]-'0';
	 sum=arr[0]*1+arr[1]*3+arr[2]*1+arr[3]*3+arr[4]*1+arr[5]*3+arr[6]*1+arr[7]*3+arr[8]*1+arr[9]*3+arr[10]*1+arr[11]*3;
	if((10-arr[12]%10)==sum%10)
	 printf("The ISBN code is correct!!");
	else
	 printf("The ISBN code is wrong!!");
}


