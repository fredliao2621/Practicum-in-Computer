#include <stdio.h>
#include <string.h>
main()
{   char input[50];
    int array[3][3],i,j,n;
    int temp1[3],temp2[3];
	printf("Please input a 3x3 key martrix (9 integers):");
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	  scanf("%d",&array[i][j]);
	  
	printf("Please input a string:");
	scanf("%s",input);
	n=strlen(input);
	for(i=0;i<n;i++)
		input[i]=(int)input[i]-'A';	
	for(i=0;i<n;i+=3)
	{
		temp1[0]=input[i];
		temp1[1]=input[i+1];
		temp1[2]=input[i+2];
		temp2[0]=(temp1[0]*array[0][0]+temp1[1]*array[0][1]+temp1[2]*array[0][2])%26;
		temp2[1]=(temp1[0]*array[1][0]+temp1[1]*array[1][1]+temp1[2]*array[1][2])%26;
		temp2[2]=(temp1[0]*array[2][0]+temp1[1]*array[2][1]+temp1[2]*array[2][2])%26;
		input[i]=temp2[0];
		input[i+1]=temp2[1];
		input[i+2]=temp2[2];
	}
	printf("the cipher is ");
	 for(i=0;i<n;i++)
	 {
	 	input[i]='A'+input[i];
	 	printf("%c",input[i]);
	 }
 } 
