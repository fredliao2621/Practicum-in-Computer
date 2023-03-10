#include<stdio.h>
main()
{
	FILE *datain;
	FILE *dataout;
	char ch;
	int a=0,e=0,i=0,o=0,u=0;
    datain=fopen("t1.txt","r");
    dataout=fopen("t2.txt","w");
    if(datain!=NULL&&dataout!=NULL)
    {
    	while((ch=fgetc(datain))!=EOF)
    	{
    		if(ch=='A'||ch=='a')
    		 a++;
    		if(ch=='E'||ch=='e')
    		 e++; 
    		if(ch=='I'||ch=='i')
    		 i++;
    		if(ch=='O'||ch=='o')
    		 o++;
    		if(ch=='U'||ch=='u')
    		 u++;
		}
		fprintf(dataout,"A    E    I    O    U\n");
		fprintf(dataout,"%d  %d  %d  %d  %d",a,e,i,o,u);
	}
	printf("%d  %d  %d  %d  %d",a,e,i,o,u);
	fclose(datain);
	fclose(dataout);
}
