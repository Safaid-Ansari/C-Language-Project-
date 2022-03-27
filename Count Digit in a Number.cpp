#include<conio.h>
#include<stdio.h>
int main()
{
	int n,count;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	
	printf("%d ",count);
	
	getch();
}
