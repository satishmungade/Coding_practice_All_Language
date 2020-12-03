/*1.Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14 */


#include<stdio.h>
void PrintEven(int);
int main()
{
	int iValue=0;
	printf("Enter a Number : ");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}
void PrintEven(int iNo)
{
	int iCounter =0,iAns=0;
	if(iNo <= 0)
	{
		return;
	}

	iNo = iNo + iNo ;
	

	for(iCounter = 1 ; iCounter <= iNo ; iCounter ++)
	{
		if((iCounter % 2) ==0)
		{
			printf ("%d \t ",iCounter);
		}
	}
}