/*4. Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1 3 5 7 9 11 13 15 17
*/
#include<stdio.h>
void odd(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	odd(iNo);
	return 0;

}
void odd(int iNo)
{
	int iCounter;
	if(iNo < 0)
	{
		iNo= -iNo;
	}
	for(iCounter = 1 ; iCounter <= iNo ;iCounter ++)
	{
		if( ( iCounter % 2 ) == 1)
			printf("%d\t",iCounter);
			
	}	
}	