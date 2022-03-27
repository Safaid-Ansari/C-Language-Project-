#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void deleteData();
void rikshaw();
void cycle();
void bus();
void showData();
int nor=0,noc=0,nob=0,amount=0,count=0;
int main()
{   
    int choice;
	while(1){
    system("cls");
    printf("\n\n*****Welcome*****");
	printf("\n\n\n1...Enter Rikshaw Entry : ");
	printf("\n2...Enter Cycle Entry   :");
	printf("\n3...Enter Bus Entry     : ");
	printf("\n4...Show Data           : ");
	printf("\n5...Delete Data         :");
	printf("\n6...Exit                :\n_____________________________\n");
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			rikshaw();
			break;
		case 2:
		    cycle();
			break;
		case 3:
		    bus();
			break;
		case 4:
		    showData();
			break;
		case 5:
		    deleteData();
			break;
			
		case 6:
		    exit(0);
		    printf("Thankyou for Using Our Application : ");
		default:
		   printf("\nYou Have Entered Invalid Choice : ");
		   					
	}
	getch();
  }
}
void deleteData()
{
	printf(" \nData delete  Successfully : ");
	nor=0;
	noc=0;
	nob=0;
	count=0;
	amount=0;
}

void rikshaw()
{
	printf("\nEntry Successfully : ");
	nor++;
	amount=amount+50;
	count++;
}
void cycle()
{
	printf("\nEntry Successfully : ");
	noc++;
	amount=amount+20;
	count++;
}
void bus()
{ 
    printf("\nEntry Successfully : ");
	nob++;
	amount=amount+100;
	count++;
}
void showData()
{
	printf("\nRikshaw Entry =    %d ",nor);
	printf("\nCycle Entry   =    %d ",noc);
	printf("\nBus Entry     =    %d ",nob);
	printf("\nTotal Entry   =    %d ",count);
	printf("\nTotal Amount  = Rs %d  ",amount);
}
