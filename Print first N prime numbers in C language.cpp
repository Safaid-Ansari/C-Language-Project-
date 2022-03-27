#include<conio.h>
#include<stdio.h>
int isPrime(int);
int main()
{
	int N,x=2;
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	while(N)
	{
		if(isPrime(x))
		{
		   printf("%d ",x);
		   N--;
		}
		x++;
	}
}

int isPrime(int x)
{
	for(int i=2;i<x;i++)
	 if(x%i==0)
	   return(0);
	 return(1);  
}
