#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT ;
# define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT iNo,int iPos,int iPos1);
int main()
{
    int iNo = 0,iPos=0,iPos1=0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter a Position number\n");
    scanf("%d",&iPos);

    printf("Enter a Anotherone Position number\n");
    scanf("%d",&iPos1);    
    bRet = CheckBit(iNo,iPos,iPos1);
  
    if(bRet == TRUE)
    {
        printf("\nThat Position bit is on\n");
    }
    else
    {
        printf("\nThat Position  bit is Off\n");
    }
    return 0;
}

BOOL CheckBit(UINT iNo,int iPos,int iPos1)
{
    int iMask = 0X00000001; 
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iMask=iMask << (iPos -1);
    iMask=iMask << (iPos1 -1);
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

