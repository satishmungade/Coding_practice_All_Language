#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int arr[],int Size);
int main()
{
	int iNo=0,iCnt=0;
	BOOL bRet=FALSE;
	int *pPtr=NULL;
	
	pPtr=(int *)malloc(iNo *sizeof(int));
	
	if(NULL == pPtr )
	{
		printf("Memory allocation faild");
		return -1;
	}
	
	printf("Enter  The values of N :");
	scanf("%d",&iNo);

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
	
	bRet=Check(pPtr,iNo);
	if(bRet == TRUE)
		printf("\n 11 is Present ");
	else
		printf("\n 11 is absent ");

	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
int Check(int iArr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt =0 ;iCnt < iSize ;iCnt ++)
	{
		if(iArr[iCnt] == 11)
			return TRUE;
			 			
	}
		return 0;
	 
}