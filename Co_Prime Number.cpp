#include<conio.h>
#include<stdio.h>
int main()
{

   	int a,b,i;
	printf("Enter Two Number :\n");
	scanf("%d%d",&a,&b);
	int min=a<b?a:b;
	
	for(i=2;i<=min;i++){
		if(a%i==0 && b%i==0)
		break;
	}
	if(i==min+1)
	printf("Given Number %d and %d are Co_Prime ",a,b);
	else
	printf("Given Number %d and %d are not Co_Prime ",a,b);
	
	getch();
}
