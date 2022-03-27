#include<conio.h>
#include<stdio.h>
int main()
{
	int N,x,y=0;
	
	printf("Enter a Number : ");
	scanf("%d",&N);
	
	while(N!=0)
	{
	  x=N%10;
	  y=y*10+x;
	  N=N/10;   
	}
	
	printf("Reverse Number Is : %d",y);
	
	getch();
}
