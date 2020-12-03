/*3.Write a program to find even factorial of given number.
Input : 5
Output : 8 (4 * 2)
Input : -5
Output : 8 (4 * 2)
Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)
*/
#include<stdio.h>
int EvenFactorial(int );
int main()
{
        int iNo,iAns =0;
        printf("Enter a Number\t :");
        scanf("%d",&iNo);
        iAns=EvenFactorial(iNo);
        printf("Factorial  of Evan Number %d :",iAns);
        return 0;

}

 int EvenFactorial(int iNo)
{
	int iCnt,iFact=1;  
	if(iNo == 1)
		return iFact;
	if(iNo < 0)
	{
		iNo =-iNo;
	}
				
	for (iCnt =1 ;iCnt <= iNo ; ++ iCnt )
		if(iCnt %2 ==0)
		{		
			iFact *= iCnt;
		}			
	return iFact ;
} 
