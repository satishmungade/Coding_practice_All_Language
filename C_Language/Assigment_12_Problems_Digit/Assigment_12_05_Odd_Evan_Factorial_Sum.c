/*5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)*/
#include<stdio.h>
int OddFactorial(int );
int main()
{
        int iNo,iAns =0;
        printf("Enter a Number\t :");
        scanf("%d",&iNo);
        iAns=OddFactorial(iNo);
        printf("Factorial  of Odd Number :%d",iAns);
        return 0;

}

 int OddFactorial(int iNo)
{
	int iCnt,iFactOdd=1,iFactEven=1,iFact=0;  
	if(iNo == 1)
		return iFact;
	if(iNo < 0)
	{
		iNo =-iNo;
	}
				
	for (iCnt =1 ;iCnt <= iNo ; ++ iCnt )
		if(iCnt %2 ==1)
		{		
			iFactOdd *= iCnt;
		}	

	for (iCnt =1 ;iCnt <= iNo ; ++ iCnt )
		if(iCnt %2 ==0)
		{		
			iFactEven *= iCnt;
		}			
	return iFact= iFactEven - iFactOdd ;
} 
