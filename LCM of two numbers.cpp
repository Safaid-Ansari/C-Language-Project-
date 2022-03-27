#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,i,gcd,lcm;
	
	printf("Enter Two Number for LCM : ");
	scanf("%d%d",&a,&b);
	
	for(i=1; i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
	}
	lcm=(a*b)/gcd;
	
	printf("LCM of %d and %d is : %d",a,b,lcm);
	
	getch();
}
