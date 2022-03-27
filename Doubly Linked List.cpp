#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *prev,*next;
};
struct node *START=NULL;
void InsertAsFirstNode(){
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter a Number : ");
	scanf("%d",&n->info);
	n->prev=NULL;
	n->next=NULL;
	if(START==NULL)
      START=n;
	
	else
	{
		START->prev=n;
		n->next=START;
		START=n;
	}
}
void deleteFirstNode(){
	struct node *r;
	if(START==NULL)
		printf("List is Empty ");
	
	else{
		r=START;
		START=START->next;
		START->prev=NULL;
		free(r);
	}
}

 void viewList(){
 	struct node *t;
 	if(START==NULL)
 	printf("List is Empty ");
 	else{
 		t=START;
 		while(t->next!=NULL){
 			printf("Value is %d ",t->info);
 			t=t->next;
		 }
	 }
 }
 
 int menu()
{
	int ch;
	printf("\nPress 1..Add value to the List : ");
	printf("\nPress 2..Delete first value : ");
	printf("\nPress 3..ViewList : ");
	printf("\nPress 4..Exit :\n_____________________________\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	return(ch);
	
}
int  main()
{
	while(1){
		system("cls");
		switch(menu()){
			case 1:
			InsertAsFirstNode();
				break;
			case 2:
			    deleteFirstNode();
				break;
			case 3:
			    viewList();
				break;
			case 4:
			    exit(0);
			default:
			    printf("You have Entered Invalid choice : ");				
		}
		getch();
	}
}
