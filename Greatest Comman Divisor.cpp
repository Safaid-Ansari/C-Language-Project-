#include<stdio.h>
#include<conio.h>
int GCD(int , int);
int main()
{
	int a,b;
	printf("Enter two Number Checking for Greatest Comman Divisor : \n");
	scanf("%d%d",&a,&b);
	printf("Greatest Comman Divisor is : %d ",GCD(a,b));
	
	getch();
}

int GCD(int a, int b)
{
	if(a==b)
	return(1);
	if(a%b==0)
	return(b);
	if(b%a==0)
    return(a);
    if(a>b)
    return(GCD(a%b,b));
    else
    return(GCD(a,b%a));	
}
