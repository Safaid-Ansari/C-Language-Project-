#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10],i,se=0,so=0;
	
	printf("Enter 10 Number : \n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		se=se+a[i];
		else
		so=so+a[i];
	}
	printf("Sum of Even Number = %d\n",se);
	printf("Sum of Odd Number  = %d ",so);
	
	getch();
}
