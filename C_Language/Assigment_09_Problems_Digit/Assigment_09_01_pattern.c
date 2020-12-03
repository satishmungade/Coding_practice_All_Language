/*
1.Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $ * $ * $ * $ * $ *
Input : 3
Output : $ * $ * $ *
Input : -3
Output : $ * $ * $ *
*/
#include<stdio.h>
void pattern(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	pattern(iNo);
	return 0;

}
void pattern(int iNo)
{
	int iCounter;
	if(iNo < 0)
	{
		iNo= -iNo;
	}
	for(iCounter = 1; iCounter <= iNo ;iCounter ++)
	{
		printf("$\t * \t ");
	}
}