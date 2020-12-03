#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRSIZE -2
int CountEven(int arr[],int Size);
int main()
{
	int iNo=0,iCnt=0,iRet=0;
	int *pPtr=NULL;
	
	pPtr=(int *)malloc(iNo *sizeof(int));
	
	
	
	printf("Enter  The values of N :");
	scanf("%d",&iNo);
	if(NULL == pPtr )
	{
		 printf("Error : Unable to allocate memory\n");
		return -1;
	}

	printf("\n Enter a Element in Array :");	
	for(iCnt=0; iCnt < iNo ; iCnt ++)
	{
		printf("\nValues index Number [%d] is\t:",iCnt);
		scanf("%d",&pPtr[iCnt]);
	}
	
	printf("Your Entered Element : \n");
	for(iCnt =0 ;iCnt < iNo ;iCnt ++)
	{
		printf("%d\t",pPtr[iCnt]);
	}
	
	iRet=CountEven(pPtr,iNo);
	if(iRet == ERRSIZE)
    {
        printf("Error : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)
    {
        printf("Error : Invalid memory address\n");
    }
    else
    {
		printf("Frequency Of Even Count :%d ",iRet);
	}

	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
int CountEven(int iArr[],int iSize)
{
	int iCnt=0,iEven=0;
	if(iArr == NULL)         // If the pointer is NULL means there is no memory
    {
        return ERRMEMORY;       // return -1
    }
    if(iSize <= 0)          // If the size of array is invalid
    {
        return ERRSIZE;         // return -2
    }
	
	for(iCnt =0 ;iCnt < iSize ;iCnt ++)
	{
		if(iArr[iCnt] % 2 ==0 )
			iEven ++;		
	}	
	return iEven;
}