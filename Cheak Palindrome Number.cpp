#include<conio.h>
#include<stdio.h>
int main()
{
	int n,x,sum=0;
	printf("Enter a Number :");
	scanf("%d",&n);
	int temp=n;
	while(n!=0)
	{
		x=n%10;
		sum=sum*10+x;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Given Number is Palindrome : %d ",sum);
	}
	 else
	 {
	 	printf("Given Number is Not Palindrome : %d ",sum);
	 }
	 
	 getch();
}
