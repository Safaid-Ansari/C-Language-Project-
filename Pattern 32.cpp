#include<conio.h>
#include<stdio.h>
int main()
{
	int N;
	printf("Enter Number of lines : ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(j==i || j==N+1-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
