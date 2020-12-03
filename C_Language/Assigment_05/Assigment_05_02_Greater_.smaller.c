/*2. Write a program which accept one number from user and check whether that
number is greater than 100 or not.

Input : 101
Output : Greater

Input : 39
Output : Smaller */

#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL checkGreater(int );
int main()
{
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Enter a Number :");
	scanf("%d",&iNo);

	bRet=checkGreater(iNo);
	if(bRet == TRUE)
	{
		printf("\n Number is Greater :");
	}
	else
	{
		printf("\n Number is Smaller :");
	}

	return 0;

}
BOOL checkGreater(int iValue)
{
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	if(iValue >= 101)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
