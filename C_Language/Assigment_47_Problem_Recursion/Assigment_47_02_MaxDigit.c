#include<stdio.h>
int Max(int);
int main()
{
	int iNo=0,iRet=0;
	printf("Enter a Number :");
	scanf("%d",&iNo);
	iRet=Max(iNo);
	printf("\n Max Digit is :%d",iRet);

	return 0;
}
int Max(int iNo)
{
	static int iMax=0,iDigit=0;
	/*while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit > iMax)		withoutRecurtion
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
	}  */
	if(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit > iMax)		//withRecurtion
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		Max(iNo);
	}  
	return iMax;
}