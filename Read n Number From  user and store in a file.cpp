#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	float p;
	FILE  *fp;
	fp=fopen("Numbers.txt","w");
	if(fp==NULL)
	{
		printf("\nfile not found");
		exit(0);
	}
	printf("Enter How Many Number you want to store in a File :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter %d Number ",i);
		scanf("%f",&p);
		fprintf(fp,"%f\n",p);
	}
	fclose(fp);
	getch();
}
