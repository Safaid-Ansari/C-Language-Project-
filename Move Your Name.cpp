#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
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
	char ch;
	gotoxy(x,y);
	printf("Safaid Ansari");
	while(1){
	ch=getch();
	switch(ch){
		
		case 'a':
			x--;
			break;
		case 's':
		    x++;
		    break;
		case 'w':
		    y--;
		    break;
		case 'z':
		    y++;
		    break;
		case 'e':
		  exit(0);				
	}
	system("cls");
	gotoxy(x,y);
	printf("Safaid Ansari");
   }
}
