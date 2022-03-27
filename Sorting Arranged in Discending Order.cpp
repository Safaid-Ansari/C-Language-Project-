#include<conio.h>
#include<stdio.h>
int main()
{
	int a,n,i,j,number[100];
	printf("Enter the Value of N Numbers : ");
	scanf("%d",&n);
	
	printf("Enter the Number :\n");
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]<number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("The Number Arranged in Discending order given below ");
	for(i=0;i<n;i++)
	
		printf("%d\n",number[i]);
	
	getch();
}
