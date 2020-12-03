#include<stdio.h>
typedef unsigned int UINT ;
int CheckBit(UINT iNo);
int main()
{
    int iNo = 0,iRet =0;
    printf("\nEnter a number :");
    scanf("%d",&iNo);
    iRet = CheckBit(iNo);
    printf("\nModified range %d",iRet);
    
}
int CheckBit(UINT iNo)
{
    int iMask=0x00000009,iResult=0;
    
    if(iNo < 0)   
    {
        iNo = -iNo;
    }
    iResult = iNo | iMask;
    return iResult;
}