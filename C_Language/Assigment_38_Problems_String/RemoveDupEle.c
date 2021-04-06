#include <stdio.h>
void fun(char szStr[])
{
	if(szStr == NULL)
		return ;
	int iCount=0,iDup=0,i=0;
	while(szStr[iCount ]!='\0')
	{
		iCount ++;
	}
	char fresh[50]={0};
	printf("\n Total String count is :%d",iCount);
	for(int iCnt = 0 ; iCnt < iCount ; iCnt ++)
	{
		for (int iCnt1 = iCnt + 1; iCnt1 < iCount; iCnt1 ++)
		{
			if(szStr[iCnt]==szStr[iCnt1])
			{	
				for(int k = iCnt1; k < iCount; k++)
    			{
    				szStr[k] = szStr[k + 1];
				}
				iCount--; //Delete after Decrement size also
				iCnt1 --;	//2nd array deleted element back to start
				iDup ++;	//deleted element count take it
			}
		}
				
	}
	
	printf("\n Duplicate Element Deleted  and Fresh String : %s",szStr);
	printf("\n Duplicate Element Deleted count is  %d",iDup);
}
int main(void)
{

	char szStr[]="HellloHe";
	printf("\n Your Fresh String %s",szStr);
	fun(szStr);
	return 0;
}