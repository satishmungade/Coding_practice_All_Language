#include<stdio.h>
static int iNo1;
static int iNo2=40;
static void fun2();
void fun()
{
	printf("\n enter a Number :");
	scanf("%d",&iNo1);
	printf("\n in Fun iNo1 is %d\n iNo2 is %d\n",iNo1,iNo2);
	fun2();
}
static void fun2()
{
	printf("\n In static fun2 ");
}