#include<conio.h>
#include<stdio.h>
int SumOfSquare(int);
int main()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	printf("Sum of Square of  a Digit %d ",SumOfSquare(x));
	
	getch();
}

int SumOfSquare(int n)
{
	if(n/10==0)
	{
		return n*n;
	}
	return (n%10)*(n%10)+SumOfSquare(n/10);
}
