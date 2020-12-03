/*1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)*/

#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRORSIZE -2

int SummationOfOdd(int arr[], int iSize);
int main()
{
	int *pPtr=NULL;
	int iNo=0,iCounter=0,iRet=0;
	 
	printf("Enter the Value of N :");
	scanf("%d",&iNo);

	pPtr=(int *)malloc(iNo*sizeof(int));
	if(NULL==pPtr)
	{
		printf("Memory Allocation Falied");
		return -1;
	}
	
	printf("\nEnter The Values of Array :\n\n");
	for(iCounter = 0 ;iCounter < iNo ; iCounter ++)
	{
                printf("\n Values index Number %d is\t:",iCounter);		
                scanf("%d",&pPtr[iCounter]);
	}

	for(iCounter = 0 ;iCounter < iNo ; iCounter ++)
	{
		printf("%d ",pPtr[iCounter]);
	}
	
	iRet=SummationOfOdd(pPtr,iNo);
	if(iRet == ERRMEMORY)
	{
		printf("ERROR : Invalid Memory Address \n");
	}
	else if(iRet == ERRORSIZE)
	{
		printf("ERROR : Invalid Size\n");
	}
	else
	{	
		printf("\n Summation Of Odd N Nubers : %d",iRet);
	}	

	free(pPtr);
	pPtr=NULL;
	
	return 0;
}
int SummationOfOdd(int iArr[], int iSize)
{
    int iEven = 0,iOdd=0,iCnt=0;
    
    if(iArr == NULL) // (Company ch vi4) If the pointer is NULL means there is no memory
    {
    	return ERRMEMORY;
    }
    if(iSize <=0 )
    {
    	return ERRORSIZE;
    }
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
    	if(iCnt % 2 == 0)
        	iEven = iEven + iArr[iCnt];
        else
        	iOdd= iOdd + iArr[iCnt];
    }
    
    return  iOdd - iEven;
    
}
