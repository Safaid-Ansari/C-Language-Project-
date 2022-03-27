#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter a Number lines of row : ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if(j==i || j==row+1-i)
			
				printf("*");
				else
				printf(" ");
				
			
		
		}
		printf("\n");
	}
}
