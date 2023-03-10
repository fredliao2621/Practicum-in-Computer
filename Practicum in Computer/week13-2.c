#include<stdio.h>
#include<string.h>
main()
{
	FILE *datain;
	FILE *dataout;
	int n,count[100]={0},i=0,j,k=0;
	char voc1[20],voc2[100][20];
	datain=fopen("t3.txt","r");
    dataout=fopen("t4.txt","w");
    
    for(i=0;fscanf(datain,"%s",voc1)==1;i++)
    {
     	n=strlen(voc1);
     	if(voc1[n-1]==','||voc1[n-1]=='.')
     	 voc1[n-1]='\0';
	 
	 for(j=0;j<k;j++)
	 { 
	  if(strcmp(voc2[j],voc1)==0)
	  { 
	   count[j]++;
	   break;
	  } 
	 }
	 
	  if(j==k)
	  {
	   	 strcpy(voc2[k],voc1);
	     count[k]++;
	     k++;
	  }
	}
	
	for(i=0;i<k;i++)
	 fprintf(dataout,"%s:%d\n",voc2[i],count[i]);
}
