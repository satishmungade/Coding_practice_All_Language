#include<stdio.h>
#include<stdlib.h>
void Digit(int arr[],int Size);
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
	
	
	
	Digit(pPtr,iNo);
	
	free(pPtr);
	pPtr=NULL;		
	return 0;
}
void Digit(int iArr[],int iSize)
{
	int i, iCnt=0,iNo=0,iCount=0;
	if(iArr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
	
	for(iCnt =0 ;iCnt < iSize ;iCnt ++)
	{
		iNo=iArr[iCnt];
		iCount =0;

		while(iNo > 0)
		{
			iNo =iNo / 10;
			iCount ++;
			
		}
		if(iCount == 3)
			printf("\n%d-> %d",iArr[iCnt],iCount);
	}	
}