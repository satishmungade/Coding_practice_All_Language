#include<stdio.h>
#include<string.h>
int main(void)
{
	char *ptr="Hello";
	char str[]="Good";
	printf("\n The Length of Hello is :%d",strlen(ptr));
	printf("\n The Length of Good is :%d",strlen(str));
	printf("\n The Length of Morning is :%d\n",strlen("Morning"));
	return 0;

}