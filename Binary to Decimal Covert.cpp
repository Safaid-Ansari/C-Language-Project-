#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     int bin,i=0,sum=0;
     printf("Enter  a Binary Number : ");
     scanf("%d",&bin);
     while(bin)
     {
     	sum=sum+pow(2,i)*(bin%10);
     	bin=bin/10;
     	i++;
	 }
	 printf("Decimal Equivalent is : %d ",sum);
	 
	 getch();
}
