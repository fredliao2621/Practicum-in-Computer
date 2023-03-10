#include <stdio.h>
#include <string.h>

main()
{
	int len,i,j,k,q,f,count;
	char word[100];
	FILE *in,*out;
	in=fopen("t7.txt","r");
	out=fopen("t8.txt","w");
	while(fscanf(in,"%s",word)!=EOF)
	{
		len=strlen(word);
		f=0;
		count=0;
		for(i=len;i>0;i--)
		{
			for(j=0;j+i<=len;j++)
			{
				for(q=j,k=j+i-1;q<k;q++,k--)
				{
					if(word[q]==word[k])
						continue;
					break;
				}
				if(q>=k)
				{
					f=1;
					count++;
				}
			}
			if(f)
			{
				fprintf(out,"%d,%d\n",i,count);
				break;
			}
		}
	}
	fclose(in);
	fclose(out);
	return 0;
}
