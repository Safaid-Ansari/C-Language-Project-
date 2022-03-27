#include<conio.h>
#include<stdio.h>
int main()
{
	int N,n,i;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(N=1;N<=n;N++){
	  for(i=1;i<=10;i++)
	
		printf("%d x %d = %d \n",N,i,N*i);
		printf("\n");
	
     }
     
	getch();
}
