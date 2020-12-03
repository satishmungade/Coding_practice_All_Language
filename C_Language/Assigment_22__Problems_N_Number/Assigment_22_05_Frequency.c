#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int Size,int iFind);
int main()
{
	int iRet=0, iNo=0,iCnt=0,iFind=0;
	
	int *pPtr=NULL;
	
	pPtr=(int *)malloc(iNo *sizeof(int));
	
	if(NULL == pPtr )
	{
		printf("Memory allocation faild");
		return -1;
	}
	
	printf("Enter  The values of N :");
	scanf("%d",&iNo);

	printf("\n Enter  The iFind of  :");
	scanf("%d",&iFind);

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
	
	iRet=Frequency(pPtr,iNo,iFind);
	printf("\nCount of Frequency :%d",iRet);

	free(pPtr);
	pPtr=NULL;		
	
	return 0;
}
int Frequency(int iArr[],int iSize,int iFind)
{
	int iStart=0,iEnd=0,iCount=0;
	
	for(iStart=0,iEnd =iSize -1 ;iStart <= iEnd ; iStart ++,iEnd --) //both side traver that find element at low itteration
	{
		if(( iStart== iEnd ) && (iArr[iStart] == iFind))
		{
			iCount ++;
			break;
		}
		if(iArr[iStart] == iFind)  
		{	
			 iCount ++;
		}
		if (iArr[iEnd]==iFind)
		{
			iCount++ ;
		}

	}
	return iCount;
	 
}