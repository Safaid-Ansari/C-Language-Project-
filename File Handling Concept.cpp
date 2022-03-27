o#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	int a,b;
	FILE *fp;
	char  str[20];
	fp=fopen("Password.dat","r");
	if(fp==NULL)
	{
		printf("\nfile not found ");
		exit(0);
	}
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	fscanf(fp,"%d",&b);
	
	if(a==b)
	printf("Data are Equal : ");
	else
	printf("Data are not Equal ");
	fclose(fp);
	getch();
}
