/* 2. Write a program which accept number from user and print even factors of that
number.
Input : 24
Output: 1 2 4 6 8 12
*/
#include<stdio.h>
void DisplayFactor(int);
int main()
{
	int iValue =0;

	printf("Enter a Number :");
	scanf("%d",&iValue);

	DisplayFactor(iValue);

	return 0;
}
void DisplayFactor(int iNo)
{
	int iCounter ;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(iCounter =1 ; iCounter <= iNo /2 ;iCounter ++)
	{
		
		if (iNo % iCounter  == 0)
		{
			
				printf("%d\t",iCounter);

		}

	}
}