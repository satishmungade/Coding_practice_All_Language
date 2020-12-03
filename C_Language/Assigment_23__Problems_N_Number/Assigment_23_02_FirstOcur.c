#include<stdio.h>
#include<stdlib.h>
int FirstOccur(int iArr[],int iLength,int iNo)
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
    
	for(iCnt =0 ;iCnt < iLength ;iCnt ++)
	{
		if(iArr[iCnt] == iNo)
				break ;
					
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
	
}
int main()
{
	int iLength=0,iNo=0,iCnt=0;
	int *pPtr=NULL;
	int iRet=0;

	printf("\n\n Enter A Length for Array :");
	scanf("%d",&iLength);

	printf("\n Enter a number check pareset or not :");
	scanf("%d",&iNo);

	pPtr=(int *)malloc(iLength *sizeof(int));
	if(NULL==pPtr)
	{
		printf("\n Error : Memory Allocation is Faild");
		return -1;
	}


	printf("\nEnter a Element Array :");
	for(iCnt =0 ;iCnt < iLength ; iCnt ++)
	{
		printf("\nValues index Number [%d] is\t:",iCnt);
		scanf("%d",&pPtr[iCnt]);
	}

	iRet=FirstOccur(pPtr,iLength,iNo);
	if(iRet == -1 )
	{
		printf("\n There is no Such Number");
	}
	else
	{
		
		printf("First Occurrence of Number is :%d",iRet);
	}

	free(pPtr);
	pPtr=NULL;
}
