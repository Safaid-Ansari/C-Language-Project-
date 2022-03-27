#include<string.h>
#include<conio.h>
#include<stdio.h>

int indexOfsubString(char str[] , char s[])
{
	int i,j,k,l;
	
	l=strlen(s);
	
	for(int i=0;str[i+l-1];i++)
	{
		k=i;
		
		for(j=0;j<=l-1;j++)
		{
			if(str[k]!=s[j])
			  break;
			  
			  k++;
		}
		if(j==l)
		  return(i);
	}
	 return -1;
}


int main()
{
	int index=indexOfsubString("abababaabbababababababa","aabb");
	if(index==-1)
	printf("SubString not found ");
	else
	printf(" Substring found at index  :  %d ",index);
	
	getch();
}
