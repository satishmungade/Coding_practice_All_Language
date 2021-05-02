#include<stdlib.h>
#include<stdio.h>
void fun(int iNo1,int iNo2,int *ipSum,int *ipDiff);

int main(void)
{
	int iNo1,iNo2,iSum,iDiff;
	printf("Enter Two Numner :");
	scanf("%d%d",&iNo1,&iNo2);  
	fun(iNo1,iNo2,&iSum,&iDiff);
	printf("\n Addition is :%d\n Substraction is :%d\n",iSum,iDiff);
	exit(0);
}
void fun(int iNo1,int iNo2,int *ipSum,int *ipDiff)
{
	*ipSum = iNo1 + iNo2;
	*ipDiff = iNo1 -iNo2;
}