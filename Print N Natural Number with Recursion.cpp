#include<conio.h>
#include<stdio.h>
void print(int N);
int main()
{
//	int N;
//	printf("Enter a Number : ");
//	scanf("%d",&N);
	
	print(10);
}

void print(int N)
{
	if(N>=1)
	{
		
		printf("%d ",N);
		print(N-1);
	}
}


