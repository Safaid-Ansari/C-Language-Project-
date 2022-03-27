#include<conio.h>
#include<stdio.h>
int main()
{
	int N,i,x=2;
	printf("Enter a Number to Print All prime Number ");
	scanf("%d",&N);
	while(N)
	{
		for(i=2;i<x;i++)
	    if(x%i==0)
	    break;
	    if(i==x)
	    {
	    	printf("%d ",i);
	    	N--;
		}
		x++;
	}
}
