#include<conio.h>
#include<stdio.h>
int getIntegerOnly();
int main()
{
	int x;
	x=getIntegerOnly();
	printf("\nYou Have Entered : %d ",x);
	getch();
}
int getIntegerOnly()
{
	int num=0,ch;
	do{
		
		ch=getch();
		if(ch>=48 && ch<=57){	
	    printf("%c",ch);
		num=num*10+(ch-48);
	    }
		if(ch==13)
	    break;
	    
	}
	while(1);
	return(num);
}

