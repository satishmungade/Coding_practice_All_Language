/*5.Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
Input : 10 18
Output : 18 17 16 15 14 13 12 11 10
Input : 10 10
Output : 10
Input : -10 2
Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10*/
#include<stdio.h>
void ReversRange(int ,int);
int main()
{
	int iNo,iNo1;
	printf("Enter a small Number1 :");
	scanf("%d",&iNo);
	printf("\n Enter big  Number2 :");
	scanf("%d",&iNo1);
	ReversRange(iNo,iNo1);
	return 0;

}
void ReversRange(int iNo,int iNo1)
{
	int iCounter =iNo1;
	if(iNo1 < iNo)
	{
		printf("\n !! Invalid Choice !!");
	}
	for(iCounter = iNo1; iCounter >= iNo ;  iCounter --)
	{
		
			printf("%d\t",iCounter);
			
	}	
}