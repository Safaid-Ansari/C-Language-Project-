#include<conio.h>
#include<stdio.h>

struct book
{
	int bookid;
	char title[50];
	float price;
};

struct book input()
{
	struct book b;
	printf("Enter bookid,title,price : \n");
	scanf("%d",&b.bookid);
	fflush(stdin);
	gets(b.title);
	scanf("%f",&b.price);
	return (b);
}
 void display(struct book b)
 {
 	printf("%d %s %f ",b.bookid,b.title,b.price);
 }
 
 int main()
 {
 	struct book b1;
 	b1=input();
 	display(b1);
 	
 }
