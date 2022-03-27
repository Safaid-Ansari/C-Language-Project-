#include<conio.h>
#include<stdio.h>
int sumOfDigit(int);
int main()
{
	int N;
	printf("Enter a Number : ");
	scanf("%d",&N);
	int x=sumOfDigit(N);
	printf("Sum is %d",x);
}
int sumOfDigit(int N)
{
	if(N/10==0)
	return N;
	
	return (N%10+sumOfDigit(N/10));
}
