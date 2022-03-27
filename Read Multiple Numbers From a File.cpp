#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   FILE *fp;
   fp=fopen("Numbers.txt","r");
   if(fp==NULL)
   
   {
   	printf("file note found ");
   	exit(0);
	}
	while(!feof(fp))	
	{
		fscanf(fp,"%f",&n);
		printf("%f\n",n);
	}
	fclose(fp);
}
