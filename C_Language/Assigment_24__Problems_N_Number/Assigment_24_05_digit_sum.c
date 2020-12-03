#include<stdio.h>
#include<stdlib.h>
void SumDigit(int iArr[],int iSize)
{
	int iCnt=0,iNo,iDigit=0,iSum=0;
	if(iArr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
	

	for(iCnt =0;iCnt < iSize ;iCnt ++)
	{
		iNo =iArr[iCnt];
		iSum=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			iDigit =iNo % 10;
			iSum = iSum +iDigit ;
			iNo =iNo /10 ;
		}
		printf("\n %d -> %d ",iArr[iCnt],iSum);
	}

}
int main()
{
	int iNo=0,iCnt=0;
	int *pPtr=NULL;
	

	printf("\nEnter  The values of N :");
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
	
	
	
	SumDigit(pPtr,iNo);
	
	free(pPtr);
	pPtr=NULL;		
	return 0;
}
