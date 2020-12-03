/*
2.Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
input : 1018
Output : 2
Input : -1018
Output : 2
Input : 846
output 3
*/
#include<stdio.h>
int CountOddDigits(int);
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = CountOddDigits(iValue);
    
    printf("Number of odd digits are : %d\n",iRet);
    
    return 0;      
}

int CountOddDigits(int iNo)                
{
    int iCnt = 0;                           
    int iDigit = 0;      
    if(iNo < 0)
    {
        iNo = -iNo;
    }                    

    while(iNo != 0)
    {
      iDigit =iNo % 10; 

      if(iDigit % 2== 1)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

