#include<stdio.h>
void RevFactor(int );

int main()
{
	int iNo=0;;
	int iRet =0;
	printf("Enter a Number : ");
	scanf("%d",&iNo);

	RevFactor(iNo);
	
	
	return 0;
}
void RevFactor(int iValue)
{
	int iCounter ;

		
	if(iValue < 0)
	{
			iValue = -iValue;
	}
	for(iCounter = iValue/2 ; iCounter >= 1  ;iCounter -- ) 
	{	
		if(iValue % iCounter == 0)

		{	
		
			printf("%d \t",iCounter);
		}
	}	
}	
		   