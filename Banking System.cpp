#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int list();
void Deposite();
void Withdraw();
void Transfer();
void CheckDetail();



float A;
int depo,with,trans,TotalDeposite=0,TotalWithdraw=0,TotalTransfer=0;
char s[50];
int Acc;
FILE *fp;

int main()
{

	system("cls");
	printf("\nEnter Your Name :  ");
	gets(s);

	
	printf("\nEnter Your Account Number : ");
	scanf("%d",&Acc);
	
	while(1)
	{
		system("cls");
		switch(list())
		{
			case 1:
				Deposite();
				TotalDeposite+=depo;
				break;
			case 2:
			    Withdraw();
				if(with<=A)
				TotalWithdraw+=with;
				break;
			case 3:
			    Transfer();
				if(trans<=A)
				TotalTransfer+=trans;
				break;
			case 4:
			    CheckDetail();
				break;	
			case 5:	
			    exit(0);
			default:
			    printf("\nYou Have Entered Invalid Choice : ");			
		}   //End of Switch 
		
		getch();
	}    //End of While
}   // End of main function
 int list()
 {  
    int choice;
    printf("\n\n******Welcome Dear Costumer******\n\n");
    printf("Please Choose One Option \n\n");
 	printf("\n1...Deposite      :");
 	printf("\n2...Withdraw      :");
 	printf("\n3...Transfer      :");
 	printf("\n4...Check Details :");
 	printf("\n5...Exit          :\n_____________________________\n");
 	printf("\nEnter Your Choice : ");
 	scanf("%d",&choice);
 	return(choice);							
 }
   void Deposite()
   {
 	fp=fopen("Banking.txt","r+");
 	if(fp==NULL){
 		printf("File Not Found");
 		exit(0);
	 }
 	printf("\nEnter Amount You Want to Deposite :");
 	scanf("%d",&depo);
 	fscanf(fp,"%f",&A);
 	A+=depo;
 	printf("Deposite Successful.... \nYour New Balance is Rs : %f",A);
    fprintf(fp,"%f",A);
 	fclose(fp);
   } 
 void Withdraw()
 {
 	fp=fopen("Banking.txt","r+");
 	if(fp==NULL){
 		printf("File Not Found ");
 		exit(0);
	 }
 	printf("\nEnter Amount You Want to Withdraw :");
 	scanf("%d",&with);
 	fscanf(fp,"%f",&A);
 	if(with<=A)
 	{
 	A-=with;
 	printf("Widthdraw Successful....\nYour New Balance is Rs : %f",A);
 	fprintf(fp,"%f",A);
    }
 	else
 	{
	 
 	printf("\nInsufficient Balance in Your Account :");
    }
    fclose(fp);
 }
 void Transfer()
 {
 	fp=fopen("Banking.txt","r+");
 	  if(fp==NULL){
 		printf("File Not Found ");
 		exit(0);
	}
 	printf("\nEnter Amount You Want To Transfer : ");
 	scanf("%d",&trans);
 	fscanf(fp,"%f",&A);
 	if(trans<=A){
	 
 	A-=trans;
 	printf("Transfer Successful.... \nYour New Balm=nce is Rs : %f",A);
 	fprintf(fp,"%f",A);
     }
 
 	else{
	 
 	printf("\nInsufficient Balance in Your Account : ");
     }
 }
 void CheckDetail()
 {
 	fp=fopen("Banking.txt","r");
 	if(fp==NULL)
	 {
 		printf("File Not Found ");
 		exit(0);
	 }
	   while(!feof(fp))
	   {
	       fscanf(fp,"%f",&A);
 	       printf("\nTotal Amount   = %f",A);
 	       printf("\nTotal Deposite = %d",TotalDeposite);
           printf("\nTotal Witdraw  = %d",TotalWithdraw);
 	       printf("\nTotal Transfer = %d",TotalTransfer);
           break;
       }
       
      
 }

    
