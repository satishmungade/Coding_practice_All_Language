#include<stdio.h>
#include<string.h>
int main(void)
{
	char source[20],destination[40];
	printf("\n\n Enter Destination string :");
	gets(destination);
	printf("\n Enter source String :");
	gets(source);
	strcat(destination,source);
	printf("\n Concatenated String is :");
	puts(destination);

	return 0;
}