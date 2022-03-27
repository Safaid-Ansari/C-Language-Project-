#include<conio.h>
#include<stdio.h>
void PrintNatural(int);
int main()
{
	int N;
	printf("Enter a Number : ");
	scanf("%d",&N);
	PrintNatural(N);
}
void PrintNatural(int N)
{
	if(N>=1)
	{
		
		PrintNatural(N-1);
		printf("%d ",N);
	}
}
