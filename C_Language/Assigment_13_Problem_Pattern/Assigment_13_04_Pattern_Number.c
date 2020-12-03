/*4. Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 **/
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
	for(iCnt =1 ;iCnt <= iNo ; iCnt ++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}