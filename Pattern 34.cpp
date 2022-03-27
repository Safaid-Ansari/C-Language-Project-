/*Pattern 
1
62
1073
131184
15141295
*/
#include<conio.h>
#include<stdio.h>
int main()
{
	int row,p,k=1;
	
	printf("Enter Number of rows : ");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++)
	{
		p=k;
		for(int j=1;j<=i;j++)
		{
			printf("%d",p);
			p=p-(row-i+j);
		}
		printf("\n");
		k=k+1+row-i;
	}
}
