/* 3. Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4
*/

#include<stdio.h>
void Display(int iNo);
void DisplayX(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Display(iNo);
	DisplayX(iNo);
	return 0;

}
void Display(int iNo)
{
	
	int iNo1=iNo;
	
	if(iNo < 0);
	{
		iNo = -iNo;
	} 
	
	
	while(iNo <= iNo1)
	{
		printf("%d\t ",iNo);
		 iNo ++ ;
		
	}
printf("\n");
}

// both logic same using while and for
void DisplayX(int iNo)
{
	int iCnt=0;

	for(iCnt = -iNo;iCnt <= iNo; iCnt ++)
	{
		printf("%d\t",iCnt);
	}
}
