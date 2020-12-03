#include<stdio.h>
typedef unsigned int UINT ;

int CheckBit(UINT iNo,int iPos);
int main()
{
    int iNo = 0,iPos=0, iRet =0;
    
    printf("\nEnter a number :");
    scanf("%d",&iNo);
    printf("\nEnter a Position :");
    scanf("%d",&iPos);    
    iRet = CheckBit(iNo,iPos);
    printf("\nModified range %d",iRet);
    
}
int CheckBit(UINT iNo,int iPos)
{
    int iMask=0x00000001,iResult=0;
    
    if(iNo < 0)   
    {
        iNo = -iNo;
    }
    if(iPos < 1 || iPos > 32) 
    {
        return 0;
    }
  
    iMask=iMask << (iPos -1); //pos -1 karun tevth bit ne left shif hoyach
    
    iResult =iNo ^ iMask;
    return iResult;
}