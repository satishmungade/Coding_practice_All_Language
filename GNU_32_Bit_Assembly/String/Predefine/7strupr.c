#include <stdio.h>
#include<string.h>

int main(void)
{
	char String[20];
	printf("\n Enter First String :");
	gets(String);

	strupr(String);
	printf("\n String in Upper case");
	puts(String);

	return 0;
}

