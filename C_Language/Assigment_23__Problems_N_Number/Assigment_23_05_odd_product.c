#include<stdio.h>
#include<stdlib.h>
void FirstOccur(int iArr[],int iLength)
{
	int iCnt ,i=0,iRet;
	if(iArr == NULL)         
    {
        printf("Invalid address");
        return ;       
    }
    if(iLength <= 0)          
    {
        printf("Invalid size\n");
        return ;         
    }
    
	for(iCnt =0 ;iCnt <iLength ;iCnt ++)
	{
		if(iArr[iCnt] % 2 ==1)
			{
				i=iArr[iCnt];
			}	
			
	}
	printf("%d",i);
	
}
int main()
{
	int iLength=0,iCnt=0;
	int *pPtr=NULL;
	int iRet=0;

	printf("\n\n Enter A Length for Array :");
	scanf("%d",&iLength);

	

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

	FirstOccur(pPtr,iLength);
	

	free(pPtr);
	pPtr=NULL;

	return 0;
}