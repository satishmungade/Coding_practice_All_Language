#include<stdlib.h>
#include<stdio.h>
void fun(int *iptr);
int main(void)
{
	int iNo;
	printf("ENter a Numner :");
	scanf("%d",&iNo);
	printf("\n Befor increment :%d",iNo);
	fun(&iNo);
	printf("\n After increment %d\n",iNo);
	exit(0);
}
void fun(int *iptr)
{
	(*iptr) ++;
}