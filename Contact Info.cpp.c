#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char pass[30],orignal[30],ch;
	int i,x,y;
	FILE *fp;

	system("cls");
	i=0;
	while(1)
	{
		ch=getch();
		if(ch==13)
		{
			pass[i]='\0';
			break;
			
		}
		pass[i++]=ch;
		printf("*");
	}
	fp=fopen("password.dat","r");
	fgets(orignal,30,fp);
	fclose(fp);
	if(!strcmp(orignal,pass)==0)
    {
    	
    	printf("\n\nIncorrect Password Press Any Key : ");
    	getch();    	
	}
	
}
