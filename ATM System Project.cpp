#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

	int newAmount;
	char choice;
	float b;
	FILE *fp;
	while(1){
	
		system("cls");
		printf("******Welcome*******");
		
		printf("\n\n\nPlease choose a Options__");
		printf("\n\n\n1...Check Accounnt Details : ");
		printf("\n2...Check Balance          :");
		printf("\n3...Credit Money           : ");
		printf("\n4...Debit  Money           : ");
		printf("\n5...Exit                   :\n_________________________");
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
	
		
		switch(choice)
		{
			case 1:
				fp=fopen("bal.txt","r");
				if(fp==NULL)
				{
					printf("File not found ");
					exit(0);
				}
			z	while(!feof(fp))	
               	{
		        fscanf(fp,"%f",&b);
				printf("\n\nAccount Holder Name__ Mr.Safaid Ansari ");
				printf("\nDate of Birth________ 2/10/2002 ");
				printf("\nAccount No___________2195101098838 ");
				printf("\nBranch_______________Nagina");
				printf("\nYour Available  Balance is ___: Rs %f ",b);
			    }
			    fclose(fp);
				break;
			case 2:
				fp = fopen("Bal.txt","r");
				if(fp==NULL)
				{
					printf("File Not Found");
					exit(0);
				}
                while(!feof(fp))	
             	{
	        	fscanf(fp,"%f",&b);
	        	printf("\nYour Available Balance is %f\n",b);
	            } 
				fclose(fp);
				break; 
			case 3:
				fp = fopen("Bal.txt", "r+");
				if(fp==NULL)
				{
					printf("File not Found");
					exit(0);
				}
			    printf("\nYou Want To Credit Money In Your Account : ");
				scanf("%d",&newAmount);
				b=b+newAmount;
				fprintf(fp, "%f", b);
				printf("\nNow Your New Available Balance is Rs %f ",b);
				fclose(fp); 
				break;
			case 4:
				fp=fopen("bal.txt","r+");
				if(fp==NULL)
				{
                   printf("File NOt Found");
				   exit(0);					
				}
			    printf("\nYou Want To Debit Money From  Your Account : ");
				scanf("%d",&newAmount);
				
				if(newAmount<=b){
				b=b-newAmount;
				printf("\nNow Your New Available Balance is Rs %f ",b);
				fprintf(fp, "%f", b);
				fclose(fp);
			    }
				else{
				printf("\nInsufficient Balance in Your Account : ");
			    }
				break;
		     default:
		     		printf("\n\nYou Have  Entered Invalid choice : ");
			
		
			case 5:
			    exit(0);				
		}
		
		getch();
    }
}

