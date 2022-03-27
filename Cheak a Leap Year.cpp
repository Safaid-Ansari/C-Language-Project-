#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){

int year,choice;
while(1)
{
  system("cls");
  printf("1...Check Leap Year \n");
  printf("2...Exit\n_______________________\n");
  printf("Enter Your Choice : ");
  scanf("%d",&choice);
  switch(choice){
  
case 1:
printf("Enter a Year : ");
scanf("%d",&year);
if(year%400==0 || year%100!=0 && year%4==0)
printf("Leap Year");
else
printf("Not a Leap Year");
break;
case 2:
	exit(0);
	default:
		printf("You Have Entered Invalid Choice");
	

     }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
      getch();
  }
}  
