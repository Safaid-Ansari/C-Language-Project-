/* Star Pattern 

ABCDEFG
ABC EFG
AB   FG
A     G

*/

#include<conio.h>
#include<stdio.h>
int main()
{
	char k;
	
	for(int i=1;i<=4;i++)
	{
		k='A';
		for(int j=1;j<=7;j++)
		{
			if(j<=5-i || j>=3+i)
			{
				printf("%c",k);
			}
			else
			{
				printf(" ");
			}
			k++;
		}
		printf("\n");
	}
}
