#include<conio.h>
#include<stdio.h>
int main()
{
	int n;
	char str[50],ch;
	FILE *fp;
	fp=fopen("string.txt","w");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	printf("Enter How many string You want to store into a flie : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter %d string ",i);
		gets(str);
		fputs(str,fp);
		fprintf("\n");
	}
	fclose(fp);
}

/*


#include<conio.h>
#include<stdio.h>
int main()
{
	int n;
	char str[50]ch;
	FILE *fp;
	fp=fopen("string.txt","r");
	if(fp==NULL)
	{
		printf("file not found ");
		exit(0);
	}
	while(!feof(fp))
	{
	   fgets(str,50,fp);
	   printf("%s",str);
	}
	fclose(fp);
}
*/
