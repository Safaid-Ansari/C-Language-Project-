#include<conio.h>
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a Number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		{
			if(j<=i)
			  printf("*");
			else
			  printf(" ");  
		}
		printf("\n");
	}
	getch();
}
