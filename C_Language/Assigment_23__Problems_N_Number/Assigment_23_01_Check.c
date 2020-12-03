#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iArr[],int iLength,int iNo)
{	
	int iCnt ;
	if(iArr == NULL)         
    {
        printf("Invalid address");
        return 0;       
    }
    if(iLength <= 0)          
    {
        printf("Invalid size\n");
        return 0;         
    }

	for(iCnt =0 ;iCnt <iLength ;iCnt ++)
	{
		if(iArr[iCnt]==iNo)
			break ;
		else 
			continue ;			
	}
	if(iArr[iCnt] == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}
int main()
{
	int iLength=0,iNo=0,iCnt=0;
	int *pPtr=NULL;
	BOOL bRet=FALSE;

	printf("\nEnter A Length for Array :");
	scanf("%d",&iLength);

	printf("Enter a number check pareset or not :");
	scanf("%d",&iNo);

	pPtr=(int *)malloc(iLength *sizeof(int));
	if(NULL==pPtr)
	{
		printf("\n Error : Memory Allocation is Faild");
		return -1;
	}


	printf("Enter a Element Array :");
	for(iCnt =0 ;iCnt < iLength ; iCnt ++)
	{
		scanf("%d",&pPtr[iCnt]);
	}

	bRet=Check(pPtr,iLength,iNo);
	
	if(bRet == TRUE )
	{
		printf("\n Number is pareset");

	}
	else
	{
		printf("\n Number is Not pareset");
	}

	free(pPtr);
	pPtr=NULL;
}