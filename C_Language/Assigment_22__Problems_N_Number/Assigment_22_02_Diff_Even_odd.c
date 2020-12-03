#include<stdio.h>
#include<stdlib.h>
int DiffEvenOdd(int arr[],int Size);
int main()
{
	int iNo=0,iCnt=0,iRet=0;
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
	
	iRet=DiffEvenOdd(pPtr,iNo);
	printf("Diff Of Even-Odd :%d ",iRet);
	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
int DiffEvenOdd(int iArr[],int iSize)
{
	int iCnt=0,iEven=0,iOdd=0;
	
	for(iCnt =0 ;iCnt < iSize ;iCnt ++)
	{
		if(iArr[iCnt] % 2 ==0 )
			iEven ++;
		else
		{
			if(iArr[iCnt] % 2==1)
				iOdd ++;
		}
			 			
	}	
	
		return iEven - iOdd;
	 

}