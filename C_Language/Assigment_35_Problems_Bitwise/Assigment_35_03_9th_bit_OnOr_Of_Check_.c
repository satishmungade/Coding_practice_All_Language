#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT ;
# define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT iNo);
int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    bRet = CheckBit(iNo);
  
    if(bRet == TRUE)
    {
        printf("\n9th bit is on\n");
    }
    else
    {
        printf("\n9th bit is Off\n");
    }
    return 0;
}

BOOL CheckBit(UINT iNo)
{
    int iMask = 0X00000100; 
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
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

