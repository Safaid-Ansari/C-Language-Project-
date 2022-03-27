#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char  ch;
	int sp=0,count=0;
	FILE *fp;
	fp=fopen("string.txt","r");
	if(fp==NULL)
	{
		printf("File not found ");
		exit(0);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		count++;
		if(ch==' ')
		sp++;
	}
	printf("character =%d  ",count);
	printf("Word = %d ",sp+1);
	fclose(fp);
}
