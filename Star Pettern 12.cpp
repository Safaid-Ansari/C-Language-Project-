#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter a Number lines of rows : ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=2*row-1;j++)
		{
			if(j>=i && j<=2*row-i)
			printf("*");
			else
			printf(" ");
			
		}
		printf("\n");
	}
	getch();
}
