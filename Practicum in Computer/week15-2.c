#include <stdio.h>
#include <string.h>

main()
{
	int i,j,d,aa,bb;
	char n1[42],n2[42],temp[42],sum[42];
	for(i=0;i<20;i++)
	{
		n1[i]='0';
		n2[i]='0';
		sum[i]='0';
	}
	n1[i]='.';
	n2[i++]='.';
	for(;i<41;i++)
	{
		n1[i]='0';
		n2[i]='0';
		sum[i]='0';
	}
	n1[41]='\0';
	n2[41]='\0';
	sum[20]='.';
	sum[41]='\0';
	printf("Please input number #1: ");
	scanf("%s",temp);
	for(i=0;temp[i]!='\0';i++)
		if(temp[i]=='.')
			break;
	for(d=i,j=19;i>0;j--,i--)
		n1[j]=temp[i-1];
	for(i=21,d++;d<strlen(temp);i++,d++)
		n1[i]=temp[d];
	printf("Please input number #2: ");
	scanf("%s",temp);
	for(i=0;temp[i]!='\0';i++)
		if(temp[i]=='.')
			break;
	for(d=i,j=19;i>0;j--,i--)
	
		n2[j]=temp[i-1];
	for(i=21,d++;d<strlen(temp);i++,d++)
		n2[i]=temp[d];
	for(d=0,i=40;i>=21;i--)
	{
		aa=(int)n1[i]+(int)n2[i]-96;
		if(aa+d>9)
		{
			bb=(aa+d)%10;
			d=1;
		}
		else
		{
			bb=aa+d;
			d=0;
		}
		sum[i]=(char)(bb+48);
	}
	for(i=19;i>=0;i--)
	{
		aa=(int)n1[i]+(int)n2[i]-96;
		if(aa+d>9)
		{
			bb=(aa+d)%10;
			d=1;
		}
		else
		{
			bb=aa+d;
			d=0;
		}
		sum[i]=(char)(bb+48);
	}
	printf("   The sum is ");
	for(i=0;i<21;i++)
	{
		if(sum[i]=='0')
			continue;
		break;
	}
	if(i==20)
		printf("0");
	else
	{
		for(i=0;i<21;i++)
		{
			if(sum[i]=='0')
				continue;
			break;
		}
		for(;i<20;i++)
			printf("%c",sum[i]);
	}
	for(i=21;i<41;i++)
	{
		if(sum[i]=='0')
			continue;
		break;
	}
	if(i==41)
		return 0;
	else
	{
		printf(".");
		for(i=40;i>=21;i--)
		{
			if(sum[i]=='0')
				continue;
			break;
		}
		for(j=21;j<=i;j++)
			printf("%c",sum[j]);
		return 0;
	}
}
