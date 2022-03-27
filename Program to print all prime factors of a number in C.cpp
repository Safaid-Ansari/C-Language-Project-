#include<conio.h>
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a  Number : ");
	scanf("%d",&x);
	for(int i=2;x>1;i++)
	{
		while(x%i==0)
		{
			printf("%d ",i);
			x=x/i;
		}
	}
}
