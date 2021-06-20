#include<stdio.h>
#include<string.h>
int main()
{
	char string[20],ch;
	printf("\n Enter The string :");
	gets(string);
	printf("\n Enter The Character To set :");
	scanf("%c",&ch);

	strset(string,ch);
	printf("\n\n Now String Is :");
	puts(string);

	return 0;
}