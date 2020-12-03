/*
1. Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.
Input : 75
Output : Medium
*/


#include<stdio.h>
void Number(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Number(iNo);
	return 0;

}
void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("Small :%d",iNo);
	}
	else if(iNo <= 100)
	{
		printf("Medium %d:",iNo);	
	}
	else
	{
		printf("large :%d",iNo);
	}
}