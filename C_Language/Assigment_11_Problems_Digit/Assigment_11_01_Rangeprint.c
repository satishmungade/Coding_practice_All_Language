/*1.Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
Input : 10 18
Output : 10 11 12 13 14 15 16 17 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2*/

#include<stdio.h>
void RangeDisplay(int ,int);
int main()
{
	int iNo,iNo1;
	printf("Enter a  Number1 :");
	scanf("%d",&iNo);
	printf("\n Enter a  Number2 :");
	scanf("%d",&iNo1);
	RangeDisplay(iNo,iNo1);
	return 0;

}
void RangeDisplay(int iNo,int iNo1)
{
	int iCounter =iNo;
	if(iNo < 0 && iNo1 < 0)
	{
		iNo = -iNo;
		iNo1 = -iNo1;
	}

	if (iNo > iNo1)
	{
		printf("\n !! Invalid choice !!");
		return;
	}
	
	for(iCounter = iNo; iCounter <= iNo1 ;iCounter ++)
	{
		printf("%d\t",iCounter);
	}
}