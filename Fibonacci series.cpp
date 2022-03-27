#include<conio.h>
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("Enter a Number how many fibonacci series you want to see  : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
	getch();
	
}
int fib(int a)
{
	if(a==0 || a==1 || a==2)
	return 1;
	return (fib(a-1)+fib(a-2));
}

