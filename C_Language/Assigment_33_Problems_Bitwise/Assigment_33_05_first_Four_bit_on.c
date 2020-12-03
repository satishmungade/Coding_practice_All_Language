#include<stdio.h>
typedef unsigned int UINT ;
UINT OffBit(UINT );
int main()
{
	int iNo,iRet=0;
	printf("\nEnter A Number :");
	scanf("%d",&iNo);
	iRet=OffBit(iNo);
	printf("\n Modified Renge is :%d",iRet);
	return 0;
}
UINT OffBit(UINT iNo)
{
	int iMask = 0X0000000F; 
    int iRet=0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    iRet = iNo | iMask;
    
	return iRet ;
}