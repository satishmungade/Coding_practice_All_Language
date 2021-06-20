#include<stdio.h>
#include<string.h>
char *mystrset(char *,char);
int main()
{
	char string[20],ch;
	printf("\n Enter The string :");
	gets(string);
	printf("\n Enter The Character To set :");
	scanf("%c",&ch);

	mystrset(string,ch);
	printf("\n\n Now String Is :");
	puts(string);

	return 0;
}

char *mystrset(char * String ,char ch)
{
	int iCnt=0;
	while(String[iCnt] !='\0')
	{
		String[iCnt]=ch;
		iCnt ++;
	}
	String[iCnt]='\0';
	
	return String;
}