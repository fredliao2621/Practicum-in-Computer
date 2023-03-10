#include <stdio.h>
#include <string.h>

main()
{
	int len,i,j,k,q,count,f=0,w;
	char word[100];
	
	printf("請輸入一個字串:");
	scanf("%s",word);
	printf("最常迴文為:");
	
		len=strlen(word);
		f=0;
		count=0;
		for(i=len;i>0;i--)
		{
			for(j=0;j+i<=len;j++)
			{
				for(q=j,k=j+i-1;q<=k;q++,k--)
				{
					if(word[q]==word[k])
						continue;
					break;
				}
				if(q>k)
				{
					f=1;
					count++;
					
					for(w=j;w<=j+i-1;w++)
					printf("%c",word[w]);
				printf(",");
				}
			}
			if(f)
			 break;
			
		}
	
	
	
	return 0;
}
