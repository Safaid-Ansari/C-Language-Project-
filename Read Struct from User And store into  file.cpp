#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int Roll_No;
	char name[30];
	float Marks;
};
int main()
{
	struct student s;
	char ch;
	FILE*fp;
	fp=fopen("StructData","wb");
	if(fp==NULL)
	{
		printf("Cannot file open ");
		exit(0);
	}
	printf("Enter RollNumber Name and Marks \n");
	scanf("%d",&s.Roll_No);
	ch=getchar();
	gets(s.name);
	scanf("%f",&s.Marks);
	fwrite(&s,sizeof(struct student),30,fp);
	fclose(fp);
	getch();
}
