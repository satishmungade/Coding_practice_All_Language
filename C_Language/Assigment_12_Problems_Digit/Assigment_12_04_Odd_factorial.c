/*4. Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)*/

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
	int iCnt,iFact=1;  
	if(iNo == 1)
		return iFact;
	if(iNo < 0)
	{
		iNo =-iNo;
	}
				
	for (iCnt =1 ;iCnt <= iNo ; ++ iCnt )
		if(iCnt %2 ==1)
		{		
			iFact *= iCnt;
		}			
	return iFact ;
} 
