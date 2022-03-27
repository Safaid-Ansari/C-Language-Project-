#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a Number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",(2*i));
	}
	getch();
}
