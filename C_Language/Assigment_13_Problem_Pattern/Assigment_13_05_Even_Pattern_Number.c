/*5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16*/

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
	for(iCnt =1 ;iCnt <= iNo*2 ; iCnt ++)
	{
		if(iCnt % 2==0)
		{	
			printf("%d\t",iCnt);
		}
	}

}