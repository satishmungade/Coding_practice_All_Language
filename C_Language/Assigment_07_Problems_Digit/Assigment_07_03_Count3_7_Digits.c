/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0


*/
#include<stdio.h>
int CountDigits(int);
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = CountDigits(iValue);
    
    printf("Number of digits are : %d\n",iRet);
    
    return 0;      
}

int CountDigits(int iNo)                
{
    int iCnt = 0;                           
    int iDigit = 0;                          
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    while(iNo != 0)
    {
      iDigit =iNo % 10; 
      if((iDigit >= 3) && (iDigit <= 7))
      //if(iDigit == 3 || iDigit == 4 || iDigit == 5 || iDigit ==6 || iDigit == 7)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

        