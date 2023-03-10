#include<stdio.h>
#include<string.h>
main()
{
	int n1,n2,i,count=0,k,j;
	char string1[100],string2[100];
	printf("Please input the string 1:");
	scanf("%s",string1);
	printf("Please input the string 2:");
	scanf("%s",string2);
	
	n1=strlen(string1);
	n2=strlen(string2);
	
	for(i=0;i<n1;i++)
	{
		if(string2[0]==string1[i])
		{
			k=i;
			for(j=0;j<n2;j++,k++)
			{
				if(string2[j]!=string1[k])
				 break;
			}
			if(j>=n2)
			 count++;
		}
	}
	if(count==0)
	 printf("String 2 is not a substring of string 1");
	else
	{
		printf("String 2 is a substring of string 1\n");
		printf("Repeat %d times",count);
	}
}
