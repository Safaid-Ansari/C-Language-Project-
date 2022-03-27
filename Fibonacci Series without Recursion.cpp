#include<conio.h>
#include<stdio.h>
int main()
{
	int N,a=-1,b=1,c;
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++)
	{
		c=a+b;
		
		printf("%d ",c);
		
		a=b;
		b=a;
	}
	
	getch();
}
