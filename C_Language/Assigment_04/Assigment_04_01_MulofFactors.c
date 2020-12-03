#include<stdio.h>
int MulOfFactor(int );

int main()
{
	int iNo=0;;
	int iRet =0;
	printf("Enter a Number : ");
	scanf("%d",&iNo);

	iRet=MulOfFactor(iNo);
	
	printf("\n Multification of Factor %d:",iRet);
	
	return 0;
}
int MulOfFactor(int iValue)
{
	int iCounter,iMult=1;

	if(iValue == 1) 
	{
		return 1;
	}	
	if(iValue < 0)
	{
			iValue = -iValue;
	}
	for(iCounter =1 ; iCounter <= iValue /2  ;iCounter ++) 
	{	
		if(iValue % iCounter == 0)
		{	
			iMult = iMult * iCounter;
		}
	}	
	
	return iMult;		    
}
