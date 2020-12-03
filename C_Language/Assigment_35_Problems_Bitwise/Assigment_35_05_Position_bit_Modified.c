#include<stdio.h>
typedef unsigned int UINT ;

int CheckBit(UINT iNo,int iPos ,int iPos1);
int main()
{
    int iNo = 0,iPos=0,iPos1=0 ,iRet =0;
    
    printf("\nEnter a number :");
    scanf("%d",&iNo);

    printf("\nEnter a Position :");
    scanf("%d",&iPos);    
    
    printf("\nEnter a Anotherone Position number :");
    scanf("%d",&iPos1);   

    iRet = CheckBit(iNo,iPos,iPos1);
    printf("\nModified range %d",iRet);
    
}
int CheckBit(UINT iNo,int iPos,int iPos1)
{
    int iMask=0x00000001,iResult=0;
    
    if(iNo < 0)   
    {
        iNo = -iNo;
    }
    if(iPos < 1 || iPos > 32 || iPos1 < 1 || iPos1 > 32) 
    {
        return 0;
    }
  
    iMask=iMask << (iPos -1) & iMask << (iPos1 -1);   
    //iMask=iMask << (iPos1 -1);     
    iResult =iNo ^ iMask;
    return iResult;
}