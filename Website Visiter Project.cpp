#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char  choice,c;
	while(1){
	system("cls");
	printf("\n\n***** Select Anyone  Number *****\n\n");
	printf("\n0 ...Java Tutorial                  :");
	printf("\n1 ...Google                         : ");
	printf("\n2 ...Whatsapp                       :");
	printf("\n3 ...Facebook                       :");
	printf("\n4 ...Instagram                      :");
	printf("\n5 ...C/C++ Tutorials                : ");
	printf("\n6 ...Jamia Hamdard University       : ");
	printf("\n7 ...Jamia Milia Islamia University : ");
	printf("\n8 ...Twitter                        :");
	printf("\n9 ...Youtube                        : ");
	printf("\n10...ClassRoom                      :\n11...Exit                           :\n________________________________________________\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
	     
	     
	switch(choice)
	{
		case 0:
			system("START https://www.learnvern.com");
			break;
		case 1:
			 system("START https://www.google.com");
			 break;
		case 2:
		     system("START https://web.whatsapp.com");
			 break;	 
			 
		case 3:
		     system("START https://www.facebook.com");
			 break;
		case 4:
		     system("START https://www.instagram.com");
			 break;
		case 5:
		     system("START https://www.mysirg.com");
			 break;
		case 6:
		     system("START http://jamiahamdard.edu/");
			 break;	 
		case 7:
		     system("START https://www.jmi.ac.in/");
			 break;	 
		case 8:
			 system("START https://www.twitter.com");
			 break;	 
		case 9:
			 system("START https://www.youtube.com");
			 break;	 
		case 10:
			 system("START https://classroom.google.com/");
			 break;
		case 11:
		     exit(0);
        default:
        	printf("You have Enter Invalid Choice");
        	break;
		
	}
      getch();	
  }
  
}

