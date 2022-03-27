#include<conio.h>
#include<stdio.h>
int main()
{
	int N;
	printf("Enter Number of Rows  : ");
	scanf("%d",&N);
	
	for(int i=0;i<N;i++)
	{    
	    int k=1;
		for(int j=0;j<N;j++)
		{
			if(j<=i){
				printf("%d",k);
			    k=1-k;
				
			}
			  
			else
			printf(" ");    
		}
		printf("\n");
	}
}
