#include<stdio.h>
#include<string.h>
int main(void)
{
	char source[20];
	char destination[40];
	printf("\n Enter Source String :");
	gets(source);
	printf("\n source string is \t:");
	puts(source);

	strcpy(destination,source);
	printf("\n destination string is \t:");
	puts(destination);
	return 0;
}