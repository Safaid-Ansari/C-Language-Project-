#include<conio.h>
#include<stdio.h>
int SumOfNCubes(int);
int main()
{
	int x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	printf("Sum of N Natural Numbers of Cubes : %d",SumOfNCubes(x));
	
	getch();
}
int SumOfNCubes(int n)
{
	if(n==1)
	return 1;
	
	return n*n*n+SumOfNCubes(n-1);
}
