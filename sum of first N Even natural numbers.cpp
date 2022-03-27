--#include<conio.h>
#include<stdio.h>
int main()
{
	int i=1,N,sum=0;
	
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	while(i<=N)
	{
		sum=sum+2*i;
		i++;
	}
	
	printf("Sum of First N Even Natural Number : %d",sum);
	
	getch();
}
