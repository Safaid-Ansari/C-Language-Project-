#include<conio.h>
#include<stdio.h>
int main()
{
	int N,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	for(int n=1;n<=N;n++)
	{
		int s=0;
		for(int i=1;i<=n;i++)
		s=s+i;
		sum=sum+s;
	}
	printf("total sum is %d ",sum);
	
	getch();
}
