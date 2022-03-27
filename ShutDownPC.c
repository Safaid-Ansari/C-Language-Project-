#include<stdio.h>
#include<conio.h>
int main()
{
	char choice;
	printf("Press s : ShutDown Your PC \n");
	printf("Press r : Restart  Your PC\n");
	printf("Press l : LogOf    Your PC\n");
	printf("Enter Your Choice : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 's':
			system("c:\\windows\\system32\\shutdown /s");
			break;
		case 'r':
			system("c:\\windows\\system32\\shutdown /r");
			break;
		case 'l':
			system("c:\\windows\\system32\\shutdown /l");
			break;
		default :
            printf("You Have Entered Invalid Choice : ");
								
	}	
			
}
	

