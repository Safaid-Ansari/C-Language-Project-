#include<conio.h>
#include<stdio.h>
int main()
{
	int l,i;
	char s[50],ch;
	printf("Enter a String : ");
	gets(s);
    
    for(l=0;s[l];l++); 
    for(i=0;i<l/2;i++)
    {
    	ch=s[i];
    	s[i]=s[l-1-i];
    	s[l-1-i]=ch;
	}
	printf("Reverse String is : %s ",s);
	
	getch();
}
