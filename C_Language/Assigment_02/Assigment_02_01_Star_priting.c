/*1. Accept one number from user and print that number of * on screen */
#include<stdio.h>
void Display(int iValue);

int main()
{
	int iValue =0;
	printf("Enter A Number : ");
	scanf("%d",&iValue);
	Display(iValue);	
	return 0;
}
void Display(int iValue)
{
	int iCounter =0;
	for (iCounter =1;iCounter <= iValue; iCounter ++)
	{
		printf("* \t");
	}
}
