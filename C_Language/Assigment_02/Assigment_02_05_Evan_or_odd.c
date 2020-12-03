/*Accept number from user and check whether number is even or odd*/

#include<stdio.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL;
int ChkEvan(int iNo);
int main()
{
	int iValue=0;
	BOOL bRet = FALSE;
	printf("Enter a Number :");
	scanf("%d",&iValue);
	bRet=ChkEvan(iValue);
	if(bRet == TRUE)
		printf("Number is Evan ");
	else
		printf("Number is odd");
	return 0;
}
int ChkEvan(int iNo)
{
	int iAns =0;
	iAns = iNo % 2;
	if(iAns == 1)
		return FALSE ;
	else
		return TRUE;
		 
}