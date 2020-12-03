/*2.Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1 2 3 4 5 6 7 8*/

#include<stdio.h>
void Display(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;

}
void Display(int iNo)
{
	int iCounter;
	if(iNo < 0)
	{
		iNo= -iNo;
	}
	for(iCounter = 1; iCounter <= iNo ;iCounter ++)
	{
		printf("%d\t",iCounter);
	}
}