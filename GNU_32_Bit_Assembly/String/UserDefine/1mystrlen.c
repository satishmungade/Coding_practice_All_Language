#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mystrlen(const char *);
int main(void)
{
	char *ptr="Hello";
	char str[]="Good";
	printf("\n The Length of Hello is :%d",mystrlen(ptr));
	printf("\n The Length of Good is :%d",mystrlen(str));
	printf("\n The Length of Morning is :%d\n",mystrlen("Morning"));
	
	exit(0);

}
int mystrlen(const char *szstr)
{
	if(szstr == NULL)
	{
		return -1;
	}
	int iCnt= 0;
	while(szstr[iCnt] != '\0')
	{
		iCnt ++;
	}
	return iCnt ;
}
