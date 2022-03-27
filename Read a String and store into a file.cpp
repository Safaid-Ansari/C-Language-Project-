#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[30];
	FILE *fp;
	fp=fopen("str.txt","w");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	printf("Enter a String : ");
	gets(str);
	fputs(str,fp);
	fclose(fp);
}

/*
#include<conio.h>
#include<stdio.h>
int main()
{
	char str[30];
	FILE *fp;
	fp=fopen("str.txt","r");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	fgets(str,30,fp);
	printf("String = %s",str);
	fclose(fp);
	*/
