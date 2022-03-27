#include<conio.h>
#include<stdio.h>
int main()

{
	int a,b;
	printf("Enter two Number : \n");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d \nb=%d",a,b);
	
	getch();
}
