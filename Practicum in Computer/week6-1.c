#include<stdio.h>
main()
{
	int s,a,b,c,d,ans;
	printf("Please input the size of matrix:");
	scanf("%d",&s);
	printf("Please input the matrix1:\n");
	a=s;
	b=s;
	int input[a][b];
	for(a=0;a<s;a++)
	 for(b=0;b<s;b++)
	  scanf("%d",&input[a][b]);
	  
	printf("Please input the matrix2:\n");
	c=s;
	d=s;
	int input2[c][d];
	for(c=0;c<s;c++)
	 for(d=0;d<s;d++)
	  scanf("%d",&input2[c][d]);
	  
	printf("matrix1*matrix2=\n");
	for(a=0;a<s;a++)
	{
	 for(d=0;d<s;d++)
	 {
	 	ans=0;
	 	for(c=0,b=0;c<s;c++,b++)
	 	 ans=ans+input[a][b]*input2[c][d];
	 	printf("%d ",ans);
	 }
	 printf("\n");
    }	
}
