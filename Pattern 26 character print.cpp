#include<conio.h>
#include<stdio.h>
int main()
{
	int row;
	char k;
	
	printf("Enter a  Number For Rows : ");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++)
	{
		k=64+i;
		for(int j=1;j<=row;j++)
		{
			if(j<=i)
			  
			  printf("%c",k--);
			
			else
			  
			  printf(" ");  
		}
		printf("\n");
	}
}
