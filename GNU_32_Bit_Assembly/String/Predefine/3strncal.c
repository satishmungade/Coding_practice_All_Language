#include<stdio.h>
#include<string.h>
int main(void)
{
	char source[20],destination[40];
	int ipos=0;
	printf("\n\n Enter Destination string :");
	gets(destination);
	printf("\n Enter source String :");
	gets(source);
	printf("\n Enter value of N..:");
	scanf("%d",&ipos);
	strncat(destination,source,ipos);
	printf("\n Concatenated String is :");
	puts(destination);

	return 0;
}