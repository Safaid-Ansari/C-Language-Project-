/*
Star PAttern 

    *
   * *
  * * *
 * * * *
* * * * *

*/


#include<conio.h>
#include<stdio.h>
int main()
{
	int i,k,flag=1,row;
	printf("Enter a Number line of row ");
	scanf("%d",&row);
	
	for(i=1,k=0;i<=2*row-1;i++){
		
		if(i<row-k)
		printf(" ");
		else
		{
			if(flag)
			printf("*");
			else
			printf(" ");
			flag=1-flag;
		}
		if(i==row+k)
		{
			k++;
			printf("\n");
			if(i==2*row-1)
			break;
			i=0;
			flag=1;
		}
	}
}
