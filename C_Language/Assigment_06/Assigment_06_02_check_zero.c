
#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL checkZero(int );
int main()
{
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Enter a Number:");
	scanf("%d",&iNo);

	bRet=checkZero(iNo);
	if(bRet == TRUE)
	{
		printf("\n It Contains Zero :");
	}
	else
	{
		printf("\n There is no Zero :");
	}

	return 0;

}
BOOL checkZero(int iNo)
{
	int iDigit=0,iCnt=0;

	if(iNo == 0)
	{
		return 1;
	}
	while(iNo != 0)
        {
          	iDigit = iNo % 10;
        	if(iDigit == 0)
        	{
        		
            	iCnt ++;
        	}
        	
        	iNo=iNo/10;
        } 
        if(iCnt != 0)
        {
        	return 1;
        }
        else
        {
        	return 0;
        } 
        	       
  }