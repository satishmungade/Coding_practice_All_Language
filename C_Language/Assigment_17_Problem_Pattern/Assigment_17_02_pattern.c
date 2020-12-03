/*Input : iRow = 4 iCol = 4
Output : * * * *
		 * * * #
		 * * # #
		 * # # #

*/
#include<stdio.h>
void Pattern(int , int);
int main()
{
	int iRow=0,iCol=0;

	printf("\n Enter a Row  :");
	scanf("%d",&iRow);
	
	printf("\n Enter a Col :");
	scanf("%d",&iCol);

	Pattern(iRow,iCol);

	return 0;
}
void Pattern(int iRow,int iCol)
{
	int iCnt=0, iCnt1=0;
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	if(iCol < 0)
	{
		iCol =-iCol;
	}
	if(iRow != iCol)
	{
		printf(" ! Invalid Input !");
		return ;
	}
	for(iCnt =1 ;iCnt <= iRow ;iCnt ++)
	{
		for(iCnt1 = iCol ; iCnt1 >= 1  ;iCnt1 -- )   //colums revers perinting
		{
				if(iCnt1 < iCnt)   // Row big icol
					printf("#\t");
				else
					printf("*\t");
		}
		printf("\n");
	}
}