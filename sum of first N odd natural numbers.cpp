#include<conio.h>
#include<stdio.h>
int main()
{
	int N,i=1,sum=0;
	
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	while(i<=N)
	{
		sum=sum+2*i-1;
		
		i++;
	}
	printf("Sum is : %d ",sum);
	
	getch();
}
