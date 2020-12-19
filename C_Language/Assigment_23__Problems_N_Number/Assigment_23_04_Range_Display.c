#include<stdio.h>
#include<stdlib.h>
void PrintElement(int Arr[],int ilength,int iStart,int iEnd);
int main()
{
	int iNum=0,iStart=0,iEnd=0,iCnt=0;
	int *pPtr=NULL;
	printf("\nEnter a Number of element you want :");
	scanf("%d",&iNum);
	
	pPtr=(int *)malloc(iNum*sizeof(int ));
	if(pPtr==NULL)
	{
		printf("\n Memory Allocation is faild");
		return -1;
	}
	
	for(iCnt =0 ;iCnt < iNum ; iCnt ++)
	{
		printf("\n Enter a element for Array :");
		scanf("%d",&pPtr[iCnt]);
	}
	printf("\n Enter a Number Start to print element :");
	scanf("%d",&iStart);
	printf("\nEnter a Number to Stop print element :");
	scanf("%d",&iEnd);
	PrintElement(pPtr,iNum,iStart,iEnd);
	return 0;
}
void PrintElement(int Arr[],int ilength,int iStart,int iEnd)
{
	int iCnt=0;
	if(Arr == NULL)
	{
		printf("\n ivalid Address :");
		return;
	}
	if(ilength <= 0)
	{
		printf("\nivalid size Array :");
		return;
	}
	for(iCnt =0; iCnt < ilength ;iCnt ++)
	{
		if((Arr[iCnt] >= iStart) && (Arr[iCnt] <=iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	printf("offf\n");

}
