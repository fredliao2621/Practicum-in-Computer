#include<stdio.h>
main()
{
	char input[11];
	int a,i,num[10],y;
	printf("請輸入身份證字號:");
	scanf("%s",&input);
	
	switch(input[0])
	{
		case 'A':
		 a=1;
		 break;
		case 'B':
		 a=10;
		 break;
		case 'C':
		 a=19;
		 break;
		case 'D':
		 a=28;
		 break;
		case 'E':
		 a=37;
		 break;
	    case 'F':
		 a=46;
		 break;
		case 'G':
		 a=55;
		 break;
		case 'H':
		 a=64;
		 break;
		case 'J':
		 a=73;
		 break;
		case 'K':
		 a=82;
		 break;	 
		case 'L':
		 a=2;
		 break;
		case 'M':
		 a=11;
		 break;
		case 'N':
		 a=20;
		 break;
		case 'P':
		 a=29;
		 break;
		case 'Q':
		 a=38;
		 break;
		case 'R':
		 a=47;
		 break;
		case 'S':
		 a=56;
		 break;
		case 'T':
		 a=65;
		 break;
		case 'U':
		 a=74;
		 break;
		case 'V':
		 a=83;
		 break;
		case 'X':
		 a=3;
		 break;
		case 'Y':
		 a=12;
		 break;
		case 'I':
		 a=39;
		 break;
		case 'O':
		 a=48;
		 break;
		case 'W':
		 a=21;
		 break;
		case 'Z':
		 a=30;
		 break;
	}
	
	for(i=1;i<10;i++)
	 {
	 	num[i-1]=(int)input[i]-48;
	 }
	 
	 
	y=a+num[0]*8+num[1]*7+num[2]*6+num[3]*5+num[4]*4+num[5]*3+num[6]*2+num[7]*1;
	if(num[8]==10-(y%10)||(y%10==0)&&num[8]==0)
	 printf("身分字號正確!!");
	else
	 printf("身分字號錯誤!!");	
}
