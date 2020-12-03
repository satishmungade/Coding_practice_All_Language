#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
# define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT iNo);
void DisplayBinary(UINT iValue);

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
        
    bRet = CheckBit(iNo);
    DisplayBinary(iNo);
    if(bRet == TRUE)
    {
        printf("\n7th and 8th 9th bit is on\n");
    }
    else
    {
        printf("\n7th and 8th 9th bit is Off\n");
    }
    return 0;
}
 
BOOL CheckBit(UINT iNo)
{
    int iMask = 0X000001c0; //8 +4 =12 hexa c
    
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
void DisplayBinary(UINT iValue)
{
    int iRem = 0;
    while(iValue != 0)
    {
        iRem = iValue % 2;
        iValue = iValue / 2;
        printf("%d\t",iRem); 
        
    }
}
