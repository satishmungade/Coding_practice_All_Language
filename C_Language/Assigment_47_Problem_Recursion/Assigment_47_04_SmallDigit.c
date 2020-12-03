#include<stdio.h>
int Small(int);
int main()
{
	int iNo=0,iRet=0;
	printf("Enter a Number :");
	scanf("%d",&iNo);
	iRet=Small(iNo);
	printf("\n Small Digit is :%d",iRet);

	return 0;
}
int Small(int iNo)
{
	static int iSmall=0,iDigit=0;
	/*while(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit > iSmall)		withoutRecurtion
		{
			iSmall=iDigit;
		}
		iNo=iNo/10;
	}  */
	if(iNo != 0)
	{
		iDigit=iNo%10;
		if(iDigit < iSmall || !iSmall)		//withRecurtion
		{
			iSmall=iDigit;
		}
		iNo=iNo/10;
		
		Small(iNo);
	}  
	return iSmall;
}