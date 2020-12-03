#include<stdio.h>
void NonFactor(int );

int main()
{
	int iNo=0;;
	int iRet =0;
	printf("Enter a Number : ");
	scanf("%d",&iNo);

	NonFactor(iNo);
	
	
	return 0;
}
void NonFactor(int iValue)
{
	int iCounter ;

	
	if(iValue < 0)
	{
			iValue = -iValue;
	}

	for(iCounter =1 ; iCounter < iValue   ;iCounter ++) 
	{	
		if(iValue % iCounter != 0)
		{
			printf("%d \t",iCounter);
		}
 	}	
}	
		   