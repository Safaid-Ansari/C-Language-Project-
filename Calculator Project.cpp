#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{

	
	while(1)
	{
    float num1,num2,result=0;
	int choice;
	system("cls");
	printf("*****Choose anyone Operation*****\n\n\n");
	printf("Press_1 : For Addition \n");
	printf("Press_2 : For Subtraction \n");
	printf("Press_3 : For Multiplication\n");
	printf("Press_4 : For Division\n\n");
	printf("Please Enter a Number : ");
    scanf("%d",&choice);
    
    	printf("\nEnter Two Operands :\n\n");
		scanf("%f%f",&num1,&num2);
	
	switch(choice)
	{
		case 1:
			
			result=num1+num2;
			printf("\nAddition of Given Number is : %f ",result);
			break;
		
		case 2:
		    
			result=num1-num2;
			printf("\nSubtraction of Given Number is : %f ",result);
			break;
		
		case 3:
		
			result=num1*num2;
			printf("\nMultiplication of Given Number : is %f  ",result);
			break;
		
		case 4:
		
			result=num1/num2;
			printf("\nDivision of Given Number is : %f  ",result);
			break;
		
		case 5:
		   
		    exit(0);
			break;
		
		default :
		   printf("You have Entered Invalid Number ");
		   					
				
	}
	getch();
  }
}
