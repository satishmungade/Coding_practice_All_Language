/*3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1) */

#include<stdio.h>
int Factorial(int );
int main()
{
        int iNo,iAns =0;
        printf("Enter a Number\t");
        scanf("%d",&iNo);
        iAns=Factorial(iNo);
        printf("Factorial  of %d : %d",iNo,iAns);
        return 0;

}

 int Factorial(int iNo)
{
	int iCnt,iFact=1;  
	if(iNo == 1)
		return iFact;

	for (iCnt =1 ;iCnt <= iNo ; ++ iCnt )
		iFact *= iCnt;

	return iFact ;
} 

/* 
 recurion logic 
int Factorial(int iNo)
{
        if(iNo == 1)
                return 1;
        else
                return iNo * Factorial(iNo - 1);
}
*/