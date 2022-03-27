#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1,n2;
	FILE *fp;
	fp=fopen("run.txt","w");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	printf("Enter The Number  : ");
	scanf("%d",&n1);
	putw(n1,fp);
	fclose(fp);
	fp=fopen("run.txt","r");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	n2=getw(fp);
	printf("Number = %d ",n2);
	fclose(fp);
	
}
