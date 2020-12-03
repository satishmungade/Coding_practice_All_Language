#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT ;
# define TRUE 1
#define FALSE 0
BOOL CheckBit(UINT iNo,int iPos);
int main()
{
    int iNo = 0,iPos=0;
    BOOL bRet = FALSE;
    
    printf("\nEnter a number :");
    scanf("%d",&iNo);
    printf("\nEnter a Position :");
    scanf("%d",&iPos);    
    bRet = CheckBit(iNo,iPos);
    if(bRet == TRUE)
    {
        printf("\nYour Position bit is on\n");
    }
    else
    {
        printf("\nYour Position bit is Off\n");
    }
    return 0;
}
BOOL CheckBit(UINT iNo,int iPos)
{
    int iMask=0x00000001,iResult=0;
    int iRem = 0,iCount=0;
    if(iNo < 0)   //Updater
    {
        iNo = -iNo;
    }
    if(iPos < 1 || iPos > 32) //Filter
    {
        return 0;
    }
    iMask=iMask << (iPos -1); //pos -1 karun tevth bit ne left shif hoyach
    
    iResult =iNo & iMask;
    
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}    

