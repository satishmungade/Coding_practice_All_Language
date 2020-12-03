#include<stdio.h>
#include<stdlib.h>
int Minimum(int arr[],int Size);
int main()
{
	int iNo=0,iCnt=0,iRet=0;
	int *pPtr=NULL;

	printf(" \n Enter  The values of N :");
	scanf("%d",&iNo);
	
	pPtr=(int *)malloc(iNo *sizeof(int));
	
	if(NULL == pPtr )
	{
		printf("Memory allocation faild");
		return -1;
	}
	
	printf("\n Enter a Element in Array :");	
	for(iCnt=0; iCnt < iNo ; iCnt ++)
	{
		printf("\nValues index Number [%d] is\t:",iCnt);
		scanf("%d",&pPtr[iCnt]);
	}
	
	iRet=Minimum(pPtr,iNo);
	printf("\n Minimum Number is:%d ",iRet);
	
	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
int Minimum(int iArr[],int iSize)
{
	int iCnt=0,iMin=0;
	iMin=iArr[0];
	if(iArr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
	
	
	
	for(iCnt =1 ;iCnt < iSize ;iCnt ++)
	{
		if(iArr[iCnt] < iMin)
			iMin=iArr[iCnt];
		
	}	
	return iMin;
}		