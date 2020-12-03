/*1.Write a program which accept number from user and display below pattern.
Input : 5
Output : * * * * * # # # # #
Input : 6
Output : * * * * * * # # # # # # #
Input : -5
Output : * * * * * # # # # #
Input : 2
Output : * * # #
# */

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
				printf("\t*");
		}
	for(iCounter = 1; iCounter <= iNo ;iCounter ++)
		{
				printf("\t#");
		
		}	
}