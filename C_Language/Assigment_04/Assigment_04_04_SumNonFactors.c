#include<stdio.h>
int SumNonFactor(int );

int main()
{
	int iNo=0;;
	int iRet =0;
	printf("Enter a Number : ");
	scanf("%d",&iNo);

	iRet=SumNonFactor(iNo);
	
	printf("\n Summation of Non Factor %d:",iRet);
	
	return 0;
}
int SumNonFactor(int iValue)
{
	int iCounter,iSum=0;

	if(iValue == 1) 
	{
		return 1;
	}	
	if(iValue < 0)
	{
			iValue = -iValue;
	}
	for(iCounter =1 ; iCounter <= iValue  ;iCounter ++) 
	{	
		if(iValue % iCounter != 0)
		{	
			iSum = iSum + iCounter;
		}
	}	
	
	return iSum;		    
}
