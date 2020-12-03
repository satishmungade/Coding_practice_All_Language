/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864

*/

#include<stdio.h>
int MultDigits(int);
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);
    
    printf("Number Multification is : %d\n",iRet);
    
    return 0;      
}

int MultDigits(int iNo)                
{
    int iCnt =0,iDigit = 0,iMult =0;                          

    while(iNo != 0)
    {
        iDigit =iNo % 10; 
        iMult =iMult * iDigit;
        iCnt ++;
        iNo = iNo / 10;
    
    }
    
    return iMult;
}

