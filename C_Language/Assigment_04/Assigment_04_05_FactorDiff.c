#include<stdio.h>
int FactorDiff(int );

int main()
{
	int iNo=0;;
	int iRet =0;
	printf("Enter a Number : ");
	scanf("%d",&iNo);

	iRet=FactorDiff(iNo);
	
	printf("\nFactor or Non Factors Diffrence   %d:",iRet);
	
	return 0;
}
int FactorDiff(int iValue)
{
	int iCounter,iDiff=0,iSum=0,iSum1=0;

	if(iValue == 1) 
	{
		return 1;
	}	
	if(iValue < 0)
	{
			iValue = -iValue;
	}
	for(iCounter =1 ; iCounter < iValue ; iCounter ++) 
	{	
		if(iValue % iCounter != 0)
		{	
			iSum = iSum + iCounter;
		
		}
	}	
	
	for(iCounter =1 ; iCounter < iValue ; iCounter ++) 
	{	
		if(iValue % iCounter == 0)
		{	
			iSum1 = iSum1 + iCounter;
		
		}
	}	
	 iDiff = iSum1 -iSum;		    
	 return iDiff;
}

