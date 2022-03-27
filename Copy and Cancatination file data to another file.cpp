#include<conio.h>
#include<stdio.h>
int main()
{
	int  ch;
	FILE *f1,*f2;
	f1=fopen("string.txt","r");
	f2=fopen("string1.txt","w");
	if(f1==NULL||f2==NULL)
	{
		printf("file cannot found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgets(f1);
		fputs(ch,f2);
		
	}
	fclose(f1);
	fclose(f2);
}



/*
#include<conio.h>
#include<stdio.h>
int main()
{
	int  ch;
	FILE *f1,*f2;
	f1=fopen("string.txt","r");
	f2=fopen("string1.txt","a");
	if(f1==NULL||f2==NULL)
	{
		printf("file cannot found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgets(f1);
		fputs(ch,f2);
		
	}
	fclose(f1);
	fclose(f2);
}*/
