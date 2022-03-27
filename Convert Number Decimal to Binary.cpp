#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,n;
	printf("Enter the Number Convert decimal to binary digit : ");
	scanf("%d",&n);

      for(i=0;n>0;i++){
		a[i]=n%2;
		n=n/2;
	}
	printf("Given  Number is %d ",n);
	
	for(i=i-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}


