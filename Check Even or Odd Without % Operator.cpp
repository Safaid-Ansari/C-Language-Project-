#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a Number to Check Even or Odd : ");
	scanf("%d",&n);
	
	if(n&1)
	  printf("Given Number is %d Odd  ",n);
	else
	  printf("Given Number is %d Even  ",n);  
}
