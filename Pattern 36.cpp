/*
  Star Pattern
  
0
0 1
0 2 4
0 3 6 9
0 4 8 12 16

*/
#include<conio.h>
#include<stdio.h>
int main()
{
	int k;
	
	for(int i=1;i<=5;i++)
	{
		k=0;
		for(int j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf("%d ",k);
				k=k+i-1;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
