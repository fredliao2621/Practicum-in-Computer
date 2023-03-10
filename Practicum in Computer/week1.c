#include<stdio.h>
main()
{
	char name[10],department;
	int a,b;
	float c;
	printf("Please input your name..... ");
	scanf("%s%*c",name);
	printf("Please slect your department.... (a:資工 b:電機 c:電子) ");
	scanf("%c%*c",&department);
	printf("Please input tour score on test 1...");
	scanf("%d",&a);
	printf("Please input tour score on test 2...");
	scanf("%d",&b);
	c=(a+b)/2.0;
	printf("|-------------------------------------------|\n");
	printf("|   Name   |Department|Test 1|Test 2|Average|\n");
	printf("|-------------------------------------------|\n");
	printf("|%-10s|%-10c|%6d|%6d|%7.2f|\n",name,department,a,b,c);
	printf("|-------------------------------------------|\n");
 } 
