#include<stdio.h>
#include<string.h>

main()
{
	FILE *datain;
	FILE *dataout;
	int n,count[100]={0},i=0,j,k=0,a;
	char voc1[20],voc2[100][20],temp[20];
	datain=fopen("t5.txt","r");
    dataout=fopen("t6.txt","w");
    
    for(i=0;fscanf(datain,"%s",voc1)==1;i++)
    {
     	n=strlen(voc1);
     	
     	for(i=0;i<n;i++)  /*大寫改小寫*/ 
	{
		if(voc1[i]>='A'&&voc1[i]<='Z')
		voc1[i]=voc1[i]+32;
	}

     	
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
	
	
	
	
	
	
	for(i=0;i<k;i++)  /*排序*/ 
	 for(j=i;j<k;j++)
	{
		if(strcmp(voc2[i],voc2[j])==1)
		{ 
		 strcpy(temp,voc2[i]);
		 strcpy(voc2[i],voc2[j]);
		 strcpy(voc2[j],temp);
		 a=count[i];
		 count[i]=count[j];
		 count[j]=a;
		} 
		else
		 continue;
	}

	
	for(i=0;i<k;i++)
	 fprintf(dataout,"%s:%d\n",voc2[i],count[i]);
	 
	fclose(datain);
	fclose(dataout);
	  
} 
