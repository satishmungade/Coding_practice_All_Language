#include<stdio.h>
#include<stdlib.h>
void fun(void);
int main()
{
	extern int g_iNo;
	printf("\n in main g_iNo is :%d",g_iNo);
	fun();
	exit(0);
}
int g_iNo=20;

