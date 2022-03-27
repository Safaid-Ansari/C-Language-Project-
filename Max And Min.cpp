#include<conio.h>
#include<stdio.h>
#include<math.h>
int max(int);
int min(int);
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	printf("Maximum Number : %d \nMinimum Number : %d ",max(n),min(n));
}
int max(int a)
{
	return pow(10,a)-1;
}
int min(int a)
{
	return pow(10,a-1);
}
