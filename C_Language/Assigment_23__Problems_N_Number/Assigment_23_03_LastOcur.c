#include<stdio.h>
#include<stdlib.h>


int LastOccur(int iArr[],int iLength,int iNo)
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
    int a=iArr[0];
    for(iCnt = iLength -1 ;iCnt >= 0 ; iCnt --)
    {
    	if(iArr[iCnt] == iNo)
    		 break;
    	 
    }
    if(iCnt == -1)
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

	iRet=LastOccur(pPtr,iLength,iNo);
	if(iRet == -1)
	{
		printf("\n There is no Such Number");

	}
	else
	{
		printf("Last Occurrence of Number is :%d",iRet);
	}

	free(pPtr);
	pPtr=NULL;
}