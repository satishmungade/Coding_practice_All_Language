/*3. Write a program which accept two numbers and check whether numbers are equal or not.

Input : 10 10
Output : Equal

Input : 10 12
Output : Not Equal

Input : 10 -10
Output : Not Equal */


#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL checkEqual(int ,int );
int main()
{
	int iNo=0,iNo1=0;
	BOOL bRet=FALSE;

	printf("Enter a Number Two  :");
	scanf("%d\t%d",&iNo,&iNo1);

	bRet=checkEqual(iNo,iNo1);
	if(bRet == TRUE)
	{
		printf("\n Number is Equal :");
	}
	else
	{
		printf("\n Number is Not Equal :");
	}

	return 0;

}
BOOL checkEqual(int iValue,int iValue1)
{
	
	if(iValue == iValue1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

