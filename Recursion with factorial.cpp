#include<conio.h>
#include<stdio.h>
int fact(int );
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	printf("factorial of %d is = %d ",n,fact(n));
	
	getch();
}

int fact(int n)
{
	if(n==0)
	return 1;
	int a=n*fact(n-1);
	return a;
}
