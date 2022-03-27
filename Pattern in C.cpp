#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		int k=0;
		for(j=1;j<=5;j++){
			if(j<=i){
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
