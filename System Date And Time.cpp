#include<conio.h>
#include<stdio.h>
#include<windows.h>
int gotoxy(int x, int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	
}
int main()
{
	int x=40,y=12;
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	gotoxy(x,y);
	printf("Date : %d/%d/%d ",stime.wDay,stime.wMonth,stime.wYear);
	
	
	
	getch();
}
