/*1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E*/

#include<stdio.h>
void Pattern(int iNo);
int main()
{
	int iNo=0;
	printf("Enter A Number For Pattern :");
	scanf("%d",&iNo);
	Pattern(iNo);

	return 0;
}
void Pattern(int iNo)
{

	int iCnt=0;
	if(iNo < 0)
	{
		iNo =-iNo;
	}
	for(iCnt =0 ;iCnt < iNo; iCnt ++ )
	{
		printf("%c \t",'A'+ iCnt);    // put Small a
	}
}