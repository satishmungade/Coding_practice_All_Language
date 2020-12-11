/*
5.Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3

Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/
#include<stdio.h>
int CountLessSix(int);
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);
    
    iRet = CountLessSix(iValue);
    
    printf("Number of Count is : %d\n",iRet);
    
    return 0;      
}

int CountLessSix(int iNo)                
{
    int iCnt = 0;                           
    int iDigit = 0;                          

    while(iNo != 0)
    {
      iDigit =iNo % 10; 

      if( iDigit < 6)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}
